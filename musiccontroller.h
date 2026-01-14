#ifndef MUSICCONTROLLER_H
#define MUSICCONTROLLER_H

#include <QObject>
#include <QUrl>
#include <QString>
#include <QtMultimedia/QtMultimedia>
#include <QMediaPlayer>
#include <QMediaMetaData>
#include <QAudioOutput>
#include <QFileInfo>
#include <QDir>
#include <QStringList>
#include <QFileInfoList>
#include<QImage>

class MusicController : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString currentTitle READ currentTitle NOTIFY songChanged)
    Q_PROPERTY(QString currentArtist READ currentArtist NOTIFY artistChanged)


    Q_PROPERTY(QVariant currentCover READ currentCover NOTIFY coverChanged)

    Q_PROPERTY(bool isPlaying READ isPlaying NOTIFY isPlayingChanged)

    Q_PROPERTY(qint64 duration READ duration NOTIFY durationChanged)
    Q_PROPERTY(qint64 position READ position WRITE setPosition NOTIFY positionChanged)

    Q_PROPERTY(QString getdate READ getdate NOTIFY datechanged)
    Q_PROPERTY(QString gettime  READ gettime NOTIFY timechanged)

    Q_PROPERTY(QImage albumArt READ albumArt WRITE setAlbumArt NOTIFY albumArtChanged FINAL)

    Q_PROPERTY(qreal volume READ volume WRITE setVolume NOTIFY volumeChanged FINAL)

public:


    QString getdate() const;



    qint64 duration() const;
    qint64 position() const;


    explicit MusicController(QObject *parent = nullptr);
    QString currentTitle() const;
    QString currentArtist() const;
    QVariant currentCover() const;


    bool isPlaying();
    Q_INVOKABLE void loadInfoSong();
    QStringList playlist;

    QImage albumArt() const;
    void setAlbumArt(const QImage &newAlbumArt);



    void setPosition(qint64 newPosition);

    qreal volume() const;
    void setVolume(qreal newVolume);

signals:
    void timechanged(QString gettime);
    void datechanged(QString getdate);

    void durationChanged(qint64 duration);
    void positionChanged(qint64 position);

    void songChanged(const QString &title);
    void artistChanged(const QString &artist);
    void coverChanged(const QVariant &coverPath);


    void isPlayingChanged(bool isPlaying);

    void scanMusicDone();

    void albumArtChanged();



    void volumeChanged(qreal volume);

public slots:


    QString gettime() const;


    void playMusic();
    void nextSong();
    void previousSong();



private:
    QString musicDirectory = "D:/QtProjects/coding/SS21_22/resource/Music";
    QMediaPlayer *mediaPlayer;
    QAudioOutput *audioOutput;

    // scan music directory for audio files

    void scanMusicDirectory();

    QString m_currentTitle;
    QString m_currentArtist;
    QVariant m_currentCover;
    QString m_gettime;
    QImage m_albumArt;

    qint64 m_position;
    qreal m_volume;
};

#endif // MUSICCONTROLLER_H
