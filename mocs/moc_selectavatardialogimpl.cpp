/****************************************************************************
** Meta object code from reading C++ file 'selectavatardialogimpl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/gui/qt/settingsdialog/selectavatardialog/selectavatardialogimpl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'selectavatardialogimpl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_selectAvatarDialogImpl_t {
    QByteArrayData data[10];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_selectAvatarDialogImpl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_selectAvatarDialogImpl_t qt_meta_stringdata_selectAvatarDialogImpl = {
    {
QT_MOC_LITERAL(0, 0, 22), // "selectAvatarDialogImpl"
QT_MOC_LITERAL(1, 23, 15), // "toggleGroupBox1"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 15), // "toggleGroupBox2"
QT_MOC_LITERAL(4, 56, 10), // "isAccepted"
QT_MOC_LITERAL(5, 67, 10), // "isRejected"
QT_MOC_LITERAL(6, 78, 13), // "getAvatarLink"
QT_MOC_LITERAL(7, 92, 17), // "setExternalAvatar"
QT_MOC_LITERAL(8, 110, 18), // "getSettingsCorrect"
QT_MOC_LITERAL(9, 129, 17) // "refreshAvatarView"

    },
    "selectAvatarDialogImpl\0toggleGroupBox1\0"
    "\0toggleGroupBox2\0isAccepted\0isRejected\0"
    "getAvatarLink\0setExternalAvatar\0"
    "getSettingsCorrect\0refreshAvatarView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_selectAvatarDialogImpl[] = {

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
       3,    1,   57,    2, 0x0a /* Public */,
       4,    0,   60,    2, 0x0a /* Public */,
       5,    0,   61,    2, 0x0a /* Public */,
       6,    0,   62,    2, 0x0a /* Public */,
       7,    0,   63,    2, 0x0a /* Public */,
       8,    0,   64,    2, 0x0a /* Public */,
       9,    0,   65,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,

       0        // eod
};

void selectAvatarDialogImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        selectAvatarDialogImpl *_t = static_cast<selectAvatarDialogImpl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->toggleGroupBox1((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->toggleGroupBox2((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->isAccepted(); break;
        case 3: _t->isRejected(); break;
        case 4: { QString _r = _t->getAvatarLink();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: _t->setExternalAvatar(); break;
        case 6: { bool _r = _t->getSettingsCorrect();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->refreshAvatarView(); break;
        default: ;
        }
    }
}

const QMetaObject selectAvatarDialogImpl::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_selectAvatarDialogImpl.data,
      qt_meta_data_selectAvatarDialogImpl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *selectAvatarDialogImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *selectAvatarDialogImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_selectAvatarDialogImpl.stringdata0))
        return static_cast<void*>(const_cast< selectAvatarDialogImpl*>(this));
    if (!strcmp(_clname, "Ui::selectAvatarDialog"))
        return static_cast< Ui::selectAvatarDialog*>(const_cast< selectAvatarDialogImpl*>(this));
    return QDialog::qt_metacast(_clname);
}

int selectAvatarDialogImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
