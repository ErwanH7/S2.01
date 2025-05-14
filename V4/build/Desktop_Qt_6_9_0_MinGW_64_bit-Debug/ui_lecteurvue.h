/********************************************************************************
** Form generated from reading UI file 'lecteurvue.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LECTEURVUE_H
#define UI_LECTEURVUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LecteurVue
{
public:
    QWidget *centralwidget;
    QLabel *labelIntituleCD;
    QLabel *LabelTitreEnCour;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelCD;
    QLabel *labelTitre;
    QSpacerItem *horizontalSpacer_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelRang;
    QLabel *labelNmrRang;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *labelProgression;
    QSlider *tempEcoule;
    QLabel *labelTemp;
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *ouvrirFermer;
    QPushButton *insererCD;
    QPushButton *retirerCD;
    QGroupBox *groupBox_2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *boutonPrecedent;
    QPushButton *lecturePause;
    QPushButton *boutonDebut;
    QPushButton *boutonSuivant;
    QPushButton *boutonStop;
    QGroupBox *groupBox_3;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *boutonSequentiel;
    QPushButton *boutonAleatoire;
    QPushButton *boutonBoucle;
    QGroupBox *groupBox_4;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *volume;
    QSlider *barreVolume;
    QCheckBox *volumeCheck;

    void setupUi(QMainWindow *LecteurVue)
    {
        if (LecteurVue->objectName().isEmpty())
            LecteurVue->setObjectName("LecteurVue");
        LecteurVue->resize(1023, 521);
        centralwidget = new QWidget(LecteurVue);
        centralwidget->setObjectName("centralwidget");
        labelIntituleCD = new QLabel(centralwidget);
        labelIntituleCD->setObjectName("labelIntituleCD");
        labelIntituleCD->setGeometry(QRect(630, 10, 61, 16));
        LabelTitreEnCour = new QLabel(centralwidget);
        LabelTitreEnCour->setObjectName("LabelTitreEnCour");
        LabelTitreEnCour->setGeometry(QRect(40, 190, 121, 16));
        horizontalLayoutWidget_4 = new QWidget(centralwidget);
        horizontalLayoutWidget_4->setObjectName("horizontalLayoutWidget_4");
        horizontalLayoutWidget_4->setGeometry(QRect(630, 30, 311, 171));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        labelCD = new QLabel(horizontalLayoutWidget_4);
        labelCD->setObjectName("labelCD");
        QFont font;
        font.setBold(true);
        labelCD->setFont(font);

        horizontalLayout_4->addWidget(labelCD);

        labelTitre = new QLabel(horizontalLayoutWidget_4);
        labelTitre->setObjectName("labelTitre");

        horizontalLayout_4->addWidget(labelTitre);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(40, 210, 901, 61));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelRang = new QLabel(horizontalLayoutWidget_2);
        labelRang->setObjectName("labelRang");

        horizontalLayout_2->addWidget(labelRang);

        labelNmrRang = new QLabel(horizontalLayoutWidget_2);
        labelNmrRang->setObjectName("labelNmrRang");

        horizontalLayout_2->addWidget(labelNmrRang);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        labelProgression = new QLabel(horizontalLayoutWidget_2);
        labelProgression->setObjectName("labelProgression");

        horizontalLayout->addWidget(labelProgression);

        tempEcoule = new QSlider(horizontalLayoutWidget_2);
        tempEcoule->setObjectName("tempEcoule");
        tempEcoule->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout->addWidget(tempEcoule);

        labelTemp = new QLabel(horizontalLayoutWidget_2);
        labelTemp->setObjectName("labelTemp");

        horizontalLayout->addWidget(labelTemp);


        horizontalLayout_2->addLayout(horizontalLayout);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(40, 290, 131, 241));
        groupBox->setFont(font);
        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 20, 111, 201));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        ouvrirFermer = new QPushButton(verticalLayoutWidget);
        ouvrirFermer->setObjectName("ouvrirFermer");
        ouvrirFermer->setCheckable(true);

        verticalLayout->addWidget(ouvrirFermer);

        insererCD = new QPushButton(verticalLayoutWidget);
        insererCD->setObjectName("insererCD");

        verticalLayout->addWidget(insererCD);

        retirerCD = new QPushButton(verticalLayoutWidget);
        retirerCD->setObjectName("retirerCD");

        verticalLayout->addWidget(retirerCD);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(180, 290, 191, 231));
        groupBox_2->setFont(font);
        gridLayoutWidget = new QWidget(groupBox_2);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 20, 174, 201));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        boutonPrecedent = new QPushButton(gridLayoutWidget);
        boutonPrecedent->setObjectName("boutonPrecedent");

        gridLayout->addWidget(boutonPrecedent, 1, 1, 1, 1);

        lecturePause = new QPushButton(gridLayoutWidget);
        lecturePause->setObjectName("lecturePause");
        lecturePause->setCheckable(true);

        gridLayout->addWidget(lecturePause, 0, 0, 1, 1);

        boutonDebut = new QPushButton(gridLayoutWidget);
        boutonDebut->setObjectName("boutonDebut");

        gridLayout->addWidget(boutonDebut, 2, 1, 1, 1);

        boutonSuivant = new QPushButton(gridLayoutWidget);
        boutonSuivant->setObjectName("boutonSuivant");

        gridLayout->addWidget(boutonSuivant, 0, 1, 1, 1);

        boutonStop = new QPushButton(gridLayoutWidget);
        boutonStop->setObjectName("boutonStop");

        gridLayout->addWidget(boutonStop, 2, 0, 1, 1);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(380, 290, 131, 231));
        groupBox_3->setFont(font);
        verticalLayoutWidget_2 = new QWidget(groupBox_3);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(10, 20, 109, 201));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        boutonSequentiel = new QPushButton(verticalLayoutWidget_2);
        boutonSequentiel->setObjectName("boutonSequentiel");

        verticalLayout_2->addWidget(boutonSequentiel);

        boutonAleatoire = new QPushButton(verticalLayoutWidget_2);
        boutonAleatoire->setObjectName("boutonAleatoire");

        verticalLayout_2->addWidget(boutonAleatoire);

        boutonBoucle = new QPushButton(verticalLayoutWidget_2);
        boutonBoucle->setObjectName("boutonBoucle");

        verticalLayout_2->addWidget(boutonBoucle);

        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(630, 290, 331, 231));
        groupBox_4->setFont(font);
        horizontalLayoutWidget_3 = new QWidget(groupBox_4);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(10, 20, 311, 201));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        volume = new QLabel(horizontalLayoutWidget_3);
        volume->setObjectName("volume");

        horizontalLayout_3->addWidget(volume);

        barreVolume = new QSlider(horizontalLayoutWidget_3);
        barreVolume->setObjectName("barreVolume");
        barreVolume->setMaximum(100);
        barreVolume->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout_3->addWidget(barreVolume);

        volumeCheck = new QCheckBox(horizontalLayoutWidget_3);
        volumeCheck->setObjectName("volumeCheck");

        horizontalLayout_3->addWidget(volumeCheck);

        LecteurVue->setCentralWidget(centralwidget);

        retranslateUi(LecteurVue);

        QMetaObject::connectSlotsByName(LecteurVue);
    } // setupUi

    void retranslateUi(QMainWindow *LecteurVue)
    {
        LecteurVue->setWindowTitle(QCoreApplication::translate("LecteurVue", "LecteurVue", nullptr));
        labelIntituleCD->setText(QCoreApplication::translate("LecteurVue", "Intitul\303\251 CD", nullptr));
        LabelTitreEnCour->setText(QCoreApplication::translate("LecteurVue", "Titre en cours", nullptr));
        labelCD->setText(QCoreApplication::translate("LecteurVue", "PAS DE CD", nullptr));
        labelTitre->setText(QCoreApplication::translate("LecteurVue", "titres", nullptr));
        labelRang->setText(QCoreApplication::translate("LecteurVue", "Rang :", nullptr));
        labelNmrRang->setText(QCoreApplication::translate("LecteurVue", "/ 0", nullptr));
        labelProgression->setText(QCoreApplication::translate("LecteurVue", "Progression :", nullptr));
        labelTemp->setText(QCoreApplication::translate("LecteurVue", "00.00 / 00.00", nullptr));
        groupBox->setTitle(QCoreApplication::translate("LecteurVue", "Tiroir", nullptr));
        ouvrirFermer->setText(QCoreApplication::translate("LecteurVue", "Ouvrir/Fermer", nullptr));
        insererCD->setText(QCoreApplication::translate("LecteurVue", "Ins\303\251rer", nullptr));
        retirerCD->setText(QCoreApplication::translate("LecteurVue", "Retirer", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("LecteurVue", "GroupBox", nullptr));
        boutonPrecedent->setText(QCoreApplication::translate("LecteurVue", "Pr\303\251c\303\251dent", nullptr));
        lecturePause->setText(QCoreApplication::translate("LecteurVue", "Lecture/Pause", nullptr));
        boutonDebut->setText(QCoreApplication::translate("LecteurVue", "D\303\251but", nullptr));
        boutonSuivant->setText(QCoreApplication::translate("LecteurVue", "Suivant", nullptr));
        boutonStop->setText(QCoreApplication::translate("LecteurVue", "Stop", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("LecteurVue", "Mode", nullptr));
        boutonSequentiel->setText(QCoreApplication::translate("LecteurVue", "S\303\251quentiel", nullptr));
        boutonAleatoire->setText(QCoreApplication::translate("LecteurVue", "Al\303\251atoire", nullptr));
        boutonBoucle->setText(QCoreApplication::translate("LecteurVue", "Boucle", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("LecteurVue", "GroupBox", nullptr));
        volume->setText(QCoreApplication::translate("LecteurVue", "Volume : ", nullptr));
        volumeCheck->setText(QCoreApplication::translate("LecteurVue", "activer/d\303\251sactiver", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LecteurVue: public Ui_LecteurVue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LECTEURVUE_H
