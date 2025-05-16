/**************************************************************************
 * PROGRAMME : tiroirCd
 * BUT : Simuler le tiroir physique du lecteur CD
 *       Gère l’ouverture et la fermeture pour insérer/retirer un CD
 *       Informe si le tiroir est actuellement ouvert
 * VERSION : V5
 * AUTEUR : Hoarau, Lalanne, Supervie
 * DATE : 14/04/2025
 * REMARQUES :
 *             néant
***************************************************************************/
#include "lecteurCD.h"
#include "tiroirCD.h"
#include "QDebug"

TiroirCD::TiroirCD(LecteurCD *pLecteur, QObject *parent)
    : QObject{parent}, leLecteurCD(pLecteur)
{
    etatOuverture = FERME;
    leCD = nullptr;
}

TiroirCD::~TiroirCD()
{
    qDebug() << "destruction tiroirCD" << Qt::endl;
}

// getters
//------------------------------
TiroirCD::UnEtatOuverture TiroirCD::getEtatOuverture() {
    return etatOuverture;
}

TiroirCD::UnEtatOccupation TiroirCD::getEtatOccupation() {
    return ((leCD==nullptr)?VIDE:OCCUPE);
}

LecteurCD *TiroirCD::getLeLecteurCD()
{
    return leLecteurCD;
}

Cd *TiroirCD::getLeCD()
{
    return leCD;
}

// setters
//------------------------------
void TiroirCD::ouvrirTiroir() {
    etatOuverture = OUVERT;
}

void TiroirCD::fermerTiroir() {
    etatOuverture = FERME;
}

void TiroirCD::insererCD(Cd *pCD) {
    leCD = pCD;
    /*
     * Pour vérification :
    qDebug() << "TiroirCD::insererCD : on va afficher le CD inséré " << Qt::endl;
    for (unsigned int i = 0; i < leCD->getNbTitres(); i++) {
        qDebug() << leCD->getTitre(i).getUrl() << Qt::endl;
    } */
}

void TiroirCD::retirerCD() {
    delete leCD;
    leCD = nullptr;
}

void TiroirCD::setLeLecteurCD (LecteurCD *pLecteur)  {
    leLecteurCD = pLecteur;
}
