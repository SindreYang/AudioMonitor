/****************************************************************************
** Meta object code from reading C++ file 'rhdz.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../src/rhdz.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rhdz.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rhdz_t {
    QByteArrayData data[23];
    char stringdata0[239];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rhdz_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rhdz_t qt_meta_stringdata_rhdz = {
    {
QT_MOC_LITERAL(0, 0, 4), // "rhdz"
QT_MOC_LITERAL(1, 5, 13), // "sig_begin_end"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 5), // "begin"
QT_MOC_LITERAL(4, 26, 3), // "end"
QT_MOC_LITERAL(5, 30, 15), // "jackCtrlClicked"
QT_MOC_LITERAL(6, 46, 11), // "jackStopped"
QT_MOC_LITERAL(7, 58, 18), // "addAllMixerClicked"
QT_MOC_LITERAL(8, 77, 10), // "closeEvent"
QT_MOC_LITERAL(9, 88, 12), // "QCloseEvent*"
QT_MOC_LITERAL(10, 101, 10), // "timerEvent"
QT_MOC_LITERAL(11, 112, 12), // "QTimerEvent*"
QT_MOC_LITERAL(12, 125, 5), // "event"
QT_MOC_LITERAL(13, 131, 13), // "changeIndex_0"
QT_MOC_LITERAL(14, 145, 13), // "changeIndex_1"
QT_MOC_LITERAL(15, 159, 11), // "changeIndex"
QT_MOC_LITERAL(16, 171, 12), // "mute_process"
QT_MOC_LITERAL(17, 184, 12), // "lock_process"
QT_MOC_LITERAL(18, 197, 7), // "setupui"
QT_MOC_LITERAL(19, 205, 14), // "check_setui_ok"
QT_MOC_LITERAL(20, 220, 14), // "setl_outl_outr"
QT_MOC_LITERAL(21, 235, 1), // "l"
QT_MOC_LITERAL(22, 237, 1) // "r"

    },
    "rhdz\0sig_begin_end\0\0begin\0end\0"
    "jackCtrlClicked\0jackStopped\0"
    "addAllMixerClicked\0closeEvent\0"
    "QCloseEvent*\0timerEvent\0QTimerEvent*\0"
    "event\0changeIndex_0\0changeIndex_1\0"
    "changeIndex\0mute_process\0lock_process\0"
    "setupui\0check_setui_ok\0setl_outl_outr\0"
    "l\0r"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rhdz[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   89,    2, 0x08 /* Private */,
       6,    0,   90,    2, 0x08 /* Private */,
       7,    0,   91,    2, 0x08 /* Private */,
       8,    1,   92,    2, 0x08 /* Private */,
      10,    1,   95,    2, 0x08 /* Private */,
      13,    0,   98,    2, 0x08 /* Private */,
      14,    0,   99,    2, 0x08 /* Private */,
      15,    0,  100,    2, 0x08 /* Private */,
      16,    0,  101,    2, 0x08 /* Private */,
      17,    0,  102,    2, 0x08 /* Private */,
      18,    0,  103,    2, 0x08 /* Private */,
      19,    0,  104,    2, 0x08 /* Private */,
      20,    2,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   21,   22,

       0        // eod
};

void rhdz::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<rhdz *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_begin_end((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->jackCtrlClicked(); break;
        case 2: _t->jackStopped(); break;
        case 3: _t->addAllMixerClicked(); break;
        case 4: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 5: _t->timerEvent((*reinterpret_cast< QTimerEvent*(*)>(_a[1]))); break;
        case 6: _t->changeIndex_0(); break;
        case 7: _t->changeIndex_1(); break;
        case 8: _t->changeIndex(); break;
        case 9: _t->mute_process(); break;
        case 10: _t->lock_process(); break;
        case 11: _t->setupui(); break;
        case 12: _t->check_setui_ok(); break;
        case 13: _t->setl_outl_outr((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (rhdz::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&rhdz::sig_begin_end)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rhdz::staticMetaObject = { {
    QMetaObject::SuperData::link<PanelItem::staticMetaObject>(),
    qt_meta_stringdata_rhdz.data,
    qt_meta_data_rhdz,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rhdz::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rhdz::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rhdz.stringdata0))
        return static_cast<void*>(this);
    return PanelItem::qt_metacast(_clname);
}

int rhdz::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PanelItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void rhdz::sig_begin_end(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
