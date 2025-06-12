#ifndef CD_H
#define CD_H

#include <string>
using namespace std;
#include "declarationsCommunes.h"
#include "titre.h"

class Cd
{
public:
    Cd ();
    ~Cd();

    // getters
    string getIntitule();
    string getPochette();
    unsigned int getNbTitres();
    unsigned int getDuree();
    string getGenre();
    Titre getTitre (unsigned int pIndice);
    // Retourne le titre situé au rang pIndice (qui démarre à 0)
    Titre* getTitres(); // retourne l'ensemble des titres du CD

    // setters
    void setIntitule (const string& pIntitule);
    void setPochette(const string& pPochette);
    void setNbTitres (unsigned int pNbTitres) ;
    void setDuree (unsigned int pDuree);
    void setGenre(const string& pGenre);

    // pour peupler/dépeupler le CD qui sera lu par le lecteur
    void ajouterTitre (const string& pIntitule, unsigned int pDuree, const string& pUrl);
    /* ajoute un titre à la liste des titres du CD
       et met à jour nbTitres
        */
    void enleverTitre (unsigned int pIndice);
    /* enlève le titre situé à l'indice pIndice
       et met à jour nbTitres
        */

private:
    string intitule ;             // intitulé du CD
    string pochette ;             // url vers photo de la pochette
    string genre;                 // genre musical
    unsigned int nbTitres = 0;    // nbre de titres = morceaux musicaux contenus dans le CD
    unsigned int duree ;        // durée totale du CD, en secondes
    Titre titres[NB_MAX_TITRES];   // l'ensemble des titres composants le CD : un tableau de titres
};

#endif // CD_H

