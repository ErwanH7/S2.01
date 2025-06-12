/**************************************************************************
 * PROGRAMME : cellule
 * BUT : Simuler la cellule de lecture d’un lecteur CD
 *       Active ou arrête le moteur de lecture
 *       Permet d’estimer le temps de diffusion d’un titre
 * VERSION : V5
 * AUTEUR : Hoarau, Lalanne, Supervie
 * DATE : 14/04/2025
 * REMARQUES :
 *             néant
***************************************************************************/
#include "cellule.h"
#include "lecteurcd.h"
#include <QDebug>

// Constructeur
Cellule::Cellule(LecteurCD* pLecteur, QObject *parent)
    : QObject(parent),
    player(new QMediaPlayer(this)),
    etatMoteur(ARRET),
    leLecteurCD(pLecteur)
{
    connect(player, &QMediaPlayer::positionChanged, this, &Cellule::playerPositionChanged);
    connect(player, &QMediaPlayer::durationChanged, this, &Cellule::playerDurationChanged);
}

// Destructeur
Cellule::~Cellule()
{
    if (player)
        player->stop();
}

// Getters
Cellule::UnEtatMoteur Cellule::getEtatMoteur()
{
    return etatMoteur;
}

LecteurCD* Cellule::getLecteurCD()
{
    return leLecteurCD;
}

QMediaPlayer* Cellule::getPlayer()
{
    return player;
}

// Setters
void Cellule::demarrerLecture()
{
    if (etatMoteur == ARRET) {
        etatMoteur = MARCHE;
        if (player)
            player->play();
    }
}

void Cellule::arreterLecture()
{
    if (etatMoteur == MARCHE) {
        etatMoteur = ARRET;
        if (player)
            player->pause();  // ou .stop() selon ton besoin
    }
}

void Cellule::allerADebutMedia()
{
    if (player)
        player->setPosition(0);
}

void Cellule::setLecteurCD(LecteurCD* pLecteur)
{
    leLecteurCD = pLecteur;
}

void Cellule::setPlayer(QMediaPlayer* pPlayer)
{
    if (player)
        player->deleteLater();
    player = pPlayer;
}

void Cellule::setSource(const QString& source)
{
    if (player)
        player->setSource(QUrl::fromLocalFile(source));
}

// Slots
void Cellule::playerPositionChanged(qint64 pPosition)
{
    emit positionChangedFromCellule(static_cast<int>(pPosition));

    if (player && player->duration() > 0 && pPosition >= player->duration()) {
        emit mediaFinishedFromCellule();
    }
}

void Cellule::playerDurationChanged(qint64 pDuration)
{
    emit durationChangedFromCellule(static_cast<int>(pDuration));
}


int Cellule::positionTeteDeLecture() const
{
    if (!player)
        return 0;  // si player non défini, on retourne 0

    // position() retourne la position en secondes
    return static_cast<int>(player->position() / 1000);
}
