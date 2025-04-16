#ifndef LECTEURCD_H
#define LECTEURCD_H
#include <QString>
#include "CD.h"
#include "Cellule.h"
#include "TiroirCD.h"

class LecteurCD {
private:
    CD* cdActuel;
    bool enLecture;
    bool enPause;
    int volume;
    bool modeAuto;
    Cellule* cellule;
    TiroirCD* tiroir;
    int titreEnCours;

public:
    LecteurCD();
    ~LecteurCD();

    void insererCD(CD* cd);
    void ejecterCD();
    void demarrerLecture();
    void mettreEnPause();
    void arreterLecture();
    void suivant();
    void precedent();
    void reglerVolume(int v);
    void activerModeAuto();
    void desactiverModeAuto();
    void relancerTitre();
    void changerMode();
    CD* getCD() const;
    int getTitreEnCours() const;
};

#endif // LECTEURCD_H
