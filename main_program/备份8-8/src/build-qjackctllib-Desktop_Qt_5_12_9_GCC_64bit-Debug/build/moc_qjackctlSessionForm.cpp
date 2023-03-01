/****************************************************************************
** Meta object code from reading C++ file 'qjackctlSessionForm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../C++/qjackctl/qjackctlSessionForm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qjackctlSessionForm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qjackctlSessionInfraClientItemEditor_t {
    QByteArrayData data[6];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qjackctlSessionInfraClientItemEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qjackctlSessionInfraClientItemEditor_t qt_meta_stringdata_qjackctlSessionInfraClientItemEditor = {
    {
QT_MOC_LITERAL(0, 0, 36), // "qjackctlSessionInfraClientIte..."
QT_MOC_LITERAL(1, 37, 12), // "finishSignal"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 10), // "browseSlot"
QT_MOC_LITERAL(4, 62, 9), // "resetSlot"
QT_MOC_LITERAL(5, 72, 10) // "finishSlot"

    },
    "qjackctlSessionInfraClientItemEditor\0"
    "finishSignal\0\0browseSlot\0resetSlot\0"
    "finishSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qjackctlSessionInfraClientItemEditor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   35,    2, 0x09 /* Protected */,
       4,    0,   36,    2, 0x09 /* Protected */,
       5,    0,   37,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qjackctlSessionInfraClientItemEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qjackctlSessionInfraClientItemEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finishSignal(); break;
        case 1: _t->browseSlot(); break;
        case 2: _t->resetSlot(); break;
        case 3: _t->finishSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qjackctlSessionInfraClientItemEditor::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qjackctlSessionInfraClientItemEditor::finishSignal)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject qjackctlSessionInfraClientItemEditor::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_qjackctlSessionInfraClientItemEditor.data,
    qt_meta_data_qjackctlSessionInfraClientItemEditor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qjackctlSessionInfraClientItemEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qjackctlSessionInfraClientItemEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qjackctlSessionInfraClientItemEditor.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int qjackctlSessionInfraClientItemEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void qjackctlSessionInfraClientItemEditor::finishSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_qjackctlSessionInfraClientItemDelegate_t {
    QByteArrayData data[3];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qjackctlSessionInfraClientItemDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qjackctlSessionInfraClientItemDelegate_t qt_meta_stringdata_qjackctlSessionInfraClientItemDelegate = {
    {
QT_MOC_LITERAL(0, 0, 38), // "qjackctlSessionInfraClientIte..."
QT_MOC_LITERAL(1, 39, 12), // "commitEditor"
QT_MOC_LITERAL(2, 52, 0) // ""

    },
    "qjackctlSessionInfraClientItemDelegate\0"
    "commitEditor\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qjackctlSessionInfraClientItemDelegate[] = {

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

void qjackctlSessionInfraClientItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qjackctlSessionInfraClientItemDelegate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->commitEditor(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject qjackctlSessionInfraClientItemDelegate::staticMetaObject = { {
    &QItemDelegate::staticMetaObject,
    qt_meta_stringdata_qjackctlSessionInfraClientItemDelegate.data,
    qt_meta_data_qjackctlSessionInfraClientItemDelegate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qjackctlSessionInfraClientItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qjackctlSessionInfraClientItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qjackctlSessionInfraClientItemDelegate.stringdata0))
        return static_cast<void*>(this);
    return QItemDelegate::qt_metacast(_clname);
}

int qjackctlSessionInfraClientItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QItemDelegate::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_qjackctlSessionForm_t {
    QByteArrayData data[20];
    char stringdata0[334];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qjackctlSessionForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qjackctlSessionForm_t qt_meta_stringdata_qjackctlSessionForm = {
    {
QT_MOC_LITERAL(0, 0, 19), // "qjackctlSessionForm"
QT_MOC_LITERAL(1, 20, 11), // "loadSession"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 15), // "saveSessionSave"
QT_MOC_LITERAL(4, 49, 22), // "saveSessionSaveAndQuit"
QT_MOC_LITERAL(5, 72, 23), // "saveSessionSaveTemplate"
QT_MOC_LITERAL(6, 96, 18), // "saveSessionVersion"
QT_MOC_LITERAL(7, 115, 13), // "updateSession"
QT_MOC_LITERAL(8, 129, 13), // "recentSession"
QT_MOC_LITERAL(9, 143, 16), // "updateRecentMenu"
QT_MOC_LITERAL(10, 160, 15), // "clearRecentMenu"
QT_MOC_LITERAL(11, 176, 22), // "sessionViewContextMenu"
QT_MOC_LITERAL(12, 199, 3), // "pos"
QT_MOC_LITERAL(13, 203, 14), // "addInfraClient"
QT_MOC_LITERAL(14, 218, 15), // "editInfraClient"
QT_MOC_LITERAL(15, 234, 21), // "editInfraClientCommit"
QT_MOC_LITERAL(16, 256, 17), // "removeInfraClient"
QT_MOC_LITERAL(17, 274, 17), // "selectInfraClient"
QT_MOC_LITERAL(18, 292, 18), // "updateInfraClients"
QT_MOC_LITERAL(19, 311, 22) // "infraClientContextMenu"

    },
    "qjackctlSessionForm\0loadSession\0\0"
    "saveSessionSave\0saveSessionSaveAndQuit\0"
    "saveSessionSaveTemplate\0saveSessionVersion\0"
    "updateSession\0recentSession\0"
    "updateRecentMenu\0clearRecentMenu\0"
    "sessionViewContextMenu\0pos\0addInfraClient\0"
    "editInfraClient\0editInfraClientCommit\0"
    "removeInfraClient\0selectInfraClient\0"
    "updateInfraClients\0infraClientContextMenu"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qjackctlSessionForm[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x0a /* Public */,
       3,    0,  100,    2, 0x0a /* Public */,
       4,    0,  101,    2, 0x0a /* Public */,
       5,    0,  102,    2, 0x0a /* Public */,
       6,    1,  103,    2, 0x0a /* Public */,
       7,    0,  106,    2, 0x0a /* Public */,
       8,    0,  107,    2, 0x09 /* Protected */,
       9,    0,  108,    2, 0x09 /* Protected */,
      10,    0,  109,    2, 0x09 /* Protected */,
      11,    1,  110,    2, 0x09 /* Protected */,
      13,    0,  113,    2, 0x09 /* Protected */,
      14,    0,  114,    2, 0x09 /* Protected */,
      15,    0,  115,    2, 0x09 /* Protected */,
      16,    0,  116,    2, 0x09 /* Protected */,
      17,    0,  117,    2, 0x09 /* Protected */,
      18,    0,  118,    2, 0x09 /* Protected */,
      19,    1,  119,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   12,

       0        // eod
};

void qjackctlSessionForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qjackctlSessionForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadSession(); break;
        case 1: _t->saveSessionSave(); break;
        case 2: _t->saveSessionSaveAndQuit(); break;
        case 3: _t->saveSessionSaveTemplate(); break;
        case 4: _t->saveSessionVersion((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->updateSession(); break;
        case 6: _t->recentSession(); break;
        case 7: _t->updateRecentMenu(); break;
        case 8: _t->clearRecentMenu(); break;
        case 9: _t->sessionViewContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 10: _t->addInfraClient(); break;
        case 11: _t->editInfraClient(); break;
        case 12: _t->editInfraClientCommit(); break;
        case 13: _t->removeInfraClient(); break;
        case 14: _t->selectInfraClient(); break;
        case 15: _t->updateInfraClients(); break;
        case 16: _t->infraClientContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qjackctlSessionForm::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_qjackctlSessionForm.data,
    qt_meta_data_qjackctlSessionForm,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qjackctlSessionForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qjackctlSessionForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qjackctlSessionForm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int qjackctlSessionForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
