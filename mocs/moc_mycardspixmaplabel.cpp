/****************************************************************************
** Meta object code from reading C++ file 'mycardspixmaplabel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/gui/qt/gametable/mycardspixmaplabel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mycardspixmaplabel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MyCardsPixmapLabel_t {
    QByteArrayData data[14];
    char stringdata0[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyCardsPixmapLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyCardsPixmapLabel_t qt_meta_stringdata_MyCardsPixmapLabel = {
    {
QT_MOC_LITERAL(0, 0, 18), // "MyCardsPixmapLabel"
QT_MOC_LITERAL(1, 19, 19), // "signalFastFlipCards"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 9), // "setPixmap"
QT_MOC_LITERAL(4, 50, 20), // "setHiddenFrontPixmap"
QT_MOC_LITERAL(5, 71, 16), // "nextFadeOutFrame"
QT_MOC_LITERAL(6, 88, 18), // "nextFlipCardsFrame"
QT_MOC_LITERAL(7, 107, 13), // "fastFlipCards"
QT_MOC_LITERAL(8, 121, 5), // "front"
QT_MOC_LITERAL(9, 127, 15), // "mousePressEvent"
QT_MOC_LITERAL(10, 143, 12), // "QMouseEvent*"
QT_MOC_LITERAL(11, 156, 17), // "mouseReleaseEvent"
QT_MOC_LITERAL(12, 174, 8), // "setFront"
QT_MOC_LITERAL(13, 183, 8) // "theValue"

    },
    "MyCardsPixmapLabel\0signalFastFlipCards\0"
    "\0setPixmap\0setHiddenFrontPixmap\0"
    "nextFadeOutFrame\0nextFlipCardsFrame\0"
    "fastFlipCards\0front\0mousePressEvent\0"
    "QMouseEvent*\0mouseReleaseEvent\0setFront\0"
    "theValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyCardsPixmapLabel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   62,    2, 0x0a /* Public */,
       4,    1,   67,    2, 0x0a /* Public */,
       5,    0,   70,    2, 0x0a /* Public */,
       6,    0,   71,    2, 0x0a /* Public */,
       7,    1,   72,    2, 0x0a /* Public */,
       9,    1,   75,    2, 0x0a /* Public */,
      11,    1,   78,    2, 0x0a /* Public */,
      12,    1,   81,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QPixmap, QMetaType::Bool,    2,    2,
    QMetaType::Void, QMetaType::QPixmap,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, QMetaType::QPixmap,   13,

       0        // eod
};

void MyCardsPixmapLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyCardsPixmapLabel *_t = static_cast<MyCardsPixmapLabel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalFastFlipCards((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setPixmap((*reinterpret_cast< const QPixmap(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 2: _t->setHiddenFrontPixmap((*reinterpret_cast< const QPixmap(*)>(_a[1]))); break;
        case 3: _t->nextFadeOutFrame(); break;
        case 4: _t->nextFlipCardsFrame(); break;
        case 5: _t->fastFlipCards((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 7: _t->mouseReleaseEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 8: _t->setFront((*reinterpret_cast< const QPixmap(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MyCardsPixmapLabel::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyCardsPixmapLabel::signalFastFlipCards)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject MyCardsPixmapLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_MyCardsPixmapLabel.data,
      qt_meta_data_MyCardsPixmapLabel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MyCardsPixmapLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyCardsPixmapLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MyCardsPixmapLabel.stringdata0))
        return static_cast<void*>(const_cast< MyCardsPixmapLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int MyCardsPixmapLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void MyCardsPixmapLabel::signalFastFlipCards(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
