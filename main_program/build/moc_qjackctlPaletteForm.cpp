/****************************************************************************
** Meta object code from reading C++ file 'qjackctlPaletteForm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../C++/qjackctl/qjackctlPaletteForm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qjackctlPaletteForm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qjackctlPaletteForm_t {
    QByteArrayData data[16];
    char stringdata0[234];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qjackctlPaletteForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qjackctlPaletteForm_t qt_meta_stringdata_qjackctlPaletteForm = {
    {
QT_MOC_LITERAL(0, 0, 19), // "qjackctlPaletteForm"
QT_MOC_LITERAL(1, 20, 18), // "nameComboActivated"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 4), // "name"
QT_MOC_LITERAL(4, 45, 16), // "nameComboChanged"
QT_MOC_LITERAL(5, 62, 17), // "saveButtonClicked"
QT_MOC_LITERAL(6, 80, 19), // "deleteButtonClicked"
QT_MOC_LITERAL(7, 100, 21), // "generateButtonChanged"
QT_MOC_LITERAL(8, 122, 18), // "resetButtonClicked"
QT_MOC_LITERAL(9, 141, 19), // "detailsCheckClicked"
QT_MOC_LITERAL(10, 161, 19), // "importButtonClicked"
QT_MOC_LITERAL(11, 181, 19), // "exportButtonClicked"
QT_MOC_LITERAL(12, 201, 14), // "paletteChanged"
QT_MOC_LITERAL(13, 216, 3), // "pal"
QT_MOC_LITERAL(14, 220, 6), // "accept"
QT_MOC_LITERAL(15, 227, 6) // "reject"

    },
    "qjackctlPaletteForm\0nameComboActivated\0"
    "\0name\0nameComboChanged\0saveButtonClicked\0"
    "deleteButtonClicked\0generateButtonChanged\0"
    "resetButtonClicked\0detailsCheckClicked\0"
    "importButtonClicked\0exportButtonClicked\0"
    "paletteChanged\0pal\0accept\0reject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qjackctlPaletteForm[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x09 /* Protected */,
       4,    1,   77,    2, 0x09 /* Protected */,
       5,    0,   80,    2, 0x09 /* Protected */,
       6,    0,   81,    2, 0x09 /* Protected */,
       7,    0,   82,    2, 0x09 /* Protected */,
       8,    0,   83,    2, 0x09 /* Protected */,
       9,    0,   84,    2, 0x09 /* Protected */,
      10,    0,   85,    2, 0x09 /* Protected */,
      11,    0,   86,    2, 0x09 /* Protected */,
      12,    1,   87,    2, 0x09 /* Protected */,
      14,    0,   90,    2, 0x09 /* Protected */,
      15,    0,   91,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPalette,   13,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qjackctlPaletteForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qjackctlPaletteForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nameComboActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->nameComboChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->saveButtonClicked(); break;
        case 3: _t->deleteButtonClicked(); break;
        case 4: _t->generateButtonChanged(); break;
        case 5: _t->resetButtonClicked(); break;
        case 6: _t->detailsCheckClicked(); break;
        case 7: _t->importButtonClicked(); break;
        case 8: _t->exportButtonClicked(); break;
        case 9: _t->paletteChanged((*reinterpret_cast< const QPalette(*)>(_a[1]))); break;
        case 10: _t->accept(); break;
        case 11: _t->reject(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qjackctlPaletteForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_qjackctlPaletteForm.data,
    qt_meta_data_qjackctlPaletteForm,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qjackctlPaletteForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qjackctlPaletteForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qjackctlPaletteForm.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int qjackctlPaletteForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
struct qt_meta_stringdata_qjackctlPaletteForm__PaletteModel_t {
    QByteArrayData data[6];
    char stringdata0[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qjackctlPaletteForm__PaletteModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qjackctlPaletteForm__PaletteModel_t qt_meta_stringdata_qjackctlPaletteForm__PaletteModel = {
    {
QT_MOC_LITERAL(0, 0, 33), // "qjackctlPaletteForm::PaletteM..."
QT_MOC_LITERAL(1, 34, 14), // "paletteChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 7), // "palette"
QT_MOC_LITERAL(4, 58, 9), // "colorRole"
QT_MOC_LITERAL(5, 68, 19) // "QPalette::ColorRole"

    },
    "qjackctlPaletteForm::PaletteModel\0"
    "paletteChanged\0\0palette\0colorRole\0"
    "QPalette::ColorRole"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qjackctlPaletteForm__PaletteModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   22, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPalette,    3,

 // properties: name, type, flags
       4, 0x80000000 | 5, 0x00095009,

       0        // eod
};

void qjackctlPaletteForm::PaletteModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PaletteModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->paletteChanged((*reinterpret_cast< const QPalette(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PaletteModel::*)(const QPalette & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaletteModel::paletteChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PaletteModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPalette::ColorRole*>(_v) = _t->colorRole(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject::SuperData qt_meta_extradata_qjackctlPaletteForm__PaletteModel[] = {
    QMetaObject::SuperData::link<QPalette::staticMetaObject>(),
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject qjackctlPaletteForm::PaletteModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractTableModel::staticMetaObject>(),
    qt_meta_stringdata_qjackctlPaletteForm__PaletteModel.data,
    qt_meta_data_qjackctlPaletteForm__PaletteModel,
    qt_static_metacall,
    qt_meta_extradata_qjackctlPaletteForm__PaletteModel,
    nullptr
} };


const QMetaObject *qjackctlPaletteForm::PaletteModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qjackctlPaletteForm::PaletteModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qjackctlPaletteForm__PaletteModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int qjackctlPaletteForm::PaletteModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void qjackctlPaletteForm::PaletteModel::paletteChanged(const QPalette & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_qjackctlPaletteForm__ColorButton_t {
    QByteArrayData data[5];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qjackctlPaletteForm__ColorButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qjackctlPaletteForm__ColorButton_t qt_meta_stringdata_qjackctlPaletteForm__ColorButton = {
    {
QT_MOC_LITERAL(0, 0, 32), // "qjackctlPaletteForm::ColorButton"
QT_MOC_LITERAL(1, 33, 7), // "changed"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 11), // "chooseColor"
QT_MOC_LITERAL(4, 54, 5) // "brush"

    },
    "qjackctlPaletteForm::ColorButton\0"
    "changed\0\0chooseColor\0brush"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qjackctlPaletteForm__ColorButton[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       1,   26, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   25,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::QBrush, 0x00095103,

       0        // eod
};

void qjackctlPaletteForm::ColorButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ColorButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->chooseColor(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ColorButton::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorButton::changed)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ColorButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QBrush*>(_v) = _t->brush(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ColorButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBrush(*reinterpret_cast< QBrush*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject qjackctlPaletteForm::ColorButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QPushButton::staticMetaObject>(),
    qt_meta_stringdata_qjackctlPaletteForm__ColorButton.data,
    qt_meta_data_qjackctlPaletteForm__ColorButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qjackctlPaletteForm::ColorButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qjackctlPaletteForm::ColorButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qjackctlPaletteForm__ColorButton.stringdata0))
        return static_cast<void*>(this);
    return QPushButton::qt_metacast(_clname);
}

int qjackctlPaletteForm::ColorButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void qjackctlPaletteForm::ColorButton::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_qjackctlPaletteForm__ColorEditor_t {
    QByteArrayData data[6];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qjackctlPaletteForm__ColorEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qjackctlPaletteForm__ColorEditor_t qt_meta_stringdata_qjackctlPaletteForm__ColorEditor = {
    {
QT_MOC_LITERAL(0, 0, 32), // "qjackctlPaletteForm::ColorEditor"
QT_MOC_LITERAL(1, 33, 7), // "changed"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 8), // "QWidget*"
QT_MOC_LITERAL(4, 51, 6), // "widget"
QT_MOC_LITERAL(5, 58, 12) // "colorChanged"

    },
    "qjackctlPaletteForm::ColorEditor\0"
    "changed\0\0QWidget*\0widget\0colorChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qjackctlPaletteForm__ColorEditor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   27,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void qjackctlPaletteForm::ColorEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ColorEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 1: _t->colorChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ColorEditor::*)(QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorEditor::changed)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qjackctlPaletteForm::ColorEditor::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_qjackctlPaletteForm__ColorEditor.data,
    qt_meta_data_qjackctlPaletteForm__ColorEditor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qjackctlPaletteForm::ColorEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qjackctlPaletteForm::ColorEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qjackctlPaletteForm__ColorEditor.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int qjackctlPaletteForm::ColorEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void qjackctlPaletteForm::ColorEditor::changed(QWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_qjackctlPaletteForm__RoleEditor_t {
    QByteArrayData data[6];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qjackctlPaletteForm__RoleEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qjackctlPaletteForm__RoleEditor_t qt_meta_stringdata_qjackctlPaletteForm__RoleEditor = {
    {
QT_MOC_LITERAL(0, 0, 31), // "qjackctlPaletteForm::RoleEditor"
QT_MOC_LITERAL(1, 32, 7), // "changed"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 8), // "QWidget*"
QT_MOC_LITERAL(4, 50, 6), // "widget"
QT_MOC_LITERAL(5, 57, 13) // "resetProperty"

    },
    "qjackctlPaletteForm::RoleEditor\0changed\0"
    "\0QWidget*\0widget\0resetProperty"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qjackctlPaletteForm__RoleEditor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   27,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void qjackctlPaletteForm::RoleEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RoleEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 1: _t->resetProperty(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RoleEditor::*)(QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoleEditor::changed)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qjackctlPaletteForm::RoleEditor::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_qjackctlPaletteForm__RoleEditor.data,
    qt_meta_data_qjackctlPaletteForm__RoleEditor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qjackctlPaletteForm::RoleEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qjackctlPaletteForm::RoleEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qjackctlPaletteForm__RoleEditor.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int qjackctlPaletteForm::RoleEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void qjackctlPaletteForm::RoleEditor::changed(QWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
