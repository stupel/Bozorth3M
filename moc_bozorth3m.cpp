/****************************************************************************
** Meta object code from reading C++ file 'bozorth3m.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "bozorth3m.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bozorth3m.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BozorthMultiThreadManager_t {
    QByteArrayData data[9];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BozorthMultiThreadManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BozorthMultiThreadManager_t qt_meta_stringdata_BozorthMultiThreadManager = {
    {
QT_MOC_LITERAL(0, 0, 25), // "BozorthMultiThreadManager"
QT_MOC_LITERAL(1, 26, 22), // "bozorthThreadsFinished"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 11), // "stateSignal"
QT_MOC_LITERAL(4, 62, 5), // "state"
QT_MOC_LITERAL(5, 68, 24), // "OneBozorthThreadFinished"
QT_MOC_LITERAL(6, 93, 17), // "FINGERPRINT_PAIRS"
QT_MOC_LITERAL(7, 111, 2), // "fp"
QT_MOC_LITERAL(8, 114, 9) // "stateSlot"

    },
    "BozorthMultiThreadManager\0"
    "bozorthThreadsFinished\0\0stateSignal\0"
    "state\0OneBozorthThreadFinished\0"
    "FINGERPRINT_PAIRS\0fp\0stateSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BozorthMultiThreadManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       3,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   40,    2, 0x0a /* Public */,
       8,    1,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void BozorthMultiThreadManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BozorthMultiThreadManager *_t = static_cast<BozorthMultiThreadManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->bozorthThreadsFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->stateSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->OneBozorthThreadFinished((*reinterpret_cast< FINGERPRINT_PAIRS(*)>(_a[1]))); break;
        case 3: _t->stateSlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FINGERPRINT_PAIRS >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (BozorthMultiThreadManager::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BozorthMultiThreadManager::bozorthThreadsFinished)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BozorthMultiThreadManager::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BozorthMultiThreadManager::stateSignal)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BozorthMultiThreadManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BozorthMultiThreadManager.data,
      qt_meta_data_BozorthMultiThreadManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BozorthMultiThreadManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BozorthMultiThreadManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BozorthMultiThreadManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BozorthMultiThreadManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void BozorthMultiThreadManager::bozorthThreadsFinished(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BozorthMultiThreadManager::stateSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_BozorthThread_t {
    QByteArrayData data[9];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BozorthThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BozorthThread_t qt_meta_stringdata_BozorthThread = {
    {
QT_MOC_LITERAL(0, 0, 13), // "BozorthThread"
QT_MOC_LITERAL(1, 14, 11), // "matchSignal"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 18), // "matchingDoneSignal"
QT_MOC_LITERAL(4, 46, 17), // "FINGERPRINT_PAIRS"
QT_MOC_LITERAL(5, 64, 11), // "stateSignal"
QT_MOC_LITERAL(6, 76, 5), // "state"
QT_MOC_LITERAL(7, 82, 9), // "matchSlot"
QT_MOC_LITERAL(8, 92, 16) // "matchingDoneSlot"

    },
    "BozorthThread\0matchSignal\0\0"
    "matchingDoneSignal\0FINGERPRINT_PAIRS\0"
    "stateSignal\0state\0matchSlot\0"
    "matchingDoneSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BozorthThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    1,   40,    2, 0x06 /* Public */,
       5,    1,   43,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   46,    2, 0x0a /* Public */,
       8,    1,   47,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::Int,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,

       0        // eod
};

void BozorthThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BozorthThread *_t = static_cast<BozorthThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->matchSignal(); break;
        case 1: _t->matchingDoneSignal((*reinterpret_cast< FINGERPRINT_PAIRS(*)>(_a[1]))); break;
        case 2: _t->stateSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->matchSlot(); break;
        case 4: _t->matchingDoneSlot((*reinterpret_cast< FINGERPRINT_PAIRS(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FINGERPRINT_PAIRS >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FINGERPRINT_PAIRS >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (BozorthThread::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BozorthThread::matchSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BozorthThread::*_t)(FINGERPRINT_PAIRS );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BozorthThread::matchingDoneSignal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (BozorthThread::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BozorthThread::stateSignal)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BozorthThread::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BozorthThread.data,
      qt_meta_data_BozorthThread,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BozorthThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BozorthThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BozorthThread.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BozorthThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void BozorthThread::matchSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void BozorthThread::matchingDoneSignal(FINGERPRINT_PAIRS _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BozorthThread::stateSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
