/*
 * PROGRAMME : lecteurVue
 * BUT : Gère l'ensemble du projet
 * VERSION : V5
 * AUTEUR : Hoarau, Lalanne, Supervie
 * DATE : 14/04/2025
 * REMARQUES :
 *             néant
*/


#include "lecteurvue.h"
#include "ui_lecteurvue.h"

LecteurVue::LecteurVue(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LecteurVue)
{
    ui->setupUi(this);

    //connect
    connect(ui->boutonPrecedent, SIGNAL(pressed()), this, SLOT(bouton_pred()));
    connect(ui->boutonDebut, SIGNAL(pressed()), this, SLOT(bouton_replay()));
    connect(ui->lecturePause, SIGNAL(toggled(bool)), this, SLOT(bouton_play(bool)));
    connect(ui->boutonStop, SIGNAL(pressed()), this, SLOT(bouton_stop()));
    connect(ui->boutonSuivant, SIGNAL(pressed()), this, SLOT(bouton_suiv()));
    connect(ui->ouvrirFermer, SIGNAL(toggled(bool)), this, SLOT(bouton_open(bool)));
    connect(ui->boutonBoucle, SIGNAL(pressed()), this, SLOT(bouton_boucle()));
    connect(ui->boutonSequentiel, SIGNAL(pressed()), this, SLOT(bouton_sequentiel()));
    connect(ui->boutonAleatoire, SIGNAL(pressed()), this, SLOT(bouton_aleatoire()));
    connect(ui->insererCD, SIGNAL(pressed()), this, SLOT(bouton_inserer()));
    connect(ui->retirerCD, SIGNAL(pressed()), this, SLOT(bouton_retirer()));
    connect(ui->volumeCheck, SIGNAL(toggled(bool)), this, SLOT(bouton_volume()));
    connect(ui->tempEcoule, SIGNAL(valueChanged(int)), this, SLOT(bar_time()));
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

QSlider *LecteurVue::getTempEcoule()
{
    return ui->tempEcoule;
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
    ui->lecturePause->setChecked(false);
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

void LecteurVue::bouton_sequentiel()
{
    if (lecteur) lecteur->modeSequentiel();
}

void LecteurVue::bouton_aleatoire()
{
    if (lecteur) lecteur->modeAleatoire();
}

void LecteurVue::bouton_boucle()
{
    if (lecteur) lecteur->modeBoucle();
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
