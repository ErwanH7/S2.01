#ifndef SORTIESON_H
#define SORTIESON_H

#include <QAudioOutput>
#include <QObject>

class SortieSon : public QAudioOutput
{
    Q_OBJECT
public:
    SortieSon(QObject *parent = nullptr);
    ~SortieSon();

    /* ------------
     * Slots activés par le lecteur suite à une
     * action de l'utilisateur sur un contrôle graphique
     * --------------------------------------------------*/

public slots:
    void setVolume(float pVolume);
    // modifie le volume de la sortie son
    void desactiverSon();
    // coupe le son
    void activerSon();
    // remet le son au volume défini par setVolume
};


#endif // SORTIESON_H
