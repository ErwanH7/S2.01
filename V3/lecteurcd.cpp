/**************************************************************************
 * PROGRAMME : lecteurCd
 * BUT : Simuler le fonctionnement d’un lecteur CD audio
 *       Gestion des actions de lecture, pause, arrêt, navigation entre les titres
 *       Interactions avec un CD, un tiroir et une cellule pour gérer l’état du lecteur
 * VERSION : V3
 * AUTEUR : Hoarau, Lalanne, Supervie
 * DATE : 14/04/2025
 * REMARQUES :
 *             néant
***************************************************************************/

#include "lecteurcd.h"
#include <QDebug>



LecteurCD::LecteurCD(LecteurVue *pVue, QObject *parent)
    : QObject(parent), etat(VIDE_ARRET), mode(SEQUENTIEL), laVue(pVue)
{
    qDebug() << "[LecteurCD] Constructeur appelé";
}

LecteurCD::~LecteurCD()
{
    qDebug() << "[LecteurCD] Destructeur appelé";
}

// GETTERS

LecteurCD::UnEtatLecteur LecteurCD::getEtat()
{
    qDebug() << "[LecteurCD] getEtat() ->" << etat;
    return etat;
}

LecteurCD::UnModeLecture LecteurCD::getMode()
{
    qDebug() << "[LecteurCD] getMode() ->" << mode;
    return mode;
}

bool LecteurCD::getCDPret()
{
    bool pret = (etat != VIDE_ARRET && etat != OUVERT_ARRET);
    qDebug() << "[LecteurCD] getCDPret() ->" << (pret ? "Oui" : "Non");
    return pret;
}

// SETTERS

void LecteurCD::setEtat(LecteurCD::UnEtatLecteur pEtat)
{
    qDebug() << "[LecteurCD] setEtat() de" << etat << "à" << pEtat;
    etat = pEtat;
}

void LecteurCD::setMode(LecteurCD::UnModeLecture pMode)
{
    qDebug() << "[LecteurCD] setMode() de" << mode << "à" << pMode;
    mode = pMode;
}

// VUE

LecteurVue* LecteurCD::getVue()
{
    qDebug() << "[LecteurCD] getVue()";
    return laVue;
}

void LecteurCD::setVue(LecteurVue* pVue)
{
    qDebug() << "[LecteurCD] setVue()";
    laVue = pVue;
}

// SLOTS

void LecteurCD::lire()
{
    if (etat == CHARGE_ARRET || etat == PAUSE) {
        qDebug() << "[LecteurCD] lire() → Lecture démarrée";
        etat = LECTURE;
    } else {
        qDebug() << "[LecteurCD] lire() → Action ignorée (état non compatible)";
    }
}

void LecteurCD::stop()
{
    if (etat == LECTURE || etat == PAUSE) {
        qDebug() << "[LecteurCD] stop() → Lecture arrêtée, retour au premier titre";
        etat = CHARGE_ARRET;
    } else {
        qDebug() << "[LecteurCD] stop() → Action ignorée (état non compatible)";
    }
}

void LecteurCD::pause()
{
    if (etat == LECTURE) {
        qDebug() << "[LecteurCD] pause() → Lecture mise en pause";
        etat = PAUSE;
    } else {
        qDebug() << "[LecteurCD] pause() → Action ignorée (état non compatible)";
    }
}

void LecteurCD::precedent()
{
    if (etat == LECTURE || etat == PAUSE) {
        qDebug() << "[LecteurCD] precedent() → Titre précédent, rang =";
    } else {
        qDebug() << "[LecteurCD] precedent() → Action ignorée (début du CD ou mauvais état)";
    }
}

void LecteurCD::suivant()
{
    if (etat == LECTURE || etat == PAUSE) {
        qDebug() << "[LecteurCD] suivant() → Titre suivant, rang =";
    } else {
        qDebug() << "[LecteurCD] suivant() → Action ignorée (état non compatible)";
    }
}

void LecteurCD::debut()
{
    if (etat == LECTURE || etat == PAUSE) {
        qDebug() << "[LecteurCD] debut() → Reprise au début du titre courant";
    } else {
        qDebug() << "[LecteurCD] debut() → Action ignorée (état non compatible)";
    }
}

void LecteurCD::ouvrirTiroir()
{
    if (etat == CHARGE_ARRET || etat == VIDE_ARRET) {
        etat = OUVERT_ARRET;
        qDebug() << "[LecteurCD] ouvrirTiroir() → Tiroir ouvert";
    } else {
        qDebug() << "[LecteurCD] ouvrirTiroir() → Action ignorée (état non compatible)";
    }
}

void LecteurCD::fermerTiroir()
{
    if (etat == OUVERT_ARRET) {
        etat = CHARGE_ARRET;
        qDebug() << "[LecteurCD] fermerTiroir() → Tiroir fermé, prêt à jouer";
    } else {
        qDebug() << "[LecteurCD] fermerTiroir() → Action ignorée (état non compatible)";
    }
}

void LecteurCD::insererCD()
{
    if (etat == OUVERT_ARRET) {
        qDebug() << "[LecteurCD] insererCD() → CD inséré";
    } else {
        qDebug() << "[LecteurCD] insererCD() → Action ignorée (état non compatible)";
    }
}

void LecteurCD::retirerCD()
{
    if (etat == OUVERT_ARRET) {
        qDebug() << "[LecteurCD] retirerCD() → CD retiré";
    } else {
        qDebug() << "[LecteurCD] retirerCD() → Action ignorée (état non compatible)";
    }
}

void LecteurCD::modeBoucle()
{
    setMode(BOUCLE);
    qDebug() << "[LecteurCD] modeBoucle() → Mode lecture = BOUCLE";
}

void LecteurCD::modeSequentiel()
{
    setMode(SEQUENTIEL);
    qDebug() << "[LecteurCD] modeSequentiel() → Mode lecture = SÉQUENTIEL";
}

void LecteurCD::modeAleatoire()
{
    setMode(ALEATOIRE);
    qDebug() << "[LecteurCD] modeAleatoire() → Mode lecture = ALÉATOIRE";
}

void LecteurCD::activerSon()
{
    qDebug() << "[LecteurCD] activerSon() → Son activé";
}

void LecteurCD::desactiverSon()
{
    qDebug() << "[LecteurCD] desactiverSon() → Son désactivé";
}

void LecteurCD::majVolume(int pVolume)
{
    qDebug() << "[LecteurCD] majVolume() → Volume mis à jour :" << pVolume;
}

void LecteurCD::peuplerCD()
{
    qDebug() << "[LecteurCD] peuplerCD() → CD peuplé manuellement (simulation)";
}
