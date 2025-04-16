#ifndef CD_H
#define CD_H

#include <QString>
#include <QList>
#include "Titre.h"

class CD {
private:
    QString titre;
    QString genre;
    QString imagePochette;
    int dureeTotale;
    QList<Titre*> listeTitre;

public:
    CD();
    ~CD();

    Titre* getTitre(int index) const;
    QString getGenre() const;
    int getDureeTotal() const;
    QList<Titre*> getListeTitre() const;
};


#endif // CD_H
