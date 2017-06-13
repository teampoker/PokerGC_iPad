/****************************************************************************
** Meta object code from reading C++ file 'internetgamelogindialogimpl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/gui/qt/internetgamelogindialog/internetgamelogindialogimpl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'internetgamelogindialogimpl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_internetGameLoginDialogImpl_t {
    QByteArrayData data[6];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_internetGameLoginDialogImpl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_internetGameLoginDialogImpl_t qt_meta_stringdata_internetGameLoginDialogImpl = {
    {
QT_MOC_LITERAL(0, 0, 27), // "internetGameLoginDialogImpl"
QT_MOC_LITERAL(1, 28, 14), // "regUserToggled"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 16), // "guestUserToggled"
QT_MOC_LITERAL(4, 61, 13), // "okButtonCheck"
QT_MOC_LITERAL(5, 75, 16) // "clickLoginButton"

    },
    "internetGameLoginDialogImpl\0regUserToggled\0"
    "\0guestUserToggled\0okButtonCheck\0"
    "clickLoginButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_internetGameLoginDialogImpl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       3,    1,   37,    2, 0x0a /* Public */,
       4,    0,   40,    2, 0x0a /* Public */,
       5,    0,   41,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void internetGameLoginDialogImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        internetGameLoginDialogImpl *_t = static_cast<internetGameLoginDialogImpl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->regUserToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->guestUserToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->okButtonCheck(); break;
        case 3: _t->clickLoginButton(); break;
        default: ;
        }
    }
}

const QMetaObject internetGameLoginDialogImpl::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_internetGameLoginDialogImpl.data,
      qt_meta_data_internetGameLoginDialogImpl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *internetGameLoginDialogImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *internetGameLoginDialogImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_internetGameLoginDialogImpl.stringdata0))
        return static_cast<void*>(const_cast< internetGameLoginDialogImpl*>(this));
    if (!strcmp(_clname, "Ui::internetGameLoginDialog"))
        return static_cast< Ui::internetGameLoginDialog*>(const_cast< internetGameLoginDialogImpl*>(this));
    return QDialog::qt_metacast(_clname);
}

int internetGameLoginDialogImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
