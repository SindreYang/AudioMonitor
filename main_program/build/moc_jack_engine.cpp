/****************************************************************************
** Meta object code from reading C++ file 'jack_engine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../src/jack_engine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'jack_engine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JackEngine_t {
    QByteArrayData data[14];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JackEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JackEngine_t qt_meta_stringdata_JackEngine = {
    {
QT_MOC_LITERAL(0, 0, 10), // "JackEngine"
QT_MOC_LITERAL(1, 11, 8), // "sig_name"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 4), // "name"
QT_MOC_LITERAL(4, 26, 9), // "sig_color"
QT_MOC_LITERAL(5, 36, 5), // "color"
QT_MOC_LITERAL(6, 42, 9), // "refreshVu"
QT_MOC_LITERAL(7, 52, 9), // "set_nowid"
QT_MOC_LITERAL(8, 62, 2), // "id"
QT_MOC_LITERAL(9, 65, 8), // "id_begin"
QT_MOC_LITERAL(10, 74, 6), // "id_end"
QT_MOC_LITERAL(11, 81, 14), // "set_flag_false"
QT_MOC_LITERAL(12, 96, 13), // "set_flag_true"
QT_MOC_LITERAL(13, 110, 15) // "left_button_fun"

    },
    "JackEngine\0sig_name\0\0name\0sig_color\0"
    "color\0refreshVu\0set_nowid\0id\0id_begin\0"
    "id_end\0set_flag_false\0set_flag_true\0"
    "left_button_fun"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JackEngine[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   60,    2, 0x0a /* Public */,
       7,    1,   61,    2, 0x0a /* Public */,
       7,    2,   64,    2, 0x0a /* Public */,
      11,    1,   69,    2, 0x0a /* Public */,
      12,    0,   72,    2, 0x0a /* Public */,
      13,    1,   73,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void JackEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JackEngine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_name((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sig_color((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->refreshVu(); break;
        case 3: _t->set_nowid((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->set_nowid((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->set_flag_false((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->set_flag_true(); break;
        case 7: _t->left_button_fun((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (JackEngine::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JackEngine::sig_name)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (JackEngine::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JackEngine::sig_color)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject JackEngine::staticMetaObject = { {
    QMetaObject::SuperData::link<JackClient::staticMetaObject>(),
    qt_meta_stringdata_JackEngine.data,
    qt_meta_data_JackEngine,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *JackEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JackEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JackEngine.stringdata0))
        return static_cast<void*>(this);
    return JackClient::qt_metacast(_clname);
}

int JackEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = JackClient::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void JackEngine::sig_name(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void JackEngine::sig_color(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
