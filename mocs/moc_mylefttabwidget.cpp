/****************************************************************************
** Meta object code from reading C++ file 'mylefttabwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/gui/qt/gametable/mylefttabwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mylefttabwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MyLeftTabWidget_t {
    QByteArrayData data[5];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyLeftTabWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyLeftTabWidget_t qt_meta_stringdata_MyLeftTabWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "MyLeftTabWidget"
QT_MOC_LITERAL(1, 16, 12), // "blinkChatTab"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 11), // "getMyTabBar"
QT_MOC_LITERAL(4, 42, 8) // "QTabBar*"

    },
    "MyLeftTabWidget\0blinkChatTab\0\0getMyTabBar\0"
    "QTabBar*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyLeftTabWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    0,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    0x80000000 | 4,

       0        // eod
};

void MyLeftTabWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyLeftTabWidget *_t = static_cast<MyLeftTabWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->blinkChatTab(); break;
        case 1: { QTabBar* _r = _t->getMyTabBar();
            if (_a[0]) *reinterpret_cast< QTabBar**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject MyLeftTabWidget::staticMetaObject = {
    { &QTabWidget::staticMetaObject, qt_meta_stringdata_MyLeftTabWidget.data,
      qt_meta_data_MyLeftTabWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MyLeftTabWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyLeftTabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MyLeftTabWidget.stringdata0))
        return static_cast<void*>(const_cast< MyLeftTabWidget*>(this));
    return QTabWidget::qt_metacast(_clname);
}

int MyLeftTabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
