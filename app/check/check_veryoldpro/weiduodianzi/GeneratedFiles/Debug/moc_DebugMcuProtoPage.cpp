/****************************************************************************
** Meta object code from reading C++ file 'DebugMcuProtoPage.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../DebugMcuProtoPage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DebugMcuProtoPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DebugMcuProtoPage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x08,
      41,   18,   18,   18, 0x08,
      65,   18,   18,   18, 0x08,
      91,   87,   18,   18, 0x08,
     115,  113,   18,   18, 0x08,
     146,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DebugMcuProtoPage[] = {
    "DebugMcuProtoPage\0\0on_startBtn_clicked()\0"
    "on_collectBtn_clicked()\0on_clearBtn_clicked()\0"
    "dir\0getOutTableFocus(int)\0,\0"
    "updatePressVal(QString,quint8)\0"
    "dealBulge()\0"
};

void DebugMcuProtoPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DebugMcuProtoPage *_t = static_cast<DebugMcuProtoPage *>(_o);
        switch (_id) {
        case 0: _t->on_startBtn_clicked(); break;
        case 1: _t->on_collectBtn_clicked(); break;
        case 2: _t->on_clearBtn_clicked(); break;
        case 3: _t->getOutTableFocus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->updatePressVal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 5: _t->dealBulge(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DebugMcuProtoPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DebugMcuProtoPage::staticMetaObject = {
    { &CBasePage::staticMetaObject, qt_meta_stringdata_DebugMcuProtoPage,
      qt_meta_data_DebugMcuProtoPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DebugMcuProtoPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DebugMcuProtoPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DebugMcuProtoPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DebugMcuProtoPage))
        return static_cast<void*>(const_cast< DebugMcuProtoPage*>(this));
    return CBasePage::qt_metacast(_clname);
}

int DebugMcuProtoPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CBasePage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
