/**************************************************************************
 * PROGRAMME : lecteurCd
 * BUT : Simuler le fonctionnement d’un lecteur CD audio
 *       Gestion des actions de lecture, pause, arrêt, navigation entre les titres
 *       Interactions avec un CD, un tiroir et une cellule pour gérer l’état du lecteur
 * VERSION : V5
 * AUTEUR : Hoarau, Lalanne, Supervie
 * DATE : 14/04/2025
 * REMARQUES :
 *             néant
***************************************************************************/

#include "lecteurcd.h"
#include "lecteurvue.h"
#include "ui_lecteurvue.h"
#include <QDebug>
#include "QFileDialog"


LecteurCD::LecteurCD(LecteurVue *pVue, QObject *parent)
    : QObject(parent), leTiroirCD(this), laCellule(this), etat(VIDE_ARRET), mode(SEQUENTIEL),laVue(pVue)
{
    qDebug() << "[LecteurCD] Constructeur appelé";

    // Création et peuplement du CD
    Cd* monCD = new Cd();
    this->peuplerCD(monCD);

    // Affichage du contenu via qDebug()
    qDebug() << "CD Intitulé :" << QString::fromStdString(monCD->getIntitule());
    qDebug() << "Genre :" << QString::fromStdString(monCD->getGenre());
    qDebug() << "Nombre de titres :" << monCD->getNbTitres();

    for (unsigned int i = 0; i < monCD->getNbTitres(); ++i) {
        Titre titre = monCD->getTitre(i);
        qDebug() << "Titre" << i + 1
                 << "→" << QString::fromStdString(titre.getIntitule())
                 << "-" << titre.getDuree() << "s"
                 << "-" << QString::fromStdString(titre.getUrl());
    }
}

LecteurCD::~LecteurCD()
{
    qDebug() << "[LecteurCD] Destructeur appelé";
}

// GETTERS

LecteurCD::UnEtatLecteur LecteurCD::getEtat()
{
    qDebug() << "[LecteurCD] getEtat() ->" << etat;
    return etat;
}

LecteurCD::UnModeLecture LecteurCD::getMode()
{
    qDebug() << "[LecteurCD] getMode() ->" << mode;
    return mode;
}

bool LecteurCD::getCDPret()
{
    bool pret = (etat != VIDE_ARRET && etat != OUVERT_ARRET);
    qDebug() << "[LecteurCD] getCDPret() ->" << (pret ? "Oui" : "Non");
    return pret;
}

// SETTERS

void LecteurCD::setEtat(LecteurCD::UnEtatLecteur pEtat)
{
    qDebug() << "[LecteurCD] setEtat() de" << etat << "à" << pEtat;
    etat = pEtat;
}

void LecteurCD::setMode(LecteurCD::UnModeLecture pMode)
{
    qDebug() << "[LecteurCD] setMode() de" << mode << "à" << pMode;
    mode = pMode;
}

// VUE

LecteurVue* LecteurCD::getVue()
{
    qDebug() << "[LecteurCD] getVue()";
    return laVue;
}

void LecteurCD::setVue(LecteurVue* pVue)
{
    qDebug() << "[LecteurCD] setVue()";
    laVue = pVue;
}

// SLOTS

void LecteurCD::lire()
{
    if (etat == CHARGE_ARRET || etat == PAUSE) {
        qDebug() << "[LecteurCD] lire() → Lecture démarrée";
        etat = LECTURE;
    } else {
        qDebug() << "[LecteurCD] lire() → Action ignorée (état non compatible)";
    }
}

void LecteurCD::stop()
{
    if (etat == LECTURE || etat == PAUSE) {
        qDebug() << "[LecteurCD] stop() → Lecture arrêtée, retour au premier titre";
        etat = CHARGE_ARRET;
    } else {
        qDebug() << "[LecteurCD] stop() → Action ignorée (état non compatible)";
    }
}

void LecteurCD::pause()
{
    if (etat == LECTURE) {
        qDebug() << "[LecteurCD] pause() → Lecture mise en pause";
        etat = PAUSE;
    } else {
        qDebug() << "[LecteurCD] pause() → Action ignorée (état non compatible)";
    }
}

void LecteurCD::precedent()
{
    if (etat == LECTURE || etat == PAUSE) {
        qDebug() << "[LecteurCD] precedent() → Titre précédent, rang =";
    } else {
        qDebug() << "[LecteurCD] precedent() → Action ignorée (début du CD ou mauvais état)";
    }
}

void LecteurCD::suivant()
{
    if (etat == LECTURE || etat == PAUSE) {
        qDebug() << "[LecteurCD] suivant() → Titre suivant, rang =";
    } else {
        qDebug() << "[LecteurCD] suivant() → Action ignorée (état non compatible)";
    }
}

void LecteurCD::debut()
{
    if (etat == LECTURE || etat == PAUSE) {
        qDebug() << "[LecteurCD] debut() → Reprise au début du titre courant";
    } else {
        qDebug() << "[LecteurCD] debut() → Action ignorée (état non compatible)";
    }
}

void LecteurCD::ouvrirTiroir()
{
    switch(etat) {
    case VIDE_ARRET: {
        etat = OUVERT_ARRET;
        leTiroirCD.ouvrirTiroir();
        setEtat(etat);

        getVue()->getUi()->insererCD->setEnabled(true);
        getVue()->getUi()->retirerCD->setEnabled(true);
        getVue()->getUi()->lecturePause->setEnabled(false);
        getVue()->getUi()->boutonStop->setEnabled(false);
        getVue()->getUi()->boutonPrecedent->setEnabled(false);
        getVue()->getUi()->boutonSuivant->setEnabled(false);
        getVue()->getUi()->boutonStop->setEnabled(false);
        //getVue()->getUi()->boutonAleatoire->setEnabled(false);
        getVue()->getUi()->boutonDebut->setEnabled(false);
        getVue()->getUi()->labelCD->setText("PAS de CD");
        getVue()->getUi()->tempEcoule->setValue(0);
        getVue()->statusBar()->showMessage("OUVERT_CHARGE");

        qDebug() << "[LecteurCD] ouvrirTiroir() → Tiroir ouvert";
        break;
    }
    case CHARGE_ARRET:{
        leTiroirCD.ouvrirTiroir();
        titreEnCours = nullptr;
        rangTitreEnCours = -1;
        laCellule.setSource(nullptr);
        etat = OUVERT_ARRET;
        setEtat(etat);

        getVue()->getUi()->insererCD->setEnabled(true);
        getVue()->getUi()->retirerCD->setEnabled(true);
        getVue()->getUi()->lecturePause->setEnabled(false);
        getVue()->getUi()->boutonStop->setEnabled(false);
        getVue()->getUi()->boutonPrecedent->setEnabled(false);
        getVue()->getUi()->boutonSuivant->setEnabled(false);
        getVue()->getUi()->boutonStop->setEnabled(false);
        //getVue()->getUi()->boutonAleatoire->setEnabled(false);
        getVue()->getUi()->boutonDebut->setEnabled(false);
        getVue()->getUi()->labelCD->setText("CD RETIRÉ");
        getVue()->getUi()->tempEcoule->setValue(0);
        getVue()->statusBar()->showMessage("OUVERT_ARRET");

        qDebug() << "[LecteurCD] ouvrirTiroir() → Tiroir ouvert";
        break;
    }

    case PAUSE:{
        leTiroirCD.ouvrirTiroir();
        titreEnCours = nullptr;
        rangTitreEnCours = -1;
        laCellule.setSource(nullptr);
        etat = OUVERT_ARRET;
        setEtat(etat);

        getVue()->getUi()->insererCD->setEnabled(true);
        getVue()->getUi()->retirerCD->setEnabled(true);
        getVue()->getUi()->lecturePause->setEnabled(false);
        getVue()->getUi()->boutonStop->setEnabled(false);
        getVue()->getUi()->boutonPrecedent->setEnabled(false);
        getVue()->getUi()->boutonSuivant->setEnabled(false);
        getVue()->getUi()->boutonStop->setEnabled(false);
        //getVue()->getUi()->boutonAleatoire->setEnabled(false);
        getVue()->getUi()->boutonDebut->setEnabled(false);
        getVue()->getUi()->labelCD->setText("CD RETIRÉ");
        getVue()->getUi()->tempEcoule->setValue(0);
        getVue()->statusBar()->showMessage("OUVERT_ARRET");

        qDebug() << "[LecteurCD] ouvrirTiroir() → Tiroir ouvert";
        break;
    }

    case LECTURE:{
        laCellule.arreterLecture();
        leTiroirCD.ouvrirTiroir();
        titreEnCours = nullptr;
        rangTitreEnCours = -1;
        laCellule.setSource(nullptr);
        etat = OUVERT_ARRET;
        getVue()->statusBar()->showMessage("OUVERT_ARRET");
        setEtat(etat);
        qDebug() << "[LecteurCD] ouvrirTiroir() → Tiroir ouvert";
        break;
    }

    default:
        qDebug() << "[LecteurCD] ouvrirTiroir() → Action ignorée (état non compatible)";
        break;
    }
}

void LecteurCD::fermerTiroir()
{
    switch (etat) {
    case OUVERT_ARRET:
        leTiroirCD.fermerTiroir();
        if(leTiroirCD.getEtatOccupation() == TiroirCD::OCCUPE){
            etat = CHARGE_ARRET;
            titreEnCours = leTiroirCD.getLeCD()->getTitres();
            rangTitreEnCours = 0;
            laCellule.setSource(QString::fromStdString(titreEnCours->getUrl()));

            getVue()->getUi()->insererCD->setEnabled(false);
            getVue()->getUi()->retirerCD->setEnabled(false);
            getVue()->getUi()->lecturePause->setEnabled(true);
            getVue()->getUi()->boutonStop->setEnabled(true);
            getVue()->getUi()->boutonPrecedent->setEnabled(true);
            getVue()->getUi()->boutonSuivant->setEnabled(true);
            getVue()->getUi()->boutonStop->setEnabled(true);
            //getVue()->getUi()->boutonAleatoire->setEnabled(false);
            getVue()->getUi()->boutonDebut->setEnabled(true);
            getVue()->getUi()->labelCD->setText("CD INSÉRÉ");
            getVue()->getUi()->labelValeurRang->setText("1");

            unsigned int nbTitre = leTiroirCD.getLeCD()->getNbTitres();
            getVue()->getUi()->labelNmrRang->setText("/ " + QString::number(nbTitre));

            int minutes = leTiroirCD.getLeCD()->getDuree() / 60;
            int secondes = leTiroirCD.getLeCD()->getDuree() % 60;
            QString dureeFormatee = QString::asprintf("%02d:%02d", minutes, secondes);
            getVue()->getUi()->labelValeurDureeCD->setText(dureeFormatee);

            getVue()->getUi()->tempEcoule->setValue(0);
            getVue()->statusBar()->showMessage("CHARGE_ARRET");

            qDebug() << "[LecteurCD] fermerTiroir() → Tiroir fermé, état =" << etat;
        }
        else {
            etat = VIDE_ARRET;
            titreEnCours = nullptr;
            rangTitreEnCours = -1;

            getVue()->getUi()->labelCD->setText("CD FERMÉ (VIDE)");
            getVue()->getUi()->labelValeurDureeCD->setText("00:00");
            getVue()->getUi()->labelValeurRang->setText("--");
            getVue()->getUi()->labelNmrRang->setText("/--");
            getVue()->getUi()->tempEcoule->setValue(0);
            getVue()->statusBar()->showMessage("FERMÉ - VIDE ARRET");

            qDebug() << "[LecteurCD] fermerTiroir() → Tiroir fermé, état =" << etat;
        }
        break;
    default:
        qDebug() << "[LecteurCD] fermerTiroir() → Action ignorée (état non compatible)";
        break;
    }
}

void LecteurCD::insererCD()
{
    switch (etat) {
    case OUVERT_ARRET: {
        if (this->leTiroirCD.getEtatOccupation() == TiroirCD::VIDE)
        {
            Cd* nouveauCD = new Cd();
            this->peuplerCD(nouveauCD);
            leTiroirCD.insererCD(nouveauCD);

            getVue()->getUi()->insererCD->setEnabled(true);
            getVue()->getUi()->retirerCD->setEnabled(false);
            getVue()->getUi()->lecturePause->setEnabled(false);
            getVue()->getUi()->boutonStop->setEnabled(false);
            getVue()->getUi()->boutonPrecedent->setEnabled(false);
            getVue()->getUi()->boutonSuivant->setEnabled(false);
            getVue()->getUi()->boutonStop->setEnabled(false);
            //getVue()->getUi()->boutonAleatoire->setEnabled(false);
            getVue()->getUi()->boutonDebut->setEnabled(false);
            getVue()->getUi()->labelCD->setText("CD INSÉRÉ");
            std::string intituleCD = leTiroirCD.getLeCD()->getIntitule();
            getVue()->getUi()->labelIntitule->setText(QString::fromStdString(intituleCD));
            getVue()->getUi()->labelValeurRang->setText("1");

            unsigned int nbTitre = leTiroirCD.getLeCD()->getNbTitres();
            getVue()->getUi()->labelNmrRang->setText("/ " + QString::number(nbTitre));

            int minutes = leTiroirCD.getLeCD()->getDuree() / 60;
            int secondes = leTiroirCD.getLeCD()->getDuree() % 60;
            QString dureeFormatee = QString::asprintf("%02d:%02d", minutes, secondes);
            getVue()->getUi()->labelValeurDureeCD->setText(dureeFormatee);

            std::string genre = leTiroirCD.getLeCD()->getGenre();
            getVue()->getUi()->labelGenre->setText(QString::fromStdString(genre));

            getVue()->statusBar()->showMessage("FERME_CHARGE, CD inséré");


            //permet d'insérer l'image même si cela la déforme et prend toute la place de la frame
            std::string cheminPochette = leTiroirCD.getLeCD()->getPochette();  // retourne un std::string
            QPixmap pixmap(QString::fromStdString(cheminPochette));           // conversion en QString
            QPixmap scaledPixmap = pixmap.scaled(getVue()->getUi()->labelImage->size(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
            getVue()->getUi()->labelImage->setPixmap(scaledPixmap);

            qDebug() << "[LecteurCD] insererCD() → CD inséré";
            break;
        }
        else
        {
            qDebug() << "[LecteurCD] insererCD() → Tiroir rempli";
            break;
        }
    }
    default:
        qDebug() << "[LecteurCD] insererCD() → Action ignorée (état non compatible)";
        break;
    }
}

void LecteurCD::retirerCD()
{
    switch (etat) {
    case OUVERT_ARRET:
        if(leTiroirCD.getEtatOccupation() == TiroirCD::OCCUPE)
        {
            leTiroirCD.retirerCD();
            setEtat(etat);

            getVue()->getUi()->insererCD->setEnabled(false);
            getVue()->getUi()->retirerCD->setEnabled(true);
            getVue()->getUi()->lecturePause->setEnabled(false);
            getVue()->getUi()->boutonStop->setEnabled(false);
            getVue()->getUi()->boutonPrecedent->setEnabled(false);
            getVue()->getUi()->boutonSuivant->setEnabled(false);
            getVue()->getUi()->boutonStop->setEnabled(false);
            //getVue()->getUi()->boutonAleatoire->setEnabled(false);
            getVue()->getUi()->boutonDebut->setEnabled(false);
            getVue()->getUi()->labelCD->setText("PAS DE CD");
            getVue()->getUi()->labelIntitule->clear();
            getVue()->getUi()->labelValeurDureeCD->setText("00:00");
            getVue()->getUi()->labelValeurRang->setText("--");
            getVue()->getUi()->labelNmrRang->setText("/--");
            getVue()->getUi()->tempEcoule->setValue(0);
            getVue()->getUi()->labelGenre->clear();
            getVue()->getUi()->labelImage->clear();
            getVue()->statusBar()->showMessage("TIROIR VIDE");

            getVue()->getUi()->labelImage->clear();
            qDebug() << "[LecteurCD] retirerCD() → CD retiré";
        }
        else{
            qDebug() << "[LecteurCD] retirerCD() → Tiroir vide";
        }
        break;
    default:
        qDebug() << "[LecteurCD] retirerCD() → Action ignorée (état non compatible)";
        break;
    }
}

void LecteurCD::modeBoucle()
{
    setMode(BOUCLE);
    qDebug() << "[LecteurCD] modeBoucle() → Mode lecture = BOUCLE";
}

void LecteurCD::modeSequentiel()
{
    setMode(SEQUENTIEL);
    qDebug() << "[LecteurCD] modeSequentiel() → Mode lecture = SÉQUENTIEL";
}

void LecteurCD::modeAleatoire()
{
    setMode(ALEATOIRE);
    qDebug() << "[LecteurCD] modeAleatoire() → Mode lecture = ALÉATOIRE";
}

void LecteurCD::activerSon()
{
    qDebug() << "[LecteurCD] activerSon() → Son activé";
}

void LecteurCD::desactiverSon()
{
    qDebug() << "[LecteurCD] desactiverSon() → Son désactivé";
}

void LecteurCD::majVolume(int pVolume)
{
    qDebug() << "[LecteurCD] majVolume() → Volume mis à jour :" << pVolume;
}

void LecteurCD::peuplerCD(Cd *pCD)
{
    pCD->ajouterTitre( "monCD1- titre - 1", 155, "cd1/titre1/RossBugden-Notturno.mp3");
    pCD->ajouterTitre( "monCD1- titre - 2", 224, "cd1/titre2/LCE2C-RiversideII.MP3");
    pCD->ajouterTitre( "monCD1- titre - 3", 204, "cd1/titre3/ZeroProject-PassMeBy.mp3");
    pCD->ajouterTitre( "monCD1- titre - 4", 205, "cd1/titre4/NovaNoma-Gaia.mp3");
    pCD->setNbTitres(4);
    pCD->setDuree(788);
    pCD->setIntitule("intitule CD 1");
    pCD->setPochette(":/imageCD/CDs/cd1/pochette_cd1.jpg");
    pCD->setGenre("libre de droit");
}


//implémentation de la suite des méthodes
// getter

Cellule* LecteurCD::getLaCellule()
{
    return &laCellule;
}

TiroirCD* LecteurCD::getLeTiroirCD()
{
    return &leTiroirCD;
}

SortieSon* LecteurCD::getLaSortieSon()
{
    return laSortieSon;
}

Cd* LecteurCD::getLeCD()
{
    return leTiroirCD.getLeCD();
}

int LecteurCD::getRangTitreEnCours()
{
    return rangTitreEnCours;
}

Titre* LecteurCD::getTitreEnCours()
{
    return titreEnCours;
}

//setter
void LecteurCD::setRangEtTitreEnCours(int pRang)
{
    Cd* cd = getLeCD();
    if (cd && pRang >= 0 && pRang < (int)cd->getNbTitres()) {
        rangTitreEnCours = pRang;
        titreTemporaire = cd->getTitre(pRang);
        titreEnCours = &titreTemporaire;
    } else {
        rangTitreEnCours = -1;
        titreEnCours = nullptr;
    }
}

void LecteurCD::setTitreEnCours(Titre* pTitre)
{
    titreEnCours = pTitre;
}

void LecteurCD::setLaSortieSon(SortieSon* pHautParleur)
{
    laSortieSon = pHautParleur;
}

//slots
void LecteurCD::capterSonVolumeChanged(float pVolume)
{
    qDebug() << "[LecteurCD] capterSonVolumeChanged() → Volume =" << pVolume;
    if (laSortieSon)
        laSortieSon->setVolume(pVolume);  // Appel à la méthode du haut-parleur
    else
        qDebug() << "[LecteurCD] Avertissement : laSortieSon est null";
}

void LecteurCD::capterCelluleDurationChanged(int pDuree)
{
    qDebug() << "[LecteurCD] capterCelluleDurationChanged → " << pDuree << " s";
    if (laVue)
        laVue->getTempEcoule()->setValue(pDuree);
}

void LecteurCD::capterCellulePositionChanged(int pPosition)
{
    qDebug() << "[LecteurCD] capterCellulePositionChanged → " << pPosition << " ms";
    if (laVue)
        laVue->getTempEcoule()->setValue(pPosition);
}

void LecteurCD::capterCelluleMediaFinished()
{
    qDebug() << "[LecteurCD] capterCelluleMediaFinished() → Fin du média";

    if (mode == BOUCLE) {
        qDebug() << "Mode boucle → on recommence";
        debut();  // recommence le même titre
    } else {
        qDebug() << "Mode non boucle → piste suivante";
        suivant();  // passe au suivant selon le mode de lecture
    }
}

void LecteurCD::definirDossierMedias()
{
    qDebug() << "[LecteurCD] definirDossierMedias() → Sélection d’un dossier";

    QString repRacine = QString::fromStdString(REPERTOIRE_RACINE);
    QString dossier = QFileDialog::getExistingDirectory(nullptr,
                                                        "Choisir un dossier de médias",
                                                        repRacine);
    if (!dossier.isEmpty()) {
        laCellule.setSource(dossier);
        qDebug() << "[LecteurCD] Dossier défini :" << dossier;
    } else {
        qDebug() << "[LecteurCD] Aucun dossier sélectionné";
    }
}
