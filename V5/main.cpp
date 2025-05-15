#include "lecteurvue.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LecteurVue w;
    LecteurCD *c = new LecteurCD(&w);
    w.setLecteurCD(c); //injonction du modèle

    c->setEtat(LecteurCD::VIDE_ARRET);

    w.show();
    return a.exec();
}
