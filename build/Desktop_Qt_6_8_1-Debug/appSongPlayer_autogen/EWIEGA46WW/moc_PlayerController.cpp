/****************************************************************************
** Meta object code from reading C++ file 'PlayerController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../PlayerController.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PlayerController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.1. It"
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
struct qt_meta_tag_ZN16PlayerControllerE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN16PlayerControllerE = QtMocHelpers::stringData(
    "PlayerController",
    "currentSongIndexChanged",
    "",
    "songCountChanged",
    "playingChanged",
    "switchToPreviousSong",
    "playPause",
    "switchToNextSong",
    "currentSongIndex",
    "songCount",
    "playing"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN16PlayerControllerE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       3,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    4 /* Public */,
       3,    0,   51,    2, 0x06,    5 /* Public */,
       4,    0,   52,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   53,    2, 0x0a,    7 /* Public */,
       6,    0,   54,    2, 0x0a,    8 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   55,    2, 0x02,    9 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags, notifyId, revision
       8, QMetaType::Int, 0x00015001, uint(0), 0,
       9, QMetaType::Int, 0x00015001, uint(1), 0,
      10, QMetaType::Bool, 0x00015001, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject PlayerController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN16PlayerControllerE.offsetsAndSizes,
    qt_meta_data_ZN16PlayerControllerE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN16PlayerControllerE_t,
        // property 'currentSongIndex'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'songCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'playing'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PlayerController, std::true_type>,
        // method 'currentSongIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'songCountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'playingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'switchToPreviousSong'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'playPause'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'switchToNextSong'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void PlayerController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PlayerController *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->currentSongIndexChanged(); break;
        case 1: _t->songCountChanged(); break;
        case 2: _t->playingChanged(); break;
        case 3: _t->switchToPreviousSong(); break;
        case 4: _t->playPause(); break;
        case 5: _t->switchToNextSong(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (PlayerController::*)();
            if (_q_method_type _q_method = &PlayerController::currentSongIndexChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (PlayerController::*)();
            if (_q_method_type _q_method = &PlayerController::songCountChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (PlayerController::*)();
            if (_q_method_type _q_method = &PlayerController::playingChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->currentSongIndex(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->songCount(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->playing(); break;
        default: break;
        }
    }
}

const QMetaObject *PlayerController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlayerController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN16PlayerControllerE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PlayerController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void PlayerController::currentSongIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PlayerController::songCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PlayerController::playingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
