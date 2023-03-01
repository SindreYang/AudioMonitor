/****************************************************************************
** Meta object code from reading C++ file 'qjackctlMainForm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../C++/qjackctl/qjackctlMainForm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qjackctlMainForm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qjackctlMainForm_t {
    QByteArrayData data[44];
    char stringdata0[651];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qjackctlMainForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qjackctlMainForm_t qt_meta_stringdata_qjackctlMainForm = {
    {
QT_MOC_LITERAL(0, 0, 16), // "qjackctlMainForm"
QT_MOC_LITERAL(1, 17, 9), // "startJack"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 8), // "stopJack"
QT_MOC_LITERAL(4, 37, 10), // "toggleJack"
QT_MOC_LITERAL(5, 48, 13), // "showSetupForm"
QT_MOC_LITERAL(6, 62, 13), // "showAboutForm"
QT_MOC_LITERAL(7, 76, 14), // "resetXrunStats"
QT_MOC_LITERAL(8, 91, 10), // "commitData"
QT_MOC_LITERAL(9, 102, 16), // "QSessionManager&"
QT_MOC_LITERAL(10, 119, 2), // "sm"
QT_MOC_LITERAL(11, 122, 14), // "activatePreset"
QT_MOC_LITERAL(12, 137, 16), // "activatePatchbay"
QT_MOC_LITERAL(13, 154, 10), // "readStdout"
QT_MOC_LITERAL(14, 165, 11), // "jackStarted"
QT_MOC_LITERAL(15, 177, 9), // "jackError"
QT_MOC_LITERAL(16, 187, 22), // "QProcess::ProcessError"
QT_MOC_LITERAL(17, 210, 12), // "jackFinished"
QT_MOC_LITERAL(18, 223, 11), // "jackCleanup"
QT_MOC_LITERAL(19, 235, 13), // "jackStabilize"
QT_MOC_LITERAL(20, 249, 16), // "stdoutNotifySlot"
QT_MOC_LITERAL(21, 266, 17), // "sigtermNotifySlot"
QT_MOC_LITERAL(22, 284, 14), // "alsaNotifySlot"
QT_MOC_LITERAL(23, 299, 9), // "timerSlot"
QT_MOC_LITERAL(24, 309, 18), // "jackConnectChanged"
QT_MOC_LITERAL(25, 328, 18), // "alsaConnectChanged"
QT_MOC_LITERAL(26, 347, 16), // "cableConnectSlot"
QT_MOC_LITERAL(27, 364, 14), // "toggleMainForm"
QT_MOC_LITERAL(28, 379, 24), // "toggleMessagesStatusForm"
QT_MOC_LITERAL(29, 404, 18), // "toggleMessagesForm"
QT_MOC_LITERAL(30, 423, 16), // "toggleStatusForm"
QT_MOC_LITERAL(31, 440, 17), // "toggleSessionForm"
QT_MOC_LITERAL(32, 458, 21), // "toggleConnectionsForm"
QT_MOC_LITERAL(33, 480, 18), // "togglePatchbayForm"
QT_MOC_LITERAL(34, 499, 15), // "toggleGraphForm"
QT_MOC_LITERAL(35, 515, 15), // "transportRewind"
QT_MOC_LITERAL(36, 531, 17), // "transportBackward"
QT_MOC_LITERAL(37, 549, 13), // "transportPlay"
QT_MOC_LITERAL(38, 563, 14), // "transportStart"
QT_MOC_LITERAL(39, 578, 13), // "transportStop"
QT_MOC_LITERAL(40, 592, 16), // "transportForward"
QT_MOC_LITERAL(41, 609, 19), // "activatePresetsMenu"
QT_MOC_LITERAL(42, 629, 8), // "QAction*"
QT_MOC_LITERAL(43, 638, 12) // "quitMainForm"

    },
    "qjackctlMainForm\0startJack\0\0stopJack\0"
    "toggleJack\0showSetupForm\0showAboutForm\0"
    "resetXrunStats\0commitData\0QSessionManager&\0"
    "sm\0activatePreset\0activatePatchbay\0"
    "readStdout\0jackStarted\0jackError\0"
    "QProcess::ProcessError\0jackFinished\0"
    "jackCleanup\0jackStabilize\0stdoutNotifySlot\0"
    "sigtermNotifySlot\0alsaNotifySlot\0"
    "timerSlot\0jackConnectChanged\0"
    "alsaConnectChanged\0cableConnectSlot\0"
    "toggleMainForm\0toggleMessagesStatusForm\0"
    "toggleMessagesForm\0toggleStatusForm\0"
    "toggleSessionForm\0toggleConnectionsForm\0"
    "togglePatchbayForm\0toggleGraphForm\0"
    "transportRewind\0transportBackward\0"
    "transportPlay\0transportStart\0transportStop\0"
    "transportForward\0activatePresetsMenu\0"
    "QAction*\0quitMainForm"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qjackctlMainForm[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  209,    2, 0x0a /* Public */,
       3,    0,  210,    2, 0x0a /* Public */,
       4,    0,  211,    2, 0x0a /* Public */,
       5,    0,  212,    2, 0x0a /* Public */,
       6,    0,  213,    2, 0x0a /* Public */,
       7,    0,  214,    2, 0x0a /* Public */,
       8,    1,  215,    2, 0x0a /* Public */,
      11,    1,  218,    2, 0x0a /* Public */,
      12,    1,  221,    2, 0x0a /* Public */,
      13,    0,  224,    2, 0x0a /* Public */,
      14,    0,  225,    2, 0x0a /* Public */,
      15,    1,  226,    2, 0x0a /* Public */,
      17,    0,  229,    2, 0x0a /* Public */,
      18,    0,  230,    2, 0x0a /* Public */,
      19,    0,  231,    2, 0x0a /* Public */,
      20,    1,  232,    2, 0x0a /* Public */,
      21,    1,  235,    2, 0x0a /* Public */,
      22,    1,  238,    2, 0x0a /* Public */,
      23,    0,  241,    2, 0x0a /* Public */,
      24,    0,  242,    2, 0x0a /* Public */,
      25,    0,  243,    2, 0x0a /* Public */,
      26,    3,  244,    2, 0x0a /* Public */,
      27,    0,  251,    2, 0x0a /* Public */,
      28,    0,  252,    2, 0x0a /* Public */,
      29,    0,  253,    2, 0x0a /* Public */,
      30,    0,  254,    2, 0x0a /* Public */,
      31,    0,  255,    2, 0x0a /* Public */,
      32,    0,  256,    2, 0x0a /* Public */,
      33,    0,  257,    2, 0x0a /* Public */,
      34,    0,  258,    2, 0x0a /* Public */,
      35,    0,  259,    2, 0x0a /* Public */,
      36,    0,  260,    2, 0x0a /* Public */,
      37,    1,  261,    2, 0x0a /* Public */,
      38,    0,  264,    2, 0x0a /* Public */,
      39,    0,  265,    2, 0x0a /* Public */,
      40,    0,  266,    2, 0x0a /* Public */,
      41,    1,  267,    2, 0x0a /* Public */,
      11,    1,  270,    2, 0x0a /* Public */,
      43,    0,  273,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,    2,    2,    2,
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
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 42,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void qjackctlMainForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qjackctlMainForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startJack(); break;
        case 1: _t->stopJack(); break;
        case 2: _t->toggleJack(); break;
        case 3: _t->showSetupForm(); break;
        case 4: _t->showAboutForm(); break;
        case 5: _t->resetXrunStats(); break;
        case 6: _t->commitData((*reinterpret_cast< QSessionManager(*)>(_a[1]))); break;
        case 7: _t->activatePreset((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->activatePatchbay((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->readStdout(); break;
        case 10: _t->jackStarted(); break;
        case 11: _t->jackError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 12: _t->jackFinished(); break;
        case 13: _t->jackCleanup(); break;
        case 14: _t->jackStabilize(); break;
        case 15: _t->stdoutNotifySlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->sigtermNotifySlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->alsaNotifySlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->timerSlot(); break;
        case 19: _t->jackConnectChanged(); break;
        case 20: _t->alsaConnectChanged(); break;
        case 21: _t->cableConnectSlot((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 22: _t->toggleMainForm(); break;
        case 23: _t->toggleMessagesStatusForm(); break;
        case 24: _t->toggleMessagesForm(); break;
        case 25: _t->toggleStatusForm(); break;
        case 26: _t->toggleSessionForm(); break;
        case 27: _t->toggleConnectionsForm(); break;
        case 28: _t->togglePatchbayForm(); break;
        case 29: _t->toggleGraphForm(); break;
        case 30: _t->transportRewind(); break;
        case 31: _t->transportBackward(); break;
        case 32: _t->transportPlay((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->transportStart(); break;
        case 34: _t->transportStop(); break;
        case 35: _t->transportForward(); break;
        case 36: _t->activatePresetsMenu((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 37: _t->activatePreset((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 38: _t->quitMainForm(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 36:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qjackctlMainForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_qjackctlMainForm.data,
    qt_meta_data_qjackctlMainForm,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qjackctlMainForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qjackctlMainForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qjackctlMainForm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int qjackctlMainForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
