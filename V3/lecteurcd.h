#ifndef LECTEURCD_H
#define LECTEURCD_H

#include <QObject>
//#include "cellule.h"
//#include "cd.h"
//#include "tiroirCD.h"
//#include <QMediaPlayer>
//#include "sortieson.h"

class LecteurVue;
class LecteurCD : public QObject
{
    Q_OBJECT
public:
    enum UnEtatLecteur { VIDE_ARRET,         // tiroir FERME et VIDE, Moteur ARRET
                         OUVERT_ARRET,       // tiroir OUVERT, (VIDE ou CHARGé), moteur ARRET
                         CHARGE_ARRET,       // tiroir FERMé et CHARGé, moteur ARRET, rangTitreCourant=1 (tpsDiffusion=0)
                         PAUSE,              // tiroir FERMé et CHARGé, moteur ARRET, rangTitreCourant>=1, tpsDiffusion>0
                         LECTURE };          // =FERME_CHARGE_MARCHE : tiroir FERMé et CHARGé, moteur MERCHE, rangTitreCourant>=1, tpsDiffusion>0

    enum UnModeLecture { SEQUENTIEL,
                         BOUCLE,
                         ALEATOIRE
    };

    explicit LecteurCD(LecteurVue* pVue, QObject *parent = nullptr);
    virtual ~LecteurCD();

    /* ---------
     * Getters & Setters*
     * ------------------------------------*/
    // getters
    LecteurCD::UnEtatLecteur getEtat();
        // retourne l'état du lecteur : ARRET_SANS_CD, TIROIR_OUVERT, ....
    LecteurCD::UnModeLecture getMode();
        // retourne le mode de lecture
    //Cellule* getLaCellule();
    //TiroirCD* getLeTiroirCD();
    //SortieSon* getLaSortieSon();
    //Cd* getLeCD();
    /* retourne un pointeur sur le cd en cours si leTiroirCD.si presenceCD = vrai ,
                sinon retourne nullptr */

    //int getRangTitreEnCours();
        // le rang, dans leCD, du titre en cours (démarre à 0), ou PAS_DE_TITRE si pas de CD en cours
    //Titre* getTitreEnCours();
        // retourne le titre en cours ou nullptr
    bool getCDPret();
        // retourne VRAI un CD est insérér ET le tiroir fermé
        // retourne FAUX sinon

    // setters
    void setEtat (LecteurCD::UnEtatLecteur pEtat);
        // positionne l'état du lecteur
    void setMode(LecteurCD::UnModeLecture pMode);
    //void setRangEtTitreEnCours (int pRang);
        // à partir du paramètre pRang, met à jour les 2 attributs décrivant le titre courant :
        // sa position dans la liste des titres du CD (rangTitreEnCours) et son titre (titreEnCours)
    //void setTitreEnCours(Titre* pTitre);
    //void setLaSortieSon(SortieSon* pHautParleur);


    /* ---------
     * Lien avec la vue *
     * ------------------------------------------------*/
    LecteurVue* getVue();
    void setVue(LecteurVue* pVue);


public slots:

    /* ------------
     * activés par des signals de l'interface (= manipulation de l'utilisateur)
     * ------------------------------------------------------------------------*/

    void lire ();
    /* Si le Lecteur est en PAUSE ou ARRET_CHARGE :
             *    Démarre la lecture du titre courant.
                  Le lecteur passe à l'état ARRET_CHARGE.
                  Le tiroir reste fermé.
               Dans les autres cas, ne fait rien.
            */
    void stop ();
    /* Si le Lecteur est en LECTURE ou PAUSE :
             *    Arrête la lecture du titre courant.
                  Le lecteur passe à l'état ARRET_CHARGE.
                  Le premier titre du CD devient le tittre en cours.
                  Le tiroir reste fermé.
               Dans les autres cas, ne fait rien.
            */
    void pause();
    /* Si le Lecteur est en LECTURE :
             *    Arrête la lecture du titre courant.
                  Le lecteur passe à l'état PAUSE.
                  Le titre courant ne change pas.
                  Le tiroir reste fermé.
               Dans les autres cas, ne fait rien.
            */
    void precedent();
    /* Si le Lecteur est en LECTURE ou en PAUSE :
             *    Le lecteur ne change pas d'état.
                  Le titre précédent le titre courant devient le titre courant.
                  La cellule se positionne en début de titre courant.
                  Le tiroir reste fermé.
               Dans les autres cas, ne fait rien.
            */
    void suivant();
    /* Si le Lecteur est en LECTURE ou en PAUSE :
             *    Le lecteur ne change pas d'état.
                  Le titre suivant le titre courant devient le titre courant.
                  La cellule se positionne en début de titre courant.
                  Le tiroir reste fermé.
               Dans les autres cas, ne fait rien.
            */
    void debut();
    /* Si le Lecteur est en LECTURE ou en PAUSE :
             *    Le lecteur ne change pas d'état.
                  Le titre courant ne change pas.
                  La cellule se positionne en début de titre courant.
                  Le tiroir reste fermé.
               Dans les autres cas, ne fait rien.
            */

    void ouvrirTiroir();
    /* Ouvre le tiroir.
     * S'il y a un CD dans le tiroir, le titre courant est perdu,
       mais le tiroir garde le lien avec le CD pour afficher ses infos (intitulé, pochette, nbTitres, duréeTotale) */

    void fermerTiroir();
    /* Ferme le tiroir.
     * S'il y avait un CD dans le tiroir ouvert, positionne la cellule sur son premie titre */

    void insererCD();
    /* insère le CD prêt à être insérer si le tiroir est OUVERT et VIDE;
     * le tiroir devient alors OCCUPE
     * dans les autres cas ne fait rien. */

    void retirerCD();
    /* retire le CD en cours le tiroir est OUVERT et OCCUPE;
     * le tiroir devient alors VIDE
     * dans les autres cas ne fait rien.
     * NON IMPLEMENTé    */

    // activés par les widgets permettant à l'utilisateur de choisir le mode de lecture
    void modeBoucle();
    void modeSequentiel();
    void modeAleatoire();

    // activés par les widgets permettant à l'utilisateur de gérer le son
    void activerSon();
    void desactiverSon();
    void majVolume(int pVolume);

    // nécessaire pour cette version sans Base de Donnée.
    // Permet de peupler le CD à insérer dans le lecteurCD
    void peuplerCD();


    /* -----------
     * déclenchés par des signals des composants
     * -----------------------------------------*/
    //void capterSonVolumeChanged (float pVolume);
    //void capterCelluleDurationChanged(int pDuree);
    //void capterCellulePositionChanged(int pProgression);
    //pour mettre à jour la vue et éventuellement passer au suivant
    //void capterCelluleMediaFinished();

    /* -----------
     * déclenchés par des QAction
     * -----------------------------------------*/
    //void definirDossierMedias();

signals:
    // En direction de la vue
    void volumeVueChanged(float pVolume);
    void volumeComposantSonChanged(int pVolume);
    void durationComposantCelluleChanged(int pDuree);
    void positionComposantCelluleChanged(int pPosition);
    void muteComposantSonChanged(bool pMuted);

    /* -----------
     * Attributs de LecteurCD
     * -----------------------------*/
public:
    //TiroirCD leTiroirCD;        // composant du lecteur.
        // Il est considéré  directement accessible par l'utilisateur

private:
    //Cellule laCellule;          // composant du lecteur non directement accessible par l'utilisateur
    //SortieSon laSortieSon;      // composant du lecteur non directement accessible par l'utilisateur
    //int rangTitreEnCours ;      // rang, dans le CD, du titre en cours.
        // Démarre à 0 (= PAS_de_CD = -1 si pas de CD dans le lecteur)
    //Titre *titreEnCours;        // titre en cours
    UnEtatLecteur etat;         // VIDE_ARRET,...LECTURE,...
    UnModeLecture mode;         // SEQUENTIEL, BOUCLE, ALEATOIRE

    LecteurVue* laVue;          // Pointeur vers la Vue
    std::string REPERTOIRE_RACINE = "C:\\Users\\Hoarau\\Desktop\\cours\\2eme_semestre\\S2.01\\SAE_201\\V0.5";
};

#endif // LECTEURCD_H
