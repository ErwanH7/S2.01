/**************************************************************************
 * PROGRAMME : cd
 * BUT : Représenter un CD audio insérable dans le lecteur
 *       Contient les informations du disque (titre, genre, durée totale)
 *       Gère la liste des titres musicaux qu’il contient
 * VERSION : V4
 * AUTEUR : Hoarau, Lalanne, Supervie
 * DATE : 14/04/2025
 * REMARQUES :
 *             néant
***************************************************************************/


#include "cd.h"

Cd::Cd()
    : intitule(""),
    pochette(""),
    genre(""),
    nbTitres(0),
    duree(0)
{}

void Cd::ajouterTitre(const std::string& titre, unsigned int duree, const std::string& chemin) {

    if (nbTitres < NB_MAX_TITRES) {
        titres[nbTitres] = Titre(titre, duree, chemin);
        nbTitres++;
    }
}

void Cd::setNbTitres(unsigned int nb) {
    nbTitres = nb;
}

void Cd::setDuree(unsigned int d) {
    duree = d;
}

void Cd::setIntitule(const std::string& i) {
    intitule = i;
}

void Cd::setPochette(const std::string& p) {
    pochette = p;
}

void Cd::setGenre(const std::string& g) {
    genre = g;
}

string Cd::getIntitule() {
    return intitule;
}

string Cd::getPochette() {
    return pochette;
}

unsigned int Cd::getNbTitres() {
    return nbTitres;
}

unsigned int Cd::getDuree() {
    return duree;
}

string Cd::getGenre() {
    return genre;
}

Titre Cd::getTitre(unsigned int pIndice) {
    if (pIndice < nbTitres) {
        return titres[pIndice];
    }
    return Titre(); // retour par défaut si l’indice est invalide
}

Titre* Cd::getTitres() {
    return titres;
}
