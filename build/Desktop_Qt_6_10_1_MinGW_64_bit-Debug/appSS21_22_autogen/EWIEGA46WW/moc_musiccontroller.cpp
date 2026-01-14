/****************************************************************************
** Meta object code from reading C++ file 'musiccontroller.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../musiccontroller.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'musiccontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN15MusicControllerE_t {};
} // unnamed namespace

template <> constexpr inline auto MusicController::qt_create_metaobjectdata<qt_meta_tag_ZN15MusicControllerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MusicController",
        "timechanged",
        "",
        "gettime",
        "datechanged",
        "getdate",
        "durationChanged",
        "duration",
        "positionChanged",
        "position",
        "songChanged",
        "title",
        "artistChanged",
        "artist",
        "coverChanged",
        "QVariant",
        "coverPath",
        "isPlayingChanged",
        "isPlaying",
        "scanMusicDone",
        "albumArtChanged",
        "volumeChanged",
        "volume",
        "playMusic",
        "nextSong",
        "previousSong",
        "loadInfoSong",
        "currentTitle",
        "currentArtist",
        "currentCover",
        "albumArt",
        "QImage"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'timechanged'
        QtMocHelpers::SignalData<void(QString)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'datechanged'
        QtMocHelpers::SignalData<void(QString)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Signal 'durationChanged'
        QtMocHelpers::SignalData<void(qint64)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::LongLong, 7 },
        }}),
        // Signal 'positionChanged'
        QtMocHelpers::SignalData<void(qint64)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::LongLong, 9 },
        }}),
        // Signal 'songChanged'
        QtMocHelpers::SignalData<void(const QString &)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 11 },
        }}),
        // Signal 'artistChanged'
        QtMocHelpers::SignalData<void(const QString &)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 13 },
        }}),
        // Signal 'coverChanged'
        QtMocHelpers::SignalData<void(const QVariant &)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 15, 16 },
        }}),
        // Signal 'isPlayingChanged'
        QtMocHelpers::SignalData<void(bool)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 18 },
        }}),
        // Signal 'scanMusicDone'
        QtMocHelpers::SignalData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'albumArtChanged'
        QtMocHelpers::SignalData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'volumeChanged'
        QtMocHelpers::SignalData<void(qreal)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 22 },
        }}),
        // Slot 'gettime'
        QtMocHelpers::SlotData<QString() const>(3, 2, QMC::AccessPublic, QMetaType::QString),
        // Slot 'playMusic'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'nextSong'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'previousSong'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'loadInfoSong'
        QtMocHelpers::MethodData<void()>(26, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'currentTitle'
        QtMocHelpers::PropertyData<QString>(27, QMetaType::QString, QMC::DefaultPropertyFlags, 4),
        // property 'currentArtist'
        QtMocHelpers::PropertyData<QString>(28, QMetaType::QString, QMC::DefaultPropertyFlags, 5),
        // property 'currentCover'
        QtMocHelpers::PropertyData<QVariant>(29, 0x80000000 | 15, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 6),
        // property 'isPlaying'
        QtMocHelpers::PropertyData<bool>(18, QMetaType::Bool, QMC::DefaultPropertyFlags, 7),
        // property 'duration'
        QtMocHelpers::PropertyData<qint64>(7, QMetaType::LongLong, QMC::DefaultPropertyFlags, 2),
        // property 'position'
        QtMocHelpers::PropertyData<qint64>(9, QMetaType::LongLong, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'getdate'
        QtMocHelpers::PropertyData<QString>(5, QMetaType::QString, QMC::DefaultPropertyFlags, 1),
        // property 'gettime'
        QtMocHelpers::PropertyData<QString>(3, QMetaType::QString, QMC::DefaultPropertyFlags, 0),
        // property 'albumArt'
        QtMocHelpers::PropertyData<QImage>(30, 0x80000000 | 31, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Final, 9),
        // property 'volume'
        QtMocHelpers::PropertyData<qreal>(22, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 10),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MusicController, qt_meta_tag_ZN15MusicControllerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MusicController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15MusicControllerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15MusicControllerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15MusicControllerE_t>.metaTypes,
    nullptr
} };

void MusicController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MusicController *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->timechanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->datechanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->durationChanged((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1]))); break;
        case 3: _t->positionChanged((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1]))); break;
        case 4: _t->songChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->artistChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->coverChanged((*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 7: _t->isPlayingChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->scanMusicDone(); break;
        case 9: _t->albumArtChanged(); break;
        case 10: _t->volumeChanged((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1]))); break;
        case 11: { QString _r = _t->gettime();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->playMusic(); break;
        case 13: _t->nextSong(); break;
        case 14: _t->previousSong(); break;
        case 15: _t->loadInfoSong(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MusicController::*)(QString )>(_a, &MusicController::timechanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (MusicController::*)(QString )>(_a, &MusicController::datechanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (MusicController::*)(qint64 )>(_a, &MusicController::durationChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (MusicController::*)(qint64 )>(_a, &MusicController::positionChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (MusicController::*)(const QString & )>(_a, &MusicController::songChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (MusicController::*)(const QString & )>(_a, &MusicController::artistChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (MusicController::*)(const QVariant & )>(_a, &MusicController::coverChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (MusicController::*)(bool )>(_a, &MusicController::isPlayingChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (MusicController::*)()>(_a, &MusicController::scanMusicDone, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (MusicController::*)()>(_a, &MusicController::albumArtChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (MusicController::*)(qreal )>(_a, &MusicController::volumeChanged, 10))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->currentTitle(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->currentArtist(); break;
        case 2: *reinterpret_cast<QVariant*>(_v) = _t->currentCover(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->isPlaying(); break;
        case 4: *reinterpret_cast<qint64*>(_v) = _t->duration(); break;
        case 5: *reinterpret_cast<qint64*>(_v) = _t->position(); break;
        case 6: *reinterpret_cast<QString*>(_v) = _t->getdate(); break;
        case 7: *reinterpret_cast<QString*>(_v) = _t->gettime(); break;
        case 8: *reinterpret_cast<QImage*>(_v) = _t->albumArt(); break;
        case 9: *reinterpret_cast<qreal*>(_v) = _t->volume(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 5: _t->setPosition(*reinterpret_cast<qint64*>(_v)); break;
        case 8: _t->setAlbumArt(*reinterpret_cast<QImage*>(_v)); break;
        case 9: _t->setVolume(*reinterpret_cast<qreal*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *MusicController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MusicController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15MusicControllerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MusicController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void MusicController::timechanged(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void MusicController::datechanged(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void MusicController::durationChanged(qint64 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void MusicController::positionChanged(qint64 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void MusicController::songChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void MusicController::artistChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void MusicController::coverChanged(const QVariant & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void MusicController::isPlayingChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void MusicController::scanMusicDone()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void MusicController::albumArtChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void MusicController::volumeChanged(qreal _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}
QT_WARNING_POP
