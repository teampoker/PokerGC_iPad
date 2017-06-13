/****************************************************************************
** Meta object code from reading C++ file 'createnetworkgamedialogimpl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/gui/qt/createnetworkgamedialog/createnetworkgamedialogimpl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'createnetworkgamedialogimpl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_createNetworkGameDialogImpl_t {
    QByteArrayData data[10];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_createNetworkGameDialogImpl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_createNetworkGameDialogImpl_t qt_meta_stringdata_createNetworkGameDialogImpl = {
    {
QT_MOC_LITERAL(0, 0, 27), // "createNetworkGameDialogImpl"
QT_MOC_LITERAL(1, 28, 10), // "createGame"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 6), // "cancel"
QT_MOC_LITERAL(4, 47, 12), // "fillFormular"
QT_MOC_LITERAL(5, 60, 10), // "showDialog"
QT_MOC_LITERAL(6, 71, 13), // "keyPressEvent"
QT_MOC_LITERAL(7, 85, 10), // "QKeyEvent*"
QT_MOC_LITERAL(8, 96, 5), // "event"
QT_MOC_LITERAL(9, 102, 22) // "callChangeBlindsDialog"

    },
    "createNetworkGameDialogImpl\0createGame\0"
    "\0cancel\0fillFormular\0showDialog\0"
    "keyPressEvent\0QKeyEvent*\0event\0"
    "callChangeBlindsDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_createNetworkGameDialogImpl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x0a /* Public */,
       6,    1,   48,    2, 0x0a /* Public */,
       9,    1,   51,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void createNetworkGameDialogImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        createNetworkGameDialogImpl *_t = static_cast<createNetworkGameDialogImpl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->createGame(); break;
        case 1: _t->cancel(); break;
        case 2: _t->fillFormular(); break;
        case 3: _t->showDialog(); break;
        case 4: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 5: _t->callChangeBlindsDialog((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject createNetworkGameDialogImpl::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_createNetworkGameDialogImpl.data,
      qt_meta_data_createNetworkGameDialogImpl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *createNetworkGameDialogImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *createNetworkGameDialogImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_createNetworkGameDialogImpl.stringdata0))
        return static_cast<void*>(const_cast< createNetworkGameDialogImpl*>(this));
    if (!strcmp(_clname, "Ui::createNetworkGameDialog"))
        return static_cast< Ui::createNetworkGameDialog*>(const_cast< createNetworkGameDialogImpl*>(this));
    return QDialog::qt_metacast(_clname);
}

int createNetworkGameDialogImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
