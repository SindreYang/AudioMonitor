/****************************************************************************
** Meta object code from reading C++ file 'qjackctlConnect.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../C++/qjackctl/qjackctlConnect.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qjackctlConnect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qjackctlClientListView_t {
    QByteArrayData data[5];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qjackctlClientListView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qjackctlClientListView_t qt_meta_stringdata_qjackctlClientListView = {
    {
QT_MOC_LITERAL(0, 0, 22), // "qjackctlClientListView"
QT_MOC_LITERAL(1, 23, 15), // "startRenameSlot"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 11), // "renamedSlot"
QT_MOC_LITERAL(4, 52, 11) // "timeoutSlot"

    },
    "qjackctlClientListView\0startRenameSlot\0"
    "\0renamedSlot\0timeoutSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qjackctlClientListView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x09 /* Protected */,
       3,    0,   30,    2, 0x09 /* Protected */,
       4,    0,   31,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qjackctlClientListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qjackctlClientListView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startRenameSlot(); break;
        case 1: _t->renamedSlot(); break;
        case 2: _t->timeoutSlot(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject qjackctlClientListView::staticMetaObject = { {
    &QTreeWidget::staticMetaObject,
    qt_meta_stringdata_qjackctlClientListView.data,
    qt_meta_data_qjackctlClientListView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qjackctlClientListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qjackctlClientListView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qjackctlClientListView.stringdata0))
        return static_cast<void*>(this);
    return QTreeWidget::qt_metacast(_clname);
}

int qjackctlClientListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_qjackctlConnectorView_t {
    QByteArrayData data[3];
    char stringdata0[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qjackctlConnectorView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qjackctlConnectorView_t qt_meta_stringdata_qjackctlConnectorView = {
    {
QT_MOC_LITERAL(0, 0, 21), // "qjackctlConnectorView"
QT_MOC_LITERAL(1, 22, 15), // "contentsChanged"
QT_MOC_LITERAL(2, 38, 0) // ""

    },
    "qjackctlConnectorView\0contentsChanged\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qjackctlConnectorView[] = {

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

void qjackctlConnectorView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qjackctlConnectorView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->contentsChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject qjackctlConnectorView::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_qjackctlConnectorView.data,
    qt_meta_data_qjackctlConnectorView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qjackctlConnectorView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qjackctlConnectorView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qjackctlConnectorView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int qjackctlConnectorView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_qjackctlConnectView_t {
    QByteArrayData data[3];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qjackctlConnectView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qjackctlConnectView_t qt_meta_stringdata_qjackctlConnectView = {
    {
QT_MOC_LITERAL(0, 0, 19), // "qjackctlConnectView"
QT_MOC_LITERAL(1, 20, 14), // "aliasesChanged"
QT_MOC_LITERAL(2, 35, 0) // ""

    },
    "qjackctlConnectView\0aliasesChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qjackctlConnectView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void qjackctlConnectView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qjackctlConnectView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->aliasesChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qjackctlConnectView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qjackctlConnectView::aliasesChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject qjackctlConnectView::staticMetaObject = { {
    &QSplitter::staticMetaObject,
    qt_meta_stringdata_qjackctlConnectView.data,
    qt_meta_data_qjackctlConnectView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qjackctlConnectView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qjackctlConnectView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qjackctlConnectView.stringdata0))
        return static_cast<void*>(this);
    return QSplitter::qt_metacast(_clname);
}

int qjackctlConnectView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSplitter::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void qjackctlConnectView::aliasesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_qjackctlConnect_t {
    QByteArrayData data[13];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qjackctlConnect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qjackctlConnect_t qt_meta_stringdata_qjackctlConnect = {
    {
QT_MOC_LITERAL(0, 0, 15), // "qjackctlConnect"
QT_MOC_LITERAL(1, 16, 14), // "connectChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 10), // "connecting"
QT_MOC_LITERAL(4, 43, 17), // "qjackctlPortItem*"
QT_MOC_LITERAL(5, 61, 13), // "disconnecting"
QT_MOC_LITERAL(6, 75, 7), // "refresh"
QT_MOC_LITERAL(7, 83, 15), // "connectSelected"
QT_MOC_LITERAL(8, 99, 18), // "disconnectSelected"
QT_MOC_LITERAL(9, 118, 13), // "disconnectAll"
QT_MOC_LITERAL(10, 132, 9), // "expandAll"
QT_MOC_LITERAL(11, 142, 14), // "updateContents"
QT_MOC_LITERAL(12, 157, 6) // "bClear"

    },
    "qjackctlConnect\0connectChanged\0\0"
    "connecting\0qjackctlPortItem*\0disconnecting\0"
    "refresh\0connectSelected\0disconnectSelected\0"
    "disconnectAll\0expandAll\0updateContents\0"
    "bClear"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qjackctlConnect[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    2,   60,    2, 0x06 /* Public */,
       5,    2,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   70,    2, 0x0a /* Public */,
       7,    0,   71,    2, 0x0a /* Public */,
       8,    0,   72,    2, 0x0a /* Public */,
       9,    0,   73,    2, 0x0a /* Public */,
      10,    0,   74,    2, 0x0a /* Public */,
      11,    1,   75,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    2,    2,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,

       0        // eod
};

void qjackctlConnect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qjackctlConnect *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectChanged(); break;
        case 1: _t->connecting((*reinterpret_cast< qjackctlPortItem*(*)>(_a[1])),(*reinterpret_cast< qjackctlPortItem*(*)>(_a[2]))); break;
        case 2: _t->disconnecting((*reinterpret_cast< qjackctlPortItem*(*)>(_a[1])),(*reinterpret_cast< qjackctlPortItem*(*)>(_a[2]))); break;
        case 3: _t->refresh(); break;
        case 4: { bool _r = _t->connectSelected();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->disconnectSelected();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->disconnectAll();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->expandAll(); break;
        case 8: _t->updateContents((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qjackctlConnect::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qjackctlConnect::connectChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qjackctlConnect::*)(qjackctlPortItem * , qjackctlPortItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qjackctlConnect::connecting)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (qjackctlConnect::*)(qjackctlPortItem * , qjackctlPortItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qjackctlConnect::disconnecting)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qjackctlConnect::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_qjackctlConnect.data,
    qt_meta_data_qjackctlConnect,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qjackctlConnect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qjackctlConnect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qjackctlConnect.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qjackctlConnect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void qjackctlConnect::connectChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void qjackctlConnect::connecting(qjackctlPortItem * _t1, qjackctlPortItem * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void qjackctlConnect::disconnecting(qjackctlPortItem * _t1, qjackctlPortItem * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
