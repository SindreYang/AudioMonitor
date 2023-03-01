/****************************************************************************
** Meta object code from reading C++ file 'qjackctlSocketForm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../C++/qjackctl/qjackctlSocketForm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qjackctlSocketForm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qjackctlSocketForm_t {
    QByteArrayData data[18];
    char stringdata0[222];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qjackctlSocketForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qjackctlSocketForm_t qt_meta_stringdata_qjackctlSocketForm = {
    {
QT_MOC_LITERAL(0, 0, 18), // "qjackctlSocketForm"
QT_MOC_LITERAL(1, 19, 7), // "changed"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 7), // "addPlug"
QT_MOC_LITERAL(4, 36, 8), // "editPlug"
QT_MOC_LITERAL(5, 45, 10), // "removePlug"
QT_MOC_LITERAL(6, 56, 10), // "moveUpPlug"
QT_MOC_LITERAL(7, 67, 12), // "moveDownPlug"
QT_MOC_LITERAL(8, 80, 12), // "selectedPlug"
QT_MOC_LITERAL(9, 93, 19), // "activateAddPlugMenu"
QT_MOC_LITERAL(10, 113, 8), // "QAction*"
QT_MOC_LITERAL(11, 122, 17), // "customContextMenu"
QT_MOC_LITERAL(12, 140, 17), // "socketTypeChanged"
QT_MOC_LITERAL(13, 158, 17), // "socketNameChanged"
QT_MOC_LITERAL(14, 176, 17), // "clientNameChanged"
QT_MOC_LITERAL(15, 194, 13), // "stabilizeForm"
QT_MOC_LITERAL(16, 208, 6), // "accept"
QT_MOC_LITERAL(17, 215, 6) // "reject"

    },
    "qjackctlSocketForm\0changed\0\0addPlug\0"
    "editPlug\0removePlug\0moveUpPlug\0"
    "moveDownPlug\0selectedPlug\0activateAddPlugMenu\0"
    "QAction*\0customContextMenu\0socketTypeChanged\0"
    "socketNameChanged\0clientNameChanged\0"
    "stabilizeForm\0accept\0reject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qjackctlSocketForm[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x0a /* Public */,
       3,    0,   90,    2, 0x0a /* Public */,
       4,    0,   91,    2, 0x0a /* Public */,
       5,    0,   92,    2, 0x0a /* Public */,
       6,    0,   93,    2, 0x0a /* Public */,
       7,    0,   94,    2, 0x0a /* Public */,
       8,    0,   95,    2, 0x0a /* Public */,
       9,    1,   96,    2, 0x0a /* Public */,
      11,    1,   99,    2, 0x0a /* Public */,
      12,    0,  102,    2, 0x0a /* Public */,
      13,    0,  103,    2, 0x0a /* Public */,
      14,    0,  104,    2, 0x0a /* Public */,
      15,    0,  105,    2, 0x0a /* Public */,
      16,    0,  106,    2, 0x09 /* Protected */,
      17,    0,  107,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qjackctlSocketForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qjackctlSocketForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->addPlug(); break;
        case 2: _t->editPlug(); break;
        case 3: _t->removePlug(); break;
        case 4: _t->moveUpPlug(); break;
        case 5: _t->moveDownPlug(); break;
        case 6: _t->selectedPlug(); break;
        case 7: _t->activateAddPlugMenu((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 8: _t->customContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 9: _t->socketTypeChanged(); break;
        case 10: _t->socketNameChanged(); break;
        case 11: _t->clientNameChanged(); break;
        case 12: _t->stabilizeForm(); break;
        case 13: _t->accept(); break;
        case 14: _t->reject(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qjackctlSocketForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_qjackctlSocketForm.data,
    qt_meta_data_qjackctlSocketForm,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qjackctlSocketForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qjackctlSocketForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qjackctlSocketForm.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int qjackctlSocketForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
