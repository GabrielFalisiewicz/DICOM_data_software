/****************************************************************************
** Meta object code from reading C++ file 'TestDcmTagString.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../source/dcmcore/test/TestDcmTagString.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TestDcmTagString.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TestDcmTagString_t {
    QByteArrayData data[21];
    char stringdata0[228];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestDcmTagString_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestDcmTagString_t qt_meta_stringdata_TestDcmTagString = {
    {
QT_MOC_LITERAL(0, 0, 16), // "TestDcmTagString"
QT_MOC_LITERAL(1, 17, 12), // "initTestCase"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 13), // "testTagString"
QT_MOC_LITERAL(4, 45, 9), // "testTagCS"
QT_MOC_LITERAL(5, 55, 9), // "testTagSH"
QT_MOC_LITERAL(6, 65, 9), // "testTagLO"
QT_MOC_LITERAL(7, 75, 9), // "testTagST"
QT_MOC_LITERAL(8, 85, 9), // "testTagLT"
QT_MOC_LITERAL(9, 95, 9), // "testTagUT"
QT_MOC_LITERAL(10, 105, 9), // "testTagAE"
QT_MOC_LITERAL(11, 115, 9), // "testTagPN"
QT_MOC_LITERAL(12, 125, 9), // "testTagUI"
QT_MOC_LITERAL(13, 135, 9), // "testTagDA"
QT_MOC_LITERAL(14, 145, 9), // "testTagTM"
QT_MOC_LITERAL(15, 155, 9), // "testTagDT"
QT_MOC_LITERAL(16, 165, 9), // "testTagAS"
QT_MOC_LITERAL(17, 175, 9), // "testTagIS"
QT_MOC_LITERAL(18, 185, 9), // "testTagDS"
QT_MOC_LITERAL(19, 195, 16), // "testTagOperators"
QT_MOC_LITERAL(20, 212, 15) // "cleanupTestCase"

    },
    "TestDcmTagString\0initTestCase\0\0"
    "testTagString\0testTagCS\0testTagSH\0"
    "testTagLO\0testTagST\0testTagLT\0testTagUT\0"
    "testTagAE\0testTagPN\0testTagUI\0testTagDA\0"
    "testTagTM\0testTagDT\0testTagAS\0testTagIS\0"
    "testTagDS\0testTagOperators\0cleanupTestCase"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestDcmTagString[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x08 /* Private */,
       3,    0,  110,    2, 0x08 /* Private */,
       4,    0,  111,    2, 0x08 /* Private */,
       5,    0,  112,    2, 0x08 /* Private */,
       6,    0,  113,    2, 0x08 /* Private */,
       7,    0,  114,    2, 0x08 /* Private */,
       8,    0,  115,    2, 0x08 /* Private */,
       9,    0,  116,    2, 0x08 /* Private */,
      10,    0,  117,    2, 0x08 /* Private */,
      11,    0,  118,    2, 0x08 /* Private */,
      12,    0,  119,    2, 0x08 /* Private */,
      13,    0,  120,    2, 0x08 /* Private */,
      14,    0,  121,    2, 0x08 /* Private */,
      15,    0,  122,    2, 0x08 /* Private */,
      16,    0,  123,    2, 0x08 /* Private */,
      17,    0,  124,    2, 0x08 /* Private */,
      18,    0,  125,    2, 0x08 /* Private */,
      19,    0,  126,    2, 0x08 /* Private */,
      20,    0,  127,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TestDcmTagString::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TestDcmTagString *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->testTagString(); break;
        case 2: _t->testTagCS(); break;
        case 3: _t->testTagSH(); break;
        case 4: _t->testTagLO(); break;
        case 5: _t->testTagST(); break;
        case 6: _t->testTagLT(); break;
        case 7: _t->testTagUT(); break;
        case 8: _t->testTagAE(); break;
        case 9: _t->testTagPN(); break;
        case 10: _t->testTagUI(); break;
        case 11: _t->testTagDA(); break;
        case 12: _t->testTagTM(); break;
        case 13: _t->testTagDT(); break;
        case 14: _t->testTagAS(); break;
        case 15: _t->testTagIS(); break;
        case 16: _t->testTagDS(); break;
        case 17: _t->testTagOperators(); break;
        case 18: _t->cleanupTestCase(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TestDcmTagString::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TestDcmTagString.data,
    qt_meta_data_TestDcmTagString,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TestDcmTagString::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestDcmTagString::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestDcmTagString.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TestDcmTagString::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
