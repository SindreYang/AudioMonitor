/****************************************************************************
** Meta object code from reading C++ file 'midi_widgets.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../midi_widgets.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'midi_widgets.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MidiInputBox_t {
    QByteArrayData data[6];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MidiInputBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MidiInputBox_t qt_meta_stringdata_MidiInputBox = {
    {
QT_MOC_LITERAL(0, 0, 12), // "MidiInputBox"
QT_MOC_LITERAL(1, 13, 19), // "inputChannelChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 19), // "inputChanSelChanged"
QT_MOC_LITERAL(4, 54, 6), // "ledOff"
QT_MOC_LITERAL(5, 61, 6) // "midiIn"

    },
    "MidiInputBox\0inputChannelChanged\0\0"
    "inputChanSelChanged\0ledOff\0midiIn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MidiInputBox[] = {

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
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   37,    2, 0x08 /* Private */,
       4,    0,   40,    2, 0x08 /* Private */,
       5,    0,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MidiInputBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MidiInputBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->inputChannelChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->inputChanSelChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->ledOff(); break;
        case 3: _t->midiIn(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MidiInputBox::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MidiInputBox::inputChannelChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MidiInputBox::staticMetaObject = { {
    &QGroupBox::staticMetaObject,
    qt_meta_stringdata_MidiInputBox.data,
    qt_meta_data_MidiInputBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MidiInputBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MidiInputBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MidiInputBox.stringdata0))
        return static_cast<void*>(this);
    return QGroupBox::qt_metacast(_clname);
}

int MidiInputBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
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
void MidiInputBox::inputChannelChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_MidiOutputBox_t {
    QByteArrayData data[4];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MidiOutputBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MidiOutputBox_t qt_meta_stringdata_MidiOutputBox = {
    {
QT_MOC_LITERAL(0, 0, 13), // "MidiOutputBox"
QT_MOC_LITERAL(1, 14, 6), // "ledOff"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 7) // "midiOut"

    },
    "MidiOutputBox\0ledOff\0\0midiOut"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MidiOutputBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MidiOutputBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MidiOutputBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ledOff(); break;
        case 1: _t->midiOut(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MidiOutputBox::staticMetaObject = { {
    &QGroupBox::staticMetaObject,
    qt_meta_stringdata_MidiOutputBox.data,
    qt_meta_data_MidiOutputBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MidiOutputBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MidiOutputBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MidiOutputBox.stringdata0))
        return static_cast<void*>(this);
    return QGroupBox::qt_metacast(_clname);
}

int MidiOutputBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
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
    return _id;
}
struct qt_meta_stringdata_MidiLearnerDlg_t {
    QByteArrayData data[3];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MidiLearnerDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MidiLearnerDlg_t qt_meta_stringdata_MidiLearnerDlg = {
    {
QT_MOC_LITERAL(0, 0, 14), // "MidiLearnerDlg"
QT_MOC_LITERAL(1, 15, 10), // "learnReset"
QT_MOC_LITERAL(2, 26, 0) // ""

    },
    "MidiLearnerDlg\0learnReset\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MidiLearnerDlg[] = {

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
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void MidiLearnerDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MidiLearnerDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->learnReset(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MidiLearnerDlg::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_MidiLearnerDlg.data,
    qt_meta_data_MidiLearnerDlg,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MidiLearnerDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MidiLearnerDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MidiLearnerDlg.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int MidiLearnerDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Midibut_t {
    QByteArrayData data[3];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Midibut_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Midibut_t qt_meta_stringdata_Midibut = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Midibut"
QT_MOC_LITERAL(1, 8, 16), // "midiLearnRequest"
QT_MOC_LITERAL(2, 25, 0) // ""

    },
    "Midibut\0midiLearnRequest\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Midibut[] = {

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
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void Midibut::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Midibut *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->midiLearnRequest((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Midibut::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Midibut::midiLearnRequest)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Midibut::staticMetaObject = { {
    &QPushButton::staticMetaObject,
    qt_meta_stringdata_Midibut.data,
    qt_meta_data_Midibut,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Midibut::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Midibut::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Midibut.stringdata0))
        return static_cast<void*>(this);
    return QPushButton::qt_metacast(_clname);
}

int Midibut::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
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
void Midibut::midiLearnRequest(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_Knob_t {
    QByteArrayData data[1];
    char stringdata0[5];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Knob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Knob_t qt_meta_stringdata_Knob = {
    {
QT_MOC_LITERAL(0, 0, 4) // "Knob"

    },
    "Knob"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Knob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void Knob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Knob::staticMetaObject = { {
    &QDial::staticMetaObject,
    qt_meta_stringdata_Knob.data,
    qt_meta_data_Knob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Knob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Knob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Knob.stringdata0))
        return static_cast<void*>(this);
    return QDial::qt_metacast(_clname);
}

int Knob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDial::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Fader_t {
    QByteArrayData data[1];
    char stringdata0[6];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Fader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Fader_t qt_meta_stringdata_Fader = {
    {
QT_MOC_LITERAL(0, 0, 5) // "Fader"

    },
    "Fader"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Fader[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void Fader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Fader::staticMetaObject = { {
    &QSlider::staticMetaObject,
    qt_meta_stringdata_Fader.data,
    qt_meta_data_Fader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Fader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Fader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Fader.stringdata0))
        return static_cast<void*>(this);
    return QSlider::qt_metacast(_clname);
}

int Fader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSlider::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Midiknob_t {
    QByteArrayData data[5];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Midiknob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Midiknob_t qt_meta_stringdata_Midiknob = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Midiknob"
QT_MOC_LITERAL(1, 9, 12), // "valueChanged"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 16), // "midiLearnRequest"
QT_MOC_LITERAL(4, 40, 14) // "knobValChanged"

    },
    "Midiknob\0valueChanged\0\0midiLearnRequest\0"
    "knobValChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Midiknob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       3,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void Midiknob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Midiknob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->midiLearnRequest((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->knobValChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Midiknob::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Midiknob::valueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Midiknob::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Midiknob::midiLearnRequest)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Midiknob::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Midiknob.data,
    qt_meta_data_Midiknob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Midiknob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Midiknob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Midiknob.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Midiknob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Midiknob::valueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Midiknob::midiLearnRequest(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_Midifader_t {
    QByteArrayData data[5];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Midifader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Midifader_t qt_meta_stringdata_Midifader = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Midifader"
QT_MOC_LITERAL(1, 10, 12), // "valueChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 16), // "midiLearnRequest"
QT_MOC_LITERAL(4, 41, 15) // "faderValChanged"

    },
    "Midifader\0valueChanged\0\0midiLearnRequest\0"
    "faderValChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Midifader[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       3,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void Midifader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Midifader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->midiLearnRequest((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->faderValChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Midifader::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Midifader::valueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Midifader::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Midifader::midiLearnRequest)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Midifader::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Midifader.data,
    qt_meta_data_Midifader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Midifader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Midifader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Midifader.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Midifader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Midifader::valueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Midifader::midiLearnRequest(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_MidiWidgetMap_t {
    QByteArrayData data[5];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MidiWidgetMap_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MidiWidgetMap_t qt_meta_stringdata_MidiWidgetMap = {
    {
QT_MOC_LITERAL(0, 0, 13), // "MidiWidgetMap"
QT_MOC_LITERAL(1, 14, 9), // "learnKnob"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 10), // "learnFader"
QT_MOC_LITERAL(4, 36, 8) // "learnBut"

    },
    "MidiWidgetMap\0learnKnob\0\0learnFader\0"
    "learnBut"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MidiWidgetMap[] = {

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
       1,    1,   29,    2, 0x0a /* Public */,
       3,    1,   32,    2, 0x0a /* Public */,
       4,    1,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void MidiWidgetMap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MidiWidgetMap *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->learnKnob((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->learnFader((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->learnBut((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MidiWidgetMap::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_MidiWidgetMap.data,
    qt_meta_data_MidiWidgetMap,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MidiWidgetMap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MidiWidgetMap::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MidiWidgetMap.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MidiWidgetMap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
