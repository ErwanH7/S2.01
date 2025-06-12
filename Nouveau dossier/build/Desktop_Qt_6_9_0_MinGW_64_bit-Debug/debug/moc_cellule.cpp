/****************************************************************************
** Meta object code from reading C++ file 'cellule.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../V7/cellule.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cellule.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN7CelluleE_t {};
} // unnamed namespace

template <> constexpr inline auto Cellule::qt_create_metaobjectdata<qt_meta_tag_ZN7CelluleE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Cellule",
        "durationChangedFromCellule",
        "",
        "positionChangedFromCellule",
        "mediaFinishedFromCellule",
        "playerPositionChanged",
        "pPosition",
        "playerDurationChanged",
        "pDuration"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'durationChangedFromCellule'
        QtMocHelpers::SignalData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Signal 'positionChangedFromCellule'
        QtMocHelpers::SignalData<void(int)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Signal 'mediaFinishedFromCellule'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'playerPositionChanged'
        QtMocHelpers::SlotData<void(qint64)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::LongLong, 6 },
        }}),
        // Slot 'playerDurationChanged'
        QtMocHelpers::SlotData<void(qint64)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::LongLong, 8 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Cellule, qt_meta_tag_ZN7CelluleE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Cellule::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7CelluleE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7CelluleE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7CelluleE_t>.metaTypes,
    nullptr
} };

void Cellule::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Cellule *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->durationChangedFromCellule((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->positionChangedFromCellule((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->mediaFinishedFromCellule(); break;
        case 3: _t->playerPositionChanged((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 4: _t->playerDurationChanged((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Cellule::*)(int )>(_a, &Cellule::durationChangedFromCellule, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Cellule::*)(int )>(_a, &Cellule::positionChangedFromCellule, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Cellule::*)()>(_a, &Cellule::mediaFinishedFromCellule, 2))
            return;
    }
}

const QMetaObject *Cellule::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellule::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7CelluleE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Cellule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Cellule::durationChangedFromCellule(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void Cellule::positionChangedFromCellule(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void Cellule::mediaFinishedFromCellule()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
