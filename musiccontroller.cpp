#include "MusicController.h"
#include <QUrl>
#include <QFileInfo>
#include <QtMultimedia/QtMultimedia>
#include <QString>
#include <QDebug>
#include <QtMultimedia>
#include <QMediaMetaData>
#include <QDir>
#include <QFileInfoList>
#include <QVariant>
#include <QDate>
#include <algorithm>
MusicController::MusicController(QObject *parent)
    : QObject{parent},
    m_currentArtist(""),
    m_currentTitle(""),
    m_currentCover(QUrl("")),
    m_volume(1.0)
{

mediaPlayer = new QMediaPlayer(this);
audioOutput = new QAudioOutput(this);
mediaPlayer->setAudioOutput(audioOutput);
audioOutput->setVolume(m_volume);
scanMusicDirectory();
connect(mediaPlayer, &QMediaPlayer::mediaStatusChanged,
        this, [this](QMediaPlayer::MediaStatus status) {
            if (status == QMediaPlayer::LoadedMedia ||
                status == QMediaPlayer::BufferedMedia) {
                loadInfoSong();
            }
        });
//
connect(mediaPlayer, &QMediaPlayer::playbackStateChanged,
        this, [this](QMediaPlayer::PlaybackState state) {
            emit isPlayingChanged(state == QMediaPlayer::PlayingState);
        });
connect(mediaPlayer, &QMediaPlayer::durationChanged,
        this, &MusicController::durationChanged);

connect(mediaPlayer, &QMediaPlayer::positionChanged,
        this, &MusicController::positionChanged);
//
QTimer *timer = new QTimer(this);
connect(timer, &QTimer::timeout, this, [this]() {
    emit timechanged(gettime());
});
timer->start(1000); // mỗi giây
connect(timer, &QTimer::timeout, this, [this]() {
    emit datechanged(getdate());
});
// connect volume
connect(audioOutput, &QAudioOutput::volumeChanged,
        this, &MusicController::volumeChanged);

}
QString MusicController::currentTitle()   const
{
    return m_currentTitle;
}
QString MusicController::currentArtist() const
{
    return m_currentArtist;
}
QVariant MusicController::currentCover() const
{
    return m_currentCover;
}

bool MusicController::isPlaying()
{
    return mediaPlayer->playbackState() == QMediaPlayer::PlayingState;
}


void MusicController::playMusic()
{
    if (playlist.isEmpty()) {
        qWarning() << "Playlist is empty. Cannot play music.";
        return;
    }
    if (mediaPlayer->playbackState() == QMediaPlayer::PlayingState) {
        mediaPlayer->pause();
        emit isPlayingChanged(false);
    } else {
        if (mediaPlayer->source().isEmpty()) {
            QString firstSong = playlist.first();
            mediaPlayer->setSource(QUrl::fromLocalFile(firstSong));
        }
        mediaPlayer->play();
        emit isPlayingChanged(true);
    }
}

void MusicController::nextSong()
{
    if (playlist.isEmpty()) {
        qWarning() << "Playlist is empty. Cannot skip to next song.";
        return;
    }

    QString currentFile = mediaPlayer->source().toLocalFile();
    int currentIndex = playlist.indexOf(currentFile);
    int nextIndex = (currentIndex + 1) % playlist.size();
    QString nextSong = playlist.at(nextIndex);

    mediaPlayer->setSource(QUrl::fromLocalFile(nextSong));
    mediaPlayer->play();
    emit isPlayingChanged(true);
}

void MusicController::previousSong()
{
    if (playlist.isEmpty()) {
        qWarning() << "Playlist is empty. Cannot skip to previous song.";
        return;
    }

    QString currentFile = mediaPlayer->source().toLocalFile();
    int currentIndex = playlist.indexOf(currentFile);
    int previousIndex = (currentIndex - 1 + playlist.size()) % playlist.size();
    QString previousSong = playlist.at(previousIndex);

    mediaPlayer->setSource(QUrl::fromLocalFile(previousSong));
    mediaPlayer->play();
    emit isPlayingChanged(true);
}





void MusicController::scanMusicDirectory()
{
    QDir dir(musicDirectory);
    QStringList nameFilters = {"*.mp3", "*.wav", "*.ogg", "*.flac", "*.m4a"};
    QFileInfoList fileInfoList = dir.entryInfoList(nameFilters, QDir::Files);
    playlist.clear();
    for (const QFileInfo &fileInfo : fileInfoList) {
        playlist.append(fileInfo.absoluteFilePath());
    }
}

void MusicController::loadInfoSong()
{
    if (!mediaPlayer || mediaPlayer->source().isEmpty())
        return;

    QMediaMetaData metaData = mediaPlayer->metaData();

    QString title = metaData.stringValue(QMediaMetaData::Title);
    auto artist = metaData.stringValue(QMediaMetaData::ContributingArtist);
    m_albumArt = metaData.value(QMediaMetaData::ThumbnailImage).value<QImage>();

    if (artist.isEmpty()) {
        artist = metaData.stringValue(QMediaMetaData::ContributingArtist);
    }

    if (title.isEmpty()) {
        title = QFileInfo(mediaPlayer->source().toLocalFile()).baseName();
    }

    if (artist.isEmpty()) {
        artist = "Unknown Artist";
    }

    if (m_currentTitle != title) {
        m_currentTitle = title;
        emit songChanged(m_currentTitle);
    }

    if (m_currentArtist != artist) {
        m_currentArtist = artist;
        emit artistChanged(m_currentArtist);
    }

    emit albumArtChanged();
    qDebug() << "INFO:" << m_currentTitle << "-" << m_currentArtist;

}



// get date and time
QString MusicController::gettime() const
{
    return QDateTime::currentDateTime().toString("HH\nmm");

}

QString MusicController::getdate() const
{
    return QDate::currentDate().toString("dd MM yyyy");
}
// progress bar



qint64 MusicController::duration() const
{
    return mediaPlayer->duration();
}

qint64 MusicController::position() const
{
    return mediaPlayer->position();
}


QImage MusicController::albumArt() const
{
    return m_albumArt;
}


void MusicController::setAlbumArt(const QImage &newAlbumArt)
{
    if (m_albumArt == newAlbumArt)
        return;
    m_albumArt = newAlbumArt;
    emit albumArtChanged();
}



void MusicController::setPosition(qint64 newPosition)
{
    if (m_position == newPosition)
        return;
    m_position = newPosition;
    emit positionChanged(newPosition);
    mediaPlayer->setPosition(newPosition);
}

qreal MusicController::volume() const
{
    return m_volume;
}

void MusicController::setVolume(qreal newVolume)
{

    newVolume = std::clamp(newVolume, 0.0, 1.0);

    if (qFuzzyCompare(m_volume, newVolume))
        return;

    m_volume = newVolume;
    audioOutput->setVolume(m_volume);

    emit volumeChanged(m_volume);
}
