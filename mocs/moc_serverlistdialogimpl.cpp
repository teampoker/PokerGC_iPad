/****************************************************************************
** Meta object code from reading C++ file 'serverlistdialogimpl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/gui/qt/serverlistdialog/serverlistdialogimpl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serverlistdialogimpl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_serverListDialogImpl_t {
    QByteArrayData data[7];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_serverListDialogImpl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_serverListDialogImpl_t qt_meta_stringdata_serverListDialogImpl = {
    {
QT_MOC_LITERAL(0, 0, 20), // "serverListDialogImpl"
QT_MOC_LITERAL(1, 21, 4), // "exec"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 9), // "clearList"
QT_MOC_LITERAL(4, 37, 13), // "addServerItem"
QT_MOC_LITERAL(5, 51, 15), // "connectToServer"
QT_MOC_LITERAL(6, 67, 18) // "closeNetworkClient"

    },
    "serverListDialogImpl\0exec\0\0clearList\0"
    "addServerItem\0connectToServer\0"
    "closeNetworkClient"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_serverListDialogImpl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    1,   41,    2, 0x0a /* Public */,
       5,    0,   44,    2, 0x0a /* Public */,
       6,    0,   45,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void serverListDialogImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        serverListDialogImpl *_t = static_cast<serverListDialogImpl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->exec();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: _t->clearList(); break;
        case 2: _t->addServerItem((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 3: _t->connectToServer(); break;
        case 4: _t->closeNetworkClient(); break;
        default: ;
        }
    }
}

const QMetaObject serverListDialogImpl::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_serverListDialogImpl.data,
      qt_meta_data_serverListDialogImpl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *serverListDialogImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *serverListDialogImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_serverListDialogImpl.stringdata0))
        return static_cast<void*>(const_cast< serverListDialogImpl*>(this));
    if (!strcmp(_clname, "Ui::ServerListDialog"))
        return static_cast< Ui::ServerListDialog*>(const_cast< serverListDialogImpl*>(this));
    return QDialog::qt_metacast(_clname);
}

int serverListDialogImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
