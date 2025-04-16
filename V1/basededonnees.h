#ifndef BASEDEDONNEES_H
#define BASEDEDONNEES_H

#include <QString>
#include <QList>
#include "CD.h"

class BaseDeDonnees {
private:
    QList<CD*> listeCD;

public:
    BaseDeDonnees();
    ~BaseDeDonnees();

    void chargerListeCD();
    QList<CD*> getListeCD() const;
    void ajouterCD(CD* cd);
};

#endif // BASEDEDONNEES_H
