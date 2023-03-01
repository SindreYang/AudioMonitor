/****************************************************************************
** Meta object code from reading C++ file 'qjackctlPatchbay.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../C++/qjackctl/qjackctlPatchbay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qjackctlPatchbay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qjackctlSocketList_t {
    QByteArrayData data[9];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qjackctlSocketList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qjackctlSocketList_t qt_meta_stringdata_qjackctlSocketList = {
    {
QT_MOC_LITERAL(0, 0, 18), // "qjackctlSocketList"
QT_MOC_LITERAL(1, 19, 13), // "addSocketItem"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 16), // "removeSocketItem"
QT_MOC_LITERAL(4, 51, 14), // "editSocketItem"
QT_MOC_LITERAL(5, 66, 14), // "copySocketItem"
QT_MOC_LITERAL(6, 81, 19), // "exclusiveSocketItem"
QT_MOC_LITERAL(7, 101, 16), // "moveUpSocketItem"
QT_MOC_LITERAL(8, 118, 18) // "moveDownSocketItem"

    },
    "qjackctlSocketList\0addSocketItem\0\0"
    "removeSocketItem\0editSocketItem\0"
    "copySocketItem\0exclusiveSocketItem\0"
    "moveUpSocketItem\0moveDownSocketItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qjackctlSocketList[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x0a /* Public */,
       4,    0,   51,    2, 0x0a /* Public */,
       5,    0,   52,    2, 0x0a /* Public */,
       6,    0,   53,    2, 0x0a /* Public */,
       7,    0,   54,    2, 0x0a /* Public */,
       8,    0,   55,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,

       0        // eod
};

void qjackctlSocketList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qjackctlSocketList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->addSocketItem();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->removeSocketItem();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->editSocketItem();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->copySocketItem();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->exclusiveSocketItem();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->moveUpSocketItem();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->moveDownSocketItem();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qjackctlSocketList::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_qjackctlSocketList.data,
    qt_meta_data_qjackctlSocketList,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qjackctlSocketList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qjackctlSocketList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qjackctlSocketList.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qjackctlSocketList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
struct qt_meta_stringdata_qjackctlSocketListView_t {
    QByteArrayData data[3];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qjackctlSocketListView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qjackctlSocketListView_t qt_meta_stringdata_qjackctlSocketListView = {
    {
QT_MOC_LITERAL(0, 0, 22), // "qjackctlSocketListView"
QT_MOC_LITERAL(1, 23, 11), // "timeoutSlot"
QT_MOC_LITERAL(2, 35, 0) // ""

    },
    "qjackctlSocketListView\0timeoutSlot\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qjackctlSocketListView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void qjackctlSocketListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qjackctlSocketListView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->timeoutSlot(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject qjackctlSocketListView::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeWidget::staticMetaObject>(),
    qt_meta_stringdata_qjackctlSocketListView.data,
    qt_meta_data_qjackctlSocketListView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qjackctlSocketListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qjackctlSocketListView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qjackctlSocketListView.stringdata0))
        return static_cast<void*>(this);
    return QTreeWidget::qt_metacast(_clname);
}

int qjackctlSocketListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_qjackctlPatchworkView_t {
    QByteArrayData data[3];
    char stringdata0[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qjackctlPatchworkView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qjackctlPatchworkView_t qt_meta_stringdata_qjackctlPatchworkView = {
    {
QT_MOC_LITERAL(0, 0, 21), // "qjackctlPatchworkView"
QT_MOC_LITERAL(1, 22, 15), // "contentsChanged"
QT_MOC_LITERAL(2, 38, 0) // ""

    },
    "qjackctlPatchworkView\0contentsChanged\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qjackctlPatchworkView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void qjackctlPatchworkView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qjackctlPatchworkView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->contentsChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject qjackctlPatchworkView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_qjackctlPatchworkView.data,
    qt_meta_data_qjackctlPatchworkView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qjackctlPatchworkView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qjackctlPatchworkView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qjackctlPatchworkView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int qjackctlPatchworkView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_qjackctlPatchbayView_t {
    QByteArrayData data[9];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qjackctlPatchbayView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qjackctlPatchbayView_t qt_meta_stringdata_qjackctlPatchbayView = {
    {
QT_MOC_LITERAL(0, 0, 20), // "qjackctlPatchbayView"
QT_MOC_LITERAL(1, 21, 15), // "contentsChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 11), // "contextMenu"
QT_MOC_LITERAL(4, 50, 3), // "pos"
QT_MOC_LITERAL(5, 54, 19), // "qjackctlSocketList*"
QT_MOC_LITERAL(6, 74, 11), // "pSocketList"
QT_MOC_LITERAL(7, 86, 19), // "activateForwardMenu"
QT_MOC_LITERAL(8, 106, 8) // "QAction*"

    },
    "qjackctlPatchbayView\0contentsChanged\0"
    "\0contextMenu\0pos\0qjackctlSocketList*\0"
    "pSocketList\0activateForwardMenu\0"
    "QAction*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qjackctlPatchbayView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   30,    2, 0x0a /* Public */,
       7,    1,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 8,    2,

       0        // eod
};

void qjackctlPatchbayView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qjackctlPatchbayView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->contentsChanged(); break;
        case 1: _t->contextMenu((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< qjackctlSocketList*(*)>(_a[2]))); break;
        case 2: _t->activateForwardMenu((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qjackctlSocketList* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qjackctlPatchbayView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qjackctlPatchbayView::contentsChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qjackctlPatchbayView::staticMetaObject = { {
    QMetaObject::SuperData::link<QSplitter::staticMetaObject>(),
    qt_meta_stringdata_qjackctlPatchbayView.data,
    qt_meta_data_qjackctlPatchbayView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qjackctlPatchbayView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qjackctlPatchbayView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qjackctlPatchbayView.stringdata0))
        return static_cast<void*>(this);
    return QSplitter::qt_metacast(_clname);
}

int qjackctlPatchbayView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSplitter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void qjackctlPatchbayView::contentsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_qjackctlPatchbay_t {
    QByteArrayData data[9];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qjackctlPatchbay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qjackctlPatchbay_t qt_meta_stringdata_qjackctlPatchbay = {
    {
QT_MOC_LITERAL(0, 0, 16), // "qjackctlPatchbay"
QT_MOC_LITERAL(1, 17, 7), // "refresh"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 15), // "connectSelected"
QT_MOC_LITERAL(4, 42, 18), // "disconnectSelected"
QT_MOC_LITERAL(5, 61, 13), // "disconnectAll"
QT_MOC_LITERAL(6, 75, 9), // "expandAll"
QT_MOC_LITERAL(7, 85, 5), // "clear"
QT_MOC_LITERAL(8, 91, 19) // "connectionsSnapshot"

    },
    "qjackctlPatchbay\0refresh\0\0connectSelected\0"
    "disconnectSelected\0disconnectAll\0"
    "expandAll\0clear\0connectionsSnapshot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qjackctlPatchbay[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x0a /* Public */,
       4,    0,   51,    2, 0x0a /* Public */,
       5,    0,   52,    2, 0x0a /* Public */,
       6,    0,   53,    2, 0x0a /* Public */,
       7,    0,   54,    2, 0x0a /* Public */,
       8,    0,   55,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qjackctlPatchbay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qjackctlPatchbay *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->refresh(); break;
        case 1: { bool _r = _t->connectSelected();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->disconnectSelected();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->disconnectAll();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->expandAll(); break;
        case 5: _t->clear(); break;
        case 6: _t->connectionsSnapshot(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qjackctlPatchbay::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_qjackctlPatchbay.data,
    qt_meta_data_qjackctlPatchbay,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qjackctlPatchbay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qjackctlPatchbay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qjackctlPatchbay.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qjackctlPatchbay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
