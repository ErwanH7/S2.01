#ifndef LECTEURVUE_H
#define LECTEURVUE_H

#include <QMainWindow>
#include "lecteurcd.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class LecteurVue;
}
QT_END_NAMESPACE

class LecteurVue : public QMainWindow
{
    Q_OBJECT

public:
    LecteurVue(QWidget *parent = nullptr);
    ~LecteurVue();
    void setLecteurCD(LecteurCD *lecteur); //méthode pour utiliser le lecteurCd

private:
    Ui::LecteurVue *ui;
    LecteurCD *lecteur; //pointeur vers le modèle

public slots:
    void bouton_pred();
    void bouton_replay();
    void bouton_play(bool);
    void bouton_stop();
    void bouton_suiv();
    void bouton_open(bool);
    void bouton_boucle();
    void bouton_sequentiel();
    void bouton_aleatoire();
    void bouton_inserer();
    void bouton_retirer();
    void bouton_volume();


    void bar_time();
    void bar_volume(int);

};
#endif // LECTEURVUE_H
