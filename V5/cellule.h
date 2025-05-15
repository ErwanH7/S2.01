#ifndef CELLULE_H
#define CELLULE_H
#include <QMediaPlayer>
#include <QObject>


class LecteurCD;
class Cellule : public QObject
{
    Q_OBJECT
public:
    enum UnEtatMoteur {ARRET, MARCHE};
    explicit Cellule(LecteurCD* pLecteur, QObject *parent = nullptr);
    virtual ~Cellule();

    // getters
    UnEtatMoteur getEtatMoteur();
    LecteurCD* getLecteurCD();
    QMediaPlayer* getPlayer();

    // setters
    void demarrerLecture();
        // met le moteur en marche, lit à partir de l'emplacement actuel de la tête de lecture
    void arreterLecture();
        // arrête le moteur, la tête de lecture reste sur place
    void allerADebutMedia();
        // déplace la tête de lecture en début de piste en cours
    void setLecteurCD(LecteurCD* pLecteur);
    void setPlayer(QMediaPlayer* pPlayer);
    void setSource(const QString& source);

private slots:
    void playerPositionChanged(qint64 pPosition);
    /* déclenché lors de la diffusion du média en cours.
       Utile pour mettre à jour le temps de diffusion sur l'interface
       et pour préparer le passage au titre suivant (lorsque la diffusion du média courant est terminée)
       */
    void playerDurationChanged(qint64 pDuration);
    /* déclenché lorsque le média à diffuser change (la durée du nouveau média n'est plus la même, ou peut être
     * nulle si aucun nouveau média n'est chargé)
     * Emettra le signal durationChangedFromCellule(int)
       */

signals:
    // En direction du LecteurCD
    void durationChangedFromCellule(int);
    // Signale un changement de média
    void positionChangedFromCellule(int);
    // Signale l'avancement de la diffusion du média en cours
    void mediaFinishedFromCellule();
    // Signale la fin de la diffusion du média en cours

private:
    QMediaPlayer *player;   // la 'tête de lecture'.
    UnEtatMoteur etatMoteur;
    /* état de la tête de lecture :
     * ARRET (avec player en PAUSE) / MARCHE (avec player en PLAY)
       */
    LecteurCD* leLecteurCD; // pour communiquer avec le composé
};

#endif // CELLULE_H
