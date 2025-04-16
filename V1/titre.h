#ifndef TITRE_H
#define TITRE_H

#include <QString>

class Titre {
private:
    QString nom;
    int duree;
    QString cheminSon;

public:
    Titre();
    ~Titre();

    QString getNom() const;
    int getDuree() const;
    QString getCheminSon() const;
};


#endif // TITRE_H
