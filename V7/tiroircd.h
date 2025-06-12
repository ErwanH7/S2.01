#ifndef TIROIRCD_H
#define TIROIRCD_H

#include <QObject>
#include "cd.h"
class LecteurCD;
class TiroirCD : public QObject
{
    Q_OBJECT
public:
    enum UnEtatOuverture {FERME, OUVERT};
    enum UnEtatOccupation {VIDE, OCCUPE};
    explicit TiroirCD(LecteurCD *pLecteur=nullptr, QObject *parent = nullptr);
    virtual ~TiroirCD();

    // getters
    UnEtatOuverture getEtatOuverture();
    UnEtatOccupation getEtatOccupation();
    /* répond en fonction du contenu de l'attribut leCD :
       VIDE si leCD = nullptr, OCCUPE sinon */
    LecteurCD* getLeLecteurCD();
    Cd* getLeCD();

    // setters
    void ouvrirTiroir ();
        // etatOuverture devient OUVERT
    void fermerTiroir ();
        // tiroir devient FERME
    void insererCD(Cd *pCD);
        // met à jour leCD et getEtatOccupation() retourne OCCUPE
    void retirerCD();
        // met à jour leCD (nullptr) et getEtatOccupation() retourne VIDE
    void setLeLecteurCD (LecteurCD *pLecteur)  ;


private:
    Cd *leCD;                           /* pointeur sur l'objet CD éventuellement présenta dans le tiroir
                                        // implémente la relation CD-TiroirCD */
    UnEtatOuverture etatOuverture;      // OUVERT ou FERME
    LecteurCD *leLecteurCD;             /* pointeur vers le composé LecteurCD afin de lui transmettre des informations
                                        // implémente la relation TiroirCD-->LecteurCD */
};

#endif // TIROIRCD_H
