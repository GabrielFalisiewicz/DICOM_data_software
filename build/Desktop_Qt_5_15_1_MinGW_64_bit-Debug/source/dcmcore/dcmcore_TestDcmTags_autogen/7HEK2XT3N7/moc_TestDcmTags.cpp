/****************************************************************************
** Meta object code from reading C++ file 'TestDcmTags.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../source/dcmcore/test/TestDcmTags.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TestDcmTags.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TestDcmTags_t {
    QByteArrayData data[14];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestDcmTags_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestDcmTags_t qt_meta_stringdata_TestDcmTags = {
    {
QT_MOC_LITERAL(0, 0, 11), // "TestDcmTags"
QT_MOC_LITERAL(1, 12, 12), // "initTestCase"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 9), // "testTagSS"
QT_MOC_LITERAL(4, 36, 9), // "testTagUS"
QT_MOC_LITERAL(5, 46, 9), // "testTagDS"
QT_MOC_LITERAL(6, 56, 9), // "testTagSL"
QT_MOC_LITERAL(7, 66, 9), // "testTagUL"
QT_MOC_LITERAL(8, 76, 9), // "testTagAT"
QT_MOC_LITERAL(9, 86, 9), // "testTagFL"
QT_MOC_LITERAL(10, 96, 9), // "testTagFD"
QT_MOC_LITERAL(11, 106, 11), // "testTagList"
QT_MOC_LITERAL(12, 118, 14), // "testTagsCreate"
QT_MOC_LITERAL(13, 133, 15) // "cleanupTestCase"

    },
    "TestDcmTags\0initTestCase\0\0testTagSS\0"
    "testTagUS\0testTagDS\0testTagSL\0testTagUL\0"
    "testTagAT\0testTagFL\0testTagFD\0testTagList\0"
    "testTagsCreate\0cleanupTestCase"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestDcmTags[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,

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

       0        // eod
};

void TestDcmTags::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TestDcmTags *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->testTagSS(); break;
        case 2: _t->testTagUS(); break;
        case 3: _t->testTagDS(); break;
        case 4: _t->testTagSL(); break;
        case 5: _t->testTagUL(); break;
        case 6: _t->testTagAT(); break;
        case 7: _t->testTagFL(); break;
        case 8: _t->testTagFD(); break;
        case 9: _t->testTagList(); break;
        case 10: _t->testTagsCreate(); break;
        case 11: _t->cleanupTestCase(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TestDcmTags::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TestDcmTags.data,
    qt_meta_data_TestDcmTags,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TestDcmTags::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestDcmTags::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestDcmTags.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TestDcmTags::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
