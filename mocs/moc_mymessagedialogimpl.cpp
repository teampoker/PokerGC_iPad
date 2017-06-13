/****************************************************************************
** Meta object code from reading C++ file 'mymessagedialogimpl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/gui/qt/mymessagedialog/mymessagedialogimpl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mymessagedialogimpl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_myMessageDialogImpl_t {
    QByteArrayData data[16];
    char stringdata0[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_myMessageDialogImpl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_myMessageDialogImpl_t qt_meta_stringdata_myMessageDialogImpl = {
    {
QT_MOC_LITERAL(0, 0, 19), // "myMessageDialogImpl"
QT_MOC_LITERAL(1, 20, 30), // "checkIfMesssageWillBeDisplayed"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 2), // "id"
QT_MOC_LITERAL(4, 55, 4), // "exec"
QT_MOC_LITERAL(5, 60, 9), // "messageId"
QT_MOC_LITERAL(6, 70, 3), // "msg"
QT_MOC_LITERAL(7, 74, 5), // "title"
QT_MOC_LITERAL(8, 80, 3), // "pix"
QT_MOC_LITERAL(9, 84, 33), // "QDialogButtonBox::StandardBut..."
QT_MOC_LITERAL(10, 118, 7), // "buttons"
QT_MOC_LITERAL(11, 126, 12), // "showCheckBox"
QT_MOC_LITERAL(12, 139, 4), // "show"
QT_MOC_LITERAL(13, 144, 6), // "accept"
QT_MOC_LITERAL(14, 151, 6), // "reject"
QT_MOC_LITERAL(15, 158, 11) // "writeConfig"

    },
    "myMessageDialogImpl\0checkIfMesssageWillBeDisplayed\0"
    "\0id\0exec\0messageId\0msg\0title\0pix\0"
    "QDialogButtonBox::StandardButtons\0"
    "buttons\0showCheckBox\0show\0accept\0"
    "reject\0writeConfig"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_myMessageDialogImpl[] = {

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
       1,    1,   54,    2, 0x0a /* Public */,
       4,    6,   57,    2, 0x0a /* Public */,
       4,    5,   70,    2, 0x2a /* Public | MethodCloned */,
      12,    6,   81,    2, 0x0a /* Public */,
      12,    5,   94,    2, 0x2a /* Public | MethodCloned */,
      13,    0,  105,    2, 0x0a /* Public */,
      14,    0,  106,    2, 0x0a /* Public */,
      15,    0,  107,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool, QMetaType::Int,    3,
    QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QPixmap, 0x80000000 | 9, QMetaType::Bool,    5,    6,    7,    8,   10,   11,
    QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QPixmap, 0x80000000 | 9,    5,    6,    7,    8,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QPixmap, 0x80000000 | 9, QMetaType::Bool,    5,    6,    7,    8,   10,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QPixmap, 0x80000000 | 9,    5,    6,    7,    8,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void myMessageDialogImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        myMessageDialogImpl *_t = static_cast<myMessageDialogImpl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->checkIfMesssageWillBeDisplayed((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { int _r = _t->exec((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QPixmap(*)>(_a[4])),(*reinterpret_cast< QDialogButtonBox::StandardButtons(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: { int _r = _t->exec((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QPixmap(*)>(_a[4])),(*reinterpret_cast< QDialogButtonBox::StandardButtons(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: _t->show((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QPixmap(*)>(_a[4])),(*reinterpret_cast< QDialogButtonBox::StandardButtons(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 4: _t->show((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QPixmap(*)>(_a[4])),(*reinterpret_cast< QDialogButtonBox::StandardButtons(*)>(_a[5]))); break;
        case 5: _t->accept(); break;
        case 6: _t->reject(); break;
        case 7: _t->writeConfig(); break;
        default: ;
        }
    }
}

const QMetaObject myMessageDialogImpl::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_myMessageDialogImpl.data,
      qt_meta_data_myMessageDialogImpl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *myMessageDialogImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *myMessageDialogImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_myMessageDialogImpl.stringdata0))
        return static_cast<void*>(const_cast< myMessageDialogImpl*>(this));
    if (!strcmp(_clname, "Ui::myMessageDialog"))
        return static_cast< Ui::myMessageDialog*>(const_cast< myMessageDialogImpl*>(this));
    return QDialog::qt_metacast(_clname);
}

int myMessageDialogImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
