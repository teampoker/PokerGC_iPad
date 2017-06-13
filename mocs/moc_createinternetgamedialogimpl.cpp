/****************************************************************************
** Meta object code from reading C++ file 'createinternetgamedialogimpl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/gui/qt/createinternetgamedialog/createinternetgamedialogimpl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'createinternetgamedialogimpl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_createInternetGameDialogImpl_t {
    QByteArrayData data[13];
    char stringdata0[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_createInternetGameDialogImpl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_createInternetGameDialogImpl_t qt_meta_stringdata_createInternetGameDialogImpl = {
    {
QT_MOC_LITERAL(0, 0, 28), // "createInternetGameDialogImpl"
QT_MOC_LITERAL(1, 29, 10), // "createGame"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 6), // "cancel"
QT_MOC_LITERAL(4, 48, 12), // "fillFormular"
QT_MOC_LITERAL(5, 61, 9), // "guestMode"
QT_MOC_LITERAL(6, 71, 10), // "playerName"
QT_MOC_LITERAL(7, 82, 13), // "keyPressEvent"
QT_MOC_LITERAL(8, 96, 10), // "QKeyEvent*"
QT_MOC_LITERAL(9, 107, 5), // "event"
QT_MOC_LITERAL(10, 113, 17), // "clearGamePassword"
QT_MOC_LITERAL(11, 131, 15), // "gameTypeChanged"
QT_MOC_LITERAL(12, 147, 22) // "callChangeBlindsDialog"

    },
    "createInternetGameDialogImpl\0createGame\0"
    "\0cancel\0fillFormular\0guestMode\0"
    "playerName\0keyPressEvent\0QKeyEvent*\0"
    "event\0clearGamePassword\0gameTypeChanged\0"
    "callChangeBlindsDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_createInternetGameDialogImpl[] = {

 // content:
       7,       // revision
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
       4,    2,   51,    2, 0x0a /* Public */,
       7,    1,   56,    2, 0x0a /* Public */,
      10,    1,   59,    2, 0x0a /* Public */,
      11,    0,   62,    2, 0x0a /* Public */,
      12,    1,   63,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void createInternetGameDialogImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        createInternetGameDialogImpl *_t = static_cast<createInternetGameDialogImpl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->createGame(); break;
        case 1: _t->cancel(); break;
        case 2: _t->fillFormular((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 4: _t->clearGamePassword((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->gameTypeChanged(); break;
        case 6: _t->callChangeBlindsDialog((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject createInternetGameDialogImpl::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_createInternetGameDialogImpl.data,
      qt_meta_data_createInternetGameDialogImpl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *createInternetGameDialogImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *createInternetGameDialogImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_createInternetGameDialogImpl.stringdata0))
        return static_cast<void*>(const_cast< createInternetGameDialogImpl*>(this));
    if (!strcmp(_clname, "Ui::createInternetGameDialog"))
        return static_cast< Ui::createInternetGameDialog*>(const_cast< createInternetGameDialogImpl*>(this));
    return QDialog::qt_metacast(_clname);
}

int createInternetGameDialogImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
