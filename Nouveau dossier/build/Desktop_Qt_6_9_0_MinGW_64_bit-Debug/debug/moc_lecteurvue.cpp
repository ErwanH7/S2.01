/****************************************************************************
** Meta object code from reading C++ file 'lecteurvue.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../V7/lecteurvue.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lecteurvue.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10LecteurVueE_t {};
} // unnamed namespace

template <> constexpr inline auto LecteurVue::qt_create_metaobjectdata<qt_meta_tag_ZN10LecteurVueE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "LecteurVue",
        "bouton_pred",
        "",
        "bouton_replay",
        "bouton_play",
        "bouton_stop",
        "bouton_suiv",
        "bouton_open",
        "bouton_boucle",
        "bouton_sequentiel",
        "bouton_aleatoire",
        "bouton_inserer",
        "bouton_retirer",
        "bouton_volume",
        "bar_time",
        "bar_volume"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'bouton_pred'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'bouton_replay'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'bouton_play'
        QtMocHelpers::SlotData<void(bool)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'bouton_stop'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'bouton_suiv'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'bouton_open'
        QtMocHelpers::SlotData<void(bool)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'bouton_boucle'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'bouton_sequentiel'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'bouton_aleatoire'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'bouton_inserer'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'bouton_retirer'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'bouton_volume'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'bar_time'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'bar_volume'
        QtMocHelpers::SlotData<void(int)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<LecteurVue, qt_meta_tag_ZN10LecteurVueE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject LecteurVue::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10LecteurVueE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10LecteurVueE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10LecteurVueE_t>.metaTypes,
    nullptr
} };

void LecteurVue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<LecteurVue *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->bouton_pred(); break;
        case 1: _t->bouton_replay(); break;
        case 2: _t->bouton_play((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->bouton_stop(); break;
        case 4: _t->bouton_suiv(); break;
        case 5: _t->bouton_open((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->bouton_boucle(); break;
        case 7: _t->bouton_sequentiel(); break;
        case 8: _t->bouton_aleatoire(); break;
        case 9: _t->bouton_inserer(); break;
        case 10: _t->bouton_retirer(); break;
        case 11: _t->bouton_volume(); break;
        case 12: _t->bar_time(); break;
        case 13: _t->bar_volume((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *LecteurVue::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LecteurVue::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10LecteurVueE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int LecteurVue::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
