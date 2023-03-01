/****************************************************************************
** Meta object code from reading C++ file 'jack_client.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../jack_client.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'jack_client.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JackClient_t {
    QByteArrayData data[14];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JackClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JackClient_t qt_meta_stringdata_JackClient = {
    {
QT_MOC_LITERAL(0, 0, 10), // "JackClient"
QT_MOC_LITERAL(1, 11, 17), // "receivedMidiEvent"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 9), // "MidiEvent"
QT_MOC_LITERAL(4, 40, 16), // "transportChanged"
QT_MOC_LITERAL(5, 57, 22), // "jack_transport_state_t"
QT_MOC_LITERAL(6, 80, 5), // "state"
QT_MOC_LITERAL(7, 86, 16), // "jack_position_t*"
QT_MOC_LITERAL(8, 103, 3), // "pos"
QT_MOC_LITERAL(9, 107, 13), // "clientStarted"
QT_MOC_LITERAL(10, 121, 13), // "clientStopped"
QT_MOC_LITERAL(11, 135, 15), // "setInputChannel"
QT_MOC_LITERAL(12, 151, 7), // "channel"
QT_MOC_LITERAL(13, 159, 16) // "setOutputChannel"

    },
    "JackClient\0receivedMidiEvent\0\0MidiEvent\0"
    "transportChanged\0jack_transport_state_t\0"
    "state\0jack_position_t*\0pos\0clientStarted\0"
    "clientStopped\0setInputChannel\0channel\0"
    "setOutputChannel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JackClient[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    2,   47,    2, 0x06 /* Public */,
       9,    0,   52,    2, 0x06 /* Public */,
      10,    0,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   54,    2, 0x0a /* Public */,
      13,    1,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7,    6,    8,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,

       0        // eod
};

void JackClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JackClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->receivedMidiEvent((*reinterpret_cast< MidiEvent(*)>(_a[1]))); break;
        case 1: _t->transportChanged((*reinterpret_cast< jack_transport_state_t(*)>(_a[1])),(*reinterpret_cast< jack_position_t*(*)>(_a[2]))); break;
        case 2: _t->clientStarted(); break;
        case 3: _t->clientStopped(); break;
        case 4: _t->setInputChannel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setOutputChannel((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (JackClient::*)(MidiEvent );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JackClient::receivedMidiEvent)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (JackClient::*)(jack_transport_state_t , jack_position_t * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JackClient::transportChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (JackClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JackClient::clientStarted)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (JackClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JackClient::clientStopped)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject JackClient::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_JackClient.data,
    qt_meta_data_JackClient,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *JackClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JackClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JackClient.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int JackClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void JackClient::receivedMidiEvent(MidiEvent _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void JackClient::transportChanged(jack_transport_state_t _t1, jack_position_t * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void JackClient::clientStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void JackClient::clientStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
