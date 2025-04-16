#ifndef LECTEURVUE_H
#define LECTEURVUE_H
#include <QString>

#include <QMainWindow>

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



private:
    Ui::LecteurVue *ui;
    void mettreAJourBoutonsLecture(); //méthode privé d'aide pour l'activation et la désactivation des boutons


public slots:
    void bouton_pred();
    void bouton_replay();
    void bouton_play(bool);
    void bouton_stop();
    void bouton_suiv();
    void bouton_open(bool);
    void bouton_autoMode(bool);
    void bouton_inserer();
    void bouton_retirer();


    void bar_time();
    void bar_volume(int);

};
#endif // LECTEURVUE_H
