/**************************************************************************
 * PROGRAMME : LecteurVue
 * BUT : Vue pour le fonctionnement d’un lecteur CD audio
 *       Gestion des actions de lecture, pause, arrêt, navigation entre les titres
 *       Interactions avec un CD, un tiroir et une cellule pour gérer l’état du lecteur
 * VERSION : V1
 * AUTEUR : Hoarau, Lalanne, Supervie
 * DATE : 14/04/2025
 * REMARQUES :
 *             néant
***************************************************************************/


#include "lecteurvue.h"
#include "ui_lecteurvue.h"
/*
#include "basededonnees.h"
#include "cd.h"
#include "lecteurcd.h"
#include "cellule.h"
#include "tiroircd.h"
#include "titre.h"
*/
#include <QDebug>

LecteurVue::LecteurVue(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LecteurVue)
{
    ui->setupUi(this);


    connect(ui->titrePrec, SIGNAL(pressed()), this, SLOT(bouton_pred()));
    connect(ui->recommencerTitre, SIGNAL(pressed()), this, SLOT(bouton_replay()));
    connect(ui->lecturePause, SIGNAL(toggled(bool)), this, SLOT(bouton_play(bool)));
    connect(ui->boutonStop, SIGNAL(pressed()), this, SLOT(bouton_stop()));
    connect(ui->titreSuivant, SIGNAL(pressed()), this, SLOT(bouton_suiv()));
    connect(ui->ouvrirFermer, SIGNAL(toggled(bool)), this, SLOT(bouton_open(bool)));
    connect(ui->radioButton, SIGNAL(toggled(bool)), this, SLOT(bouton_autoMode(bool)));
    connect(ui->insererCD, SIGNAL(pressed()), this, SLOT(bouton_inserer()));
    connect(ui->retirerCD, SIGNAL(pressed()), this, SLOT(bouton_retirer()));
    connect(ui->barreTempEcoule, SIGNAL(valueChanged(int)), this, SLOT(bar_time()));
    connect(ui->barreVolume, SIGNAL(valueChanged(int)), this, SLOT(bar_volume(int)));

    ui->etatDisque->setText("Sans CD");
    ui->insererCD->setEnabled(false);
    ui->retirerCD->setEnabled(false);
    mettreAJourBoutonsLecture();

}

LecteurVue::~LecteurVue()
{
    delete ui;
}

void LecteurVue::bouton_pred()
{
    if(!ui->ouvrirFermer->isChecked())
    {
        qDebug() << "je retourne en arrière" << Qt::endl;
    }
    else
    {
        qDebug() << "Impossible le lecteur est ouvert" << Qt::endl;
    }
}

void LecteurVue::bouton_replay()
{
    if(!ui->ouvrirFermer->isChecked())
    {
        qDebug() << "je recommence" << Qt::endl;
    }
    else
    {
        qDebug() << "Impossible le lecteur est ouvert" << Qt::endl;
    }
}

void LecteurVue::bouton_play(bool b)
{
    if(!ui->ouvrirFermer->isChecked())
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
    else
    {
        qDebug() << "Impossible le lecteur est ouvert" << Qt::endl;
    }
}

void LecteurVue::bouton_stop()
{
    if(!ui->ouvrirFermer->isChecked())
    {
        qDebug() << "j'ai fini" << Qt::endl;
        ui->lecturePause->setChecked(false);
    }
    else
    {
        qDebug() << "Impossible le lecteur est ouvert" << Qt::endl;
    }
}

void LecteurVue::bouton_suiv()
{
    if(!ui->ouvrirFermer->isChecked())
    {
        qDebug() << "je passe au suivant" << Qt::endl;
    }
    else
    {
        qDebug() << "Impossible le lecteur est ouvert" << Qt::endl;
    }
}

void LecteurVue::bouton_open(bool b)
{
    if(b)
    {
        qDebug() << "je suis ouvert" << Qt::endl;

        // Activer boutons insérer / retirer
        ui->insererCD->setEnabled(true);
        ui->retirerCD->setEnabled(true);
    }
    else
    {
        qDebug() << "je suis fermé" << Qt::endl;

        // Désactiver boutons insérer / retirer
        ui->insererCD->setEnabled(false);
        ui->retirerCD->setEnabled(false);
    }

    mettreAJourBoutonsLecture();
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
    if(ui->ouvrirFermer->isChecked())
    {
        if (ui->etatDisque->text() != "CD inséré")
        {
            qDebug() << "j'insère" << Qt::endl;
            ui->etatDisque->setText("CD inséré");

            ui->insererCD->setEnabled(false);
            ui->retirerCD->setEnabled(true);
            mettreAJourBoutonsLecture();
        }
        else
        {
            qDebug() << "CD déjà présent" << Qt::endl;
        }
    }
    else
    {
        qDebug() << "Impossible le lecteur est fermé" << Qt::endl;
    }
}

void LecteurVue::bouton_retirer()
{
    if(ui->ouvrirFermer->isChecked())
    {
        if (ui->etatDisque->text() == "CD inséré")
        {
            qDebug() << "je retire" << Qt::endl;
            ui->etatDisque->setText("Sans CD");

            ui->insererCD->setEnabled(true);
            ui->retirerCD->setEnabled(false);
            mettreAJourBoutonsLecture();
        }
        else
        {
            qDebug() << "Aucun CD à retirer" << Qt::endl;
        }
    }
    else
    {
        qDebug() << "Impossible le lecteur est fermé" << Qt::endl;
    }
}

void LecteurVue::bar_time()
{
    qDebug() << "j'avance" << Qt::endl;
}

void LecteurVue::bar_volume(int value)
{
    qDebug() << "son : " << value << Qt::endl;
}



void LecteurVue::mettreAJourBoutonsLecture()
{
    bool cdPresent = ui->etatDisque->text() == "CD inséré";
    bool tiroirFerme = !ui->ouvrirFermer->isChecked();

    bool actif = cdPresent && tiroirFerme;

    ui->lecturePause->setEnabled(actif);
    ui->titreSuivant->setEnabled(actif);
    ui->titrePrec->setEnabled(actif);
    ui->recommencerTitre->setEnabled(actif);
    ui->boutonStop->setEnabled(actif);
    ui->radioButton->setEnabled(actif);
}
