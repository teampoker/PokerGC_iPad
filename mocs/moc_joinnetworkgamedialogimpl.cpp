/****************************************************************************
** Meta object code from reading C++ file 'joinnetworkgamedialogimpl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/gui/qt/joinnetworkgamedialog/joinnetworkgamedialogimpl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'joinnetworkgamedialogimpl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_joinNetworkGameDialogImpl_t {
    QByteArrayData data[15];
    char stringdata[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_joinNetworkGameDialogImpl_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_joinNetworkGameDialogImpl_t qt_meta_stringdata_joinNetworkGameDialogImpl = {
    {
QT_MOC_LITERAL(0, 0, 25), // "joinNetworkGameDialogImpl"
QT_MOC_LITERAL(1, 26, 11), // "startClient"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 21), // "fillServerProfileList"
QT_MOC_LITERAL(4, 61, 12), // "itemFillForm"
QT_MOC_LITERAL(5, 74, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(6, 91, 4), // "item"
QT_MOC_LITERAL(7, 96, 6), // "column"
QT_MOC_LITERAL(8, 103, 17), // "saveServerProfile"
QT_MOC_LITERAL(9, 121, 19), // "deleteServerProfile"
QT_MOC_LITERAL(10, 141, 13), // "keyPressEvent"
QT_MOC_LITERAL(11, 155, 10), // "QKeyEvent*"
QT_MOC_LITERAL(12, 166, 5), // "event"
QT_MOC_LITERAL(13, 172, 7), // "checkIp"
QT_MOC_LITERAL(14, 180, 17) // "connectButtonTest"

    },
    "joinNetworkGameDialogImpl\0startClient\0"
    "\0fillServerProfileList\0itemFillForm\0"
    "QTreeWidgetItem*\0item\0column\0"
    "saveServerProfile\0deleteServerProfile\0"
    "keyPressEvent\0QKeyEvent*\0event\0checkIp\0"
    "connectButtonTest"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_joinNetworkGameDialogImpl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x0a /* Public */,
       4,    2,   56,    2, 0x0a /* Public */,
       8,    0,   61,    2, 0x0a /* Public */,
       9,    0,   62,    2, 0x0a /* Public */,
      10,    1,   63,    2, 0x0a /* Public */,
      13,    0,   66,    2, 0x0a /* Public */,
      14,    0,   67,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int,    6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void joinNetworkGameDialogImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        joinNetworkGameDialogImpl *_t = static_cast<joinNetworkGameDialogImpl *>(_o);
        switch (_id) {
        case 0: _t->startClient(); break;
        case 1: _t->fillServerProfileList(); break;
        case 2: _t->itemFillForm((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->saveServerProfile(); break;
        case 4: _t->deleteServerProfile(); break;
        case 5: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 6: _t->checkIp(); break;
        case 7: _t->connectButtonTest(); break;
        default: ;
        }
    }
}

const QMetaObject joinNetworkGameDialogImpl::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_joinNetworkGameDialogImpl.data,
      qt_meta_data_joinNetworkGameDialogImpl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *joinNetworkGameDialogImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *joinNetworkGameDialogImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_joinNetworkGameDialogImpl.stringdata))
        return static_cast<void*>(const_cast< joinNetworkGameDialogImpl*>(this));
    if (!strcmp(_clname, "Ui::joinNetworkGameDialog"))
        return static_cast< Ui::joinNetworkGameDialog*>(const_cast< joinNetworkGameDialogImpl*>(this));
    return QDialog::qt_metacast(_clname);
}

int joinNetworkGameDialogImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
