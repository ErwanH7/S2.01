/****************************************************************************
** Meta object code from reading C++ file 'lecteurcd.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../V0.5/lecteurcd.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lecteurcd.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN9LecteurCDE_t {};
} // unnamed namespace

template <> constexpr inline auto LecteurCD::qt_create_metaobjectdata<qt_meta_tag_ZN9LecteurCDE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "LecteurCD",
        "volumeVueChanged",
        "",
        "pVolume",
        "volumeComposantSonChanged",
        "durationComposantCelluleChanged",
        "pDuree",
        "positionComposantCelluleChanged",
        "pPosition",
        "muteComposantSonChanged",
        "pMuted",
        "lire",
        "stop",
        "pause",
        "precedent",
        "suivant",
        "debut",
        "ouvrirTiroir",
        "fermerTiroir",
        "insererCD",
        "retirerCD",
        "modeBoucle",
        "modeSequentiel",
        "modeAleatoire",
        "activerSon",
        "desactiverSon",
        "majVolume",
        "peuplerCD"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'volumeVueChanged'
        QtMocHelpers::SignalData<void(float)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Float, 3 },
        }}),
        // Signal 'volumeComposantSonChanged'
        QtMocHelpers::SignalData<void(int)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Signal 'durationComposantCelluleChanged'
        QtMocHelpers::SignalData<void(int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
        // Signal 'positionComposantCelluleChanged'
        QtMocHelpers::SignalData<void(int)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 8 },
        }}),
        // Signal 'muteComposantSonChanged'
        QtMocHelpers::SignalData<void(bool)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 10 },
        }}),
        // Slot 'lire'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'stop'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'pause'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'precedent'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'suivant'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'debut'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'ouvrirTiroir'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'fermerTiroir'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'insererCD'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'retirerCD'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'modeBoucle'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'modeSequentiel'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'modeAleatoire'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'activerSon'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'desactiverSon'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'majVolume'
        QtMocHelpers::SlotData<void(int)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Slot 'peuplerCD'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<LecteurCD, qt_meta_tag_ZN9LecteurCDE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject LecteurCD::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9LecteurCDE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9LecteurCDE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9LecteurCDE_t>.metaTypes,
    nullptr
} };

void LecteurCD::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<LecteurCD *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->volumeVueChanged((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 1: _t->volumeComposantSonChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->durationComposantCelluleChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->positionComposantCelluleChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->muteComposantSonChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->lire(); break;
        case 6: _t->stop(); break;
        case 7: _t->pause(); break;
        case 8: _t->precedent(); break;
        case 9: _t->suivant(); break;
        case 10: _t->debut(); break;
        case 11: _t->ouvrirTiroir(); break;
        case 12: _t->fermerTiroir(); break;
        case 13: _t->insererCD(); break;
        case 14: _t->retirerCD(); break;
        case 15: _t->modeBoucle(); break;
        case 16: _t->modeSequentiel(); break;
        case 17: _t->modeAleatoire(); break;
        case 18: _t->activerSon(); break;
        case 19: _t->desactiverSon(); break;
        case 20: _t->majVolume((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 21: _t->peuplerCD(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (LecteurCD::*)(float )>(_a, &LecteurCD::volumeVueChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (LecteurCD::*)(int )>(_a, &LecteurCD::volumeComposantSonChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (LecteurCD::*)(int )>(_a, &LecteurCD::durationComposantCelluleChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (LecteurCD::*)(int )>(_a, &LecteurCD::positionComposantCelluleChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (LecteurCD::*)(bool )>(_a, &LecteurCD::muteComposantSonChanged, 4))
            return;
    }
}

const QMetaObject *LecteurCD::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LecteurCD::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9LecteurCDE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LecteurCD::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void LecteurCD::volumeVueChanged(float _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void LecteurCD::volumeComposantSonChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void LecteurCD::durationComposantCelluleChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void LecteurCD::positionComposantCelluleChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void LecteurCD::muteComposantSonChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}
QT_WARNING_POP
