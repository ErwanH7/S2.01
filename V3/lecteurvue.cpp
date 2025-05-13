/*



*/


#include "lecteurvue.h"
#include "ui_lecteurvue.h"

LecteurVue::LecteurVue(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LecteurVue)
{
    ui->setupUi(this);

    //connect
    connect(ui->titrePrec, SIGNAL(pressed()), this, SLOT(bouton_pred()));
    connect(ui->recommencerTitre, SIGNAL(pressed()), this, SLOT(bouton_replay()));
    connect(ui->lecturePause, SIGNAL(toggled(bool)), this, SLOT(bouton_play(bool)));
    connect(ui->boutonStop, SIGNAL(pressed()), this, SLOT(bouton_stop()));
    connect(ui->titreSuivant, SIGNAL(pressed()), this, SLOT(bouton_suiv()));
    connect(ui->ouvrirFermer, SIGNAL(toggled(bool)), this, SLOT(bouton_open(bool)));
    connect(ui->autoButton, SIGNAL(toggled(bool)), this, SLOT(bouton_autoMode(bool)));
    connect(ui->insererCD, SIGNAL(pressed()), this, SLOT(bouton_inserer()));
    connect(ui->retirerCD, SIGNAL(pressed()), this, SLOT(bouton_retirer()));
    connect(ui->volumeCheck, SIGNAL(toggled(bool)), this, SLOT(bouton_volume()));
    connect(ui->barreTempEcoule, SIGNAL(valueChanged(int)), this, SLOT(bar_time()));
    connect(ui->barreVolume, SIGNAL(valueChanged(int)), this, SLOT(bar_volume(int)));

}

LecteurVue::~LecteurVue()
{
    delete ui;
}

void LecteurVue::setLecteurCD(LecteurCD *lecteur)
{
    this->lecteur = lecteur;
}


void LecteurVue::bouton_pred()
{
    if (lecteur) lecteur->precedent(); //le if (lecteur) permet une vérification de sécurité
}

void LecteurVue::bouton_replay()
{
    if (lecteur) lecteur->debut();
}

void LecteurVue::bouton_play(bool b)
{
   if(b)
    {
        if (lecteur) lecteur->lire();
    }
    else
    {
       if (lecteur) lecteur->pause();
    }
}

void LecteurVue::bouton_stop()
{
    if (lecteur) lecteur->stop();
}

void LecteurVue::bouton_suiv()
{
    if (lecteur) lecteur->suivant();
}

void LecteurVue::bouton_open(bool b)
{
    if(b)
    {
        if (lecteur) lecteur->ouvrirTiroir();
    }
    else
    {
        if (lecteur) lecteur->fermerTiroir();
    }
}

void LecteurVue::bouton_autoMode(bool b)
{
    if(b)
    {
        if (lecteur) lecteur->modeBoucle();
    }
    else
    {
        if (lecteur) lecteur->modeSequentiel();
    }
}

void LecteurVue::bouton_inserer()
{
    if (lecteur) lecteur->insererCD();
}

void LecteurVue::bouton_retirer()
{
    if (lecteur) lecteur->retirerCD();
}

void LecteurVue::bouton_volume()
{
    if(ui->volumeCheck->isChecked())
    {
        if (lecteur) lecteur->desactiverSon();
    }
    else
    {
        if (lecteur) lecteur->activerSon();
    }
}

void LecteurVue::bar_time()
{
    qDebug() << "j'avance" << Qt::endl;
}

void LecteurVue::bar_volume(int value)
{
    if (lecteur) lecteur->majVolume(value);
}
