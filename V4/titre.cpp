/**************************************************************************
 * PROGRAMME : titre
 * BUT : Représenter un titre audio individuel sur un CD
 *       Contient les métadonnées du morceau (nom, durée, chemin du fichier)
 *       Utilisé pour la lecture et la navigation dans le CD
 * VERSION : V4
 * AUTEUR : Hoarau, Lalanne, Supervie
 * DATE : 14/04/2025
 * REMARQUES :
 *             néant
***************************************************************************/
#include "titre.h"
#include <QDebug>

Titre::Titre() {}

Titre::Titre(const string& pIntitule, unsigned short int pDuree, const string& pUrl)
    : intitule(pIntitule), duree(pDuree), url(pUrl){}

Titre::~Titre()
{ qDebug() << "Destruction du titre " << Qt::endl;}

// getters
//------------------------------
string Titre::getIntitule()
{
    return intitule;
}

unsigned short Titre::getDuree()
{
    return duree;
}

string Titre::getUrl()
{
    return url;
}

// setters
//------------------------------
void Titre::setIntitule(const string &pIntitule)
{
    intitule = pIntitule;
}

void Titre::setDuree(unsigned short pDuree)
{
    duree = pDuree;
}

void Titre::setUrl(const string &pUrl)
{
    url = pUrl;
}
