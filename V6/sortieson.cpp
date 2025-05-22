#include "sortieson.h"
#include <QDebug>

SortieSon::SortieSon(QObject *parent)
    : QAudioOutput{parent}
{  }

SortieSon::~SortieSon()
{ qDebug() << "Destruction de la SortieSon " << Qt::endl; }


void SortieSon::setVolume(float pVolume)
{
    QAudioOutput::setVolume(pVolume);
}

void SortieSon::desactiverSon()
{
    QAudioOutput::setMuted(true);
}

void SortieSon::activerSon()
{
    QAudioOutput::setMuted(false);
}
