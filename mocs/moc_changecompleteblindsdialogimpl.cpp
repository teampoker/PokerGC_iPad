/****************************************************************************
** Meta object code from reading C++ file 'changecompleteblindsdialogimpl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/gui/qt/changecompleteblindsdialog/changecompleteblindsdialogimpl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'changecompleteblindsdialogimpl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_changeCompleteBlindsDialogImpl_t {
    QByteArrayData data[7];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_changeCompleteBlindsDialogImpl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_changeCompleteBlindsDialogImpl_t qt_meta_stringdata_changeCompleteBlindsDialogImpl = {
    {
QT_MOC_LITERAL(0, 0, 30), // "changeCompleteBlindsDialogImpl"
QT_MOC_LITERAL(1, 31, 18), // "getSettingsCorrect"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 25), // "updateSpinBoxInputMinimum"
QT_MOC_LITERAL(4, 77, 19), // "addBlindValueToList"
QT_MOC_LITERAL(5, 97, 19), // "removeBlindFromList"
QT_MOC_LITERAL(6, 117, 14) // "sortBlindsList"

    },
    "changeCompleteBlindsDialogImpl\0"
    "getSettingsCorrect\0\0updateSpinBoxInputMinimum\0"
    "addBlindValueToList\0removeBlindFromList\0"
    "sortBlindsList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_changeCompleteBlindsDialogImpl[] = {

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
       3,    1,   40,    2, 0x0a /* Public */,
       4,    0,   43,    2, 0x0a /* Public */,
       5,    0,   44,    2, 0x0a /* Public */,
       6,    0,   45,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void changeCompleteBlindsDialogImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        changeCompleteBlindsDialogImpl *_t = static_cast<changeCompleteBlindsDialogImpl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->getSettingsCorrect();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: _t->updateSpinBoxInputMinimum((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->addBlindValueToList(); break;
        case 3: _t->removeBlindFromList(); break;
        case 4: _t->sortBlindsList(); break;
        default: ;
        }
    }
}

const QMetaObject changeCompleteBlindsDialogImpl::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_changeCompleteBlindsDialogImpl.data,
      qt_meta_data_changeCompleteBlindsDialogImpl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *changeCompleteBlindsDialogImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *changeCompleteBlindsDialogImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_changeCompleteBlindsDialogImpl.stringdata0))
        return static_cast<void*>(const_cast< changeCompleteBlindsDialogImpl*>(this));
    if (!strcmp(_clname, "Ui::changeCompleteBlindsDialog"))
        return static_cast< Ui::changeCompleteBlindsDialog*>(const_cast< changeCompleteBlindsDialogImpl*>(this));
    return QDialog::qt_metacast(_clname);
}

int changeCompleteBlindsDialogImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
