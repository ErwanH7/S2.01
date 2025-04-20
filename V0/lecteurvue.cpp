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
    connect(ui->barreTempEcoule, SIGNAL(valueChanged(int)), this, SLOT(bar_time()));
    connect(ui->barreVolume, SIGNAL(valueChanged(int)), this, SLOT(bar_volume(int)));
}

LecteurVue::~LecteurVue()
{
    delete ui;
}


void LecteurVue::bouton_pred()
{
    qDebug() << "je retourne en arrière" << Qt::endl;
}

void LecteurVue::bouton_replay()
{
    qDebug() << "je recommence" << Qt::endl;
}

void LecteurVue::bouton_play(bool b)
{
   if(b)
    {
        qDebug() << "je suis en lecture" << Qt::endl;
    }
    else
    {
        qDebug() << "je suis en pause" << Qt::endl;
    }
}

void LecteurVue::bouton_stop()
{
    qDebug() << "j'ai fini" << Qt::endl;
}

void LecteurVue::bouton_suiv()
{
    qDebug() << "je passe au suivant" << Qt::endl;
}

void LecteurVue::bouton_open(bool b)
{
    if(b)
    {
        qDebug() << "je suis ouvert" << Qt::endl;
    }
    else
    {
        qDebug() << "je suis fermé" << Qt::endl;
    }
}

void LecteurVue::bouton_autoMode(bool b)
{
    if(b)
    {
        qDebug() << "je suis en auto" << Qt::endl;
    }
    else
    {
        qDebug() << "je ne suis pas en auto" << Qt::endl;
    }
}

void LecteurVue::bouton_inserer()
{
    qDebug() << "j'insère" << Qt::endl;
}

void LecteurVue::bouton_retirer()
{
    qDebug() << "je retire" << Qt::endl;
}

void LecteurVue::bar_time()
{
    qDebug() << "j'avance" << Qt::endl;
}

void LecteurVue::bar_volume(int value)
{
    qDebug() << "son : " << value << Qt::endl;
}
