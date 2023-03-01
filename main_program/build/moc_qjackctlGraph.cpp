/****************************************************************************
** Meta object code from reading C++ file 'qjackctlGraph.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../C++/qjackctl/qjackctlGraph.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qjackctlGraph.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qjackctlGraphCanvas_t {
    QByteArrayData data[29];
    char stringdata0[305];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qjackctlGraphCanvas_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qjackctlGraphCanvas_t qt_meta_stringdata_qjackctlGraphCanvas = {
    {
QT_MOC_LITERAL(0, 0, 19), // "qjackctlGraphCanvas"
QT_MOC_LITERAL(1, 20, 5), // "added"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 18), // "qjackctlGraphNode*"
QT_MOC_LITERAL(4, 46, 4), // "node"
QT_MOC_LITERAL(5, 51, 7), // "removed"
QT_MOC_LITERAL(6, 59, 9), // "connected"
QT_MOC_LITERAL(7, 69, 18), // "qjackctlGraphPort*"
QT_MOC_LITERAL(8, 88, 5), // "port1"
QT_MOC_LITERAL(9, 94, 5), // "port2"
QT_MOC_LITERAL(10, 100, 12), // "disconnected"
QT_MOC_LITERAL(11, 113, 7), // "changed"
QT_MOC_LITERAL(12, 121, 7), // "renamed"
QT_MOC_LITERAL(13, 129, 18), // "qjackctlGraphItem*"
QT_MOC_LITERAL(14, 148, 4), // "item"
QT_MOC_LITERAL(15, 153, 4), // "name"
QT_MOC_LITERAL(16, 158, 12), // "connectItems"
QT_MOC_LITERAL(17, 171, 15), // "disconnectItems"
QT_MOC_LITERAL(18, 187, 9), // "selectAll"
QT_MOC_LITERAL(19, 197, 10), // "selectNone"
QT_MOC_LITERAL(20, 208, 12), // "selectInvert"
QT_MOC_LITERAL(21, 221, 10), // "renameItem"
QT_MOC_LITERAL(22, 232, 6), // "zoomIn"
QT_MOC_LITERAL(23, 239, 7), // "zoomOut"
QT_MOC_LITERAL(24, 247, 7), // "zoomFit"
QT_MOC_LITERAL(25, 255, 9), // "zoomReset"
QT_MOC_LITERAL(26, 265, 11), // "updateNodes"
QT_MOC_LITERAL(27, 277, 11), // "textChanged"
QT_MOC_LITERAL(28, 289, 15) // "editingFinished"

    },
    "qjackctlGraphCanvas\0added\0\0"
    "qjackctlGraphNode*\0node\0removed\0"
    "connected\0qjackctlGraphPort*\0port1\0"
    "port2\0disconnected\0changed\0renamed\0"
    "qjackctlGraphItem*\0item\0name\0connectItems\0"
    "disconnectItems\0selectAll\0selectNone\0"
    "selectInvert\0renameItem\0zoomIn\0zoomOut\0"
    "zoomFit\0zoomReset\0updateNodes\0textChanged\0"
    "editingFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qjackctlGraphCanvas[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  109,    2, 0x06 /* Public */,
       5,    1,  112,    2, 0x06 /* Public */,
       6,    2,  115,    2, 0x06 /* Public */,
      10,    2,  120,    2, 0x06 /* Public */,
      11,    0,  125,    2, 0x06 /* Public */,
      12,    2,  126,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,  131,    2, 0x0a /* Public */,
      17,    0,  132,    2, 0x0a /* Public */,
      18,    0,  133,    2, 0x0a /* Public */,
      19,    0,  134,    2, 0x0a /* Public */,
      20,    0,  135,    2, 0x0a /* Public */,
      21,    0,  136,    2, 0x0a /* Public */,
      22,    0,  137,    2, 0x0a /* Public */,
      23,    0,  138,    2, 0x0a /* Public */,
      24,    0,  139,    2, 0x0a /* Public */,
      25,    0,  140,    2, 0x0a /* Public */,
      26,    0,  141,    2, 0x0a /* Public */,
      27,    1,  142,    2, 0x09 /* Protected */,
      28,    0,  145,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 7,    8,    9,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 7,    8,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13, QMetaType::QString,   14,   15,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

       0        // eod
};

void qjackctlGraphCanvas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qjackctlGraphCanvas *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->added((*reinterpret_cast< qjackctlGraphNode*(*)>(_a[1]))); break;
        case 1: _t->removed((*reinterpret_cast< qjackctlGraphNode*(*)>(_a[1]))); break;
        case 2: _t->connected((*reinterpret_cast< qjackctlGraphPort*(*)>(_a[1])),(*reinterpret_cast< qjackctlGraphPort*(*)>(_a[2]))); break;
        case 3: _t->disconnected((*reinterpret_cast< qjackctlGraphPort*(*)>(_a[1])),(*reinterpret_cast< qjackctlGraphPort*(*)>(_a[2]))); break;
        case 4: _t->changed(); break;
        case 5: _t->renamed((*reinterpret_cast< qjackctlGraphItem*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->connectItems(); break;
        case 7: _t->disconnectItems(); break;
        case 8: _t->selectAll(); break;
        case 9: _t->selectNone(); break;
        case 10: _t->selectInvert(); break;
        case 11: _t->renameItem(); break;
        case 12: _t->zoomIn(); break;
        case 13: _t->zoomOut(); break;
        case 14: _t->zoomFit(); break;
        case 15: _t->zoomReset(); break;
        case 16: _t->updateNodes(); break;
        case 17: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->editingFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qjackctlGraphCanvas::*)(qjackctlGraphNode * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qjackctlGraphCanvas::added)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qjackctlGraphCanvas::*)(qjackctlGraphNode * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qjackctlGraphCanvas::removed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (qjackctlGraphCanvas::*)(qjackctlGraphPort * , qjackctlGraphPort * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qjackctlGraphCanvas::connected)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (qjackctlGraphCanvas::*)(qjackctlGraphPort * , qjackctlGraphPort * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qjackctlGraphCanvas::disconnected)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (qjackctlGraphCanvas::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qjackctlGraphCanvas::changed)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (qjackctlGraphCanvas::*)(qjackctlGraphItem * , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qjackctlGraphCanvas::renamed)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qjackctlGraphCanvas::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsView::staticMetaObject>(),
    qt_meta_stringdata_qjackctlGraphCanvas.data,
    qt_meta_data_qjackctlGraphCanvas,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qjackctlGraphCanvas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qjackctlGraphCanvas::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qjackctlGraphCanvas.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int qjackctlGraphCanvas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void qjackctlGraphCanvas::added(qjackctlGraphNode * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qjackctlGraphCanvas::removed(qjackctlGraphNode * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void qjackctlGraphCanvas::connected(qjackctlGraphPort * _t1, qjackctlGraphPort * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void qjackctlGraphCanvas::disconnected(qjackctlGraphPort * _t1, qjackctlGraphPort * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void qjackctlGraphCanvas::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void qjackctlGraphCanvas::renamed(qjackctlGraphItem * _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
