/********************************************************************************
** Form generated from reading UI file 'lecteurvue.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LECTEURVUE_H
#define UI_LECTEURVUE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LecteurVue
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *etatDisque;
    QHBoxLayout *horizontalLayout_2;
    QLabel *pochette;
    QGridLayout *gridLayout;
    QPushButton *titreSuivant;
    QLabel *intituleCD;
    QPushButton *ouvrirFermer;
    QPushButton *boutonStop;
    QPushButton *titrePrec;
    QLabel *titreEnCours;
    QPushButton *recommencerTitre;
    QPushButton *lecturePause;
    QRadioButton *radioButton;
    QLabel *rangTitre;
    QGridLayout *gridLayout_2;
    QLabel *tempEcoule;
    QLabel *volume;
    QSlider *barreVolume;
    QSlider *tempEcoule_2;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LecteurVue)
    {
        if (LecteurVue->objectName().isEmpty())
            LecteurVue->setObjectName("LecteurVue");
        LecteurVue->resize(1236, 582);
        centralwidget = new QWidget(LecteurVue);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_4 = new QHBoxLayout(centralwidget);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        etatDisque = new QLabel(centralwidget);
        etatDisque->setObjectName("etatDisque");
        etatDisque->setAlignment(Qt::AlignCenter);
        etatDisque->setMargin(10);
        etatDisque->setIndent(530);

        horizontalLayout->addWidget(etatDisque);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pochette = new QLabel(centralwidget);
        pochette->setObjectName("pochette");
        pochette->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(pochette);


        verticalLayout->addLayout(horizontalLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        titreSuivant = new QPushButton(centralwidget);
        titreSuivant->setObjectName("titreSuivant");

        gridLayout->addWidget(titreSuivant, 2, 4, 1, 1);

        intituleCD = new QLabel(centralwidget);
        intituleCD->setObjectName("intituleCD");
        intituleCD->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(intituleCD, 0, 2, 1, 1);

        ouvrirFermer = new QPushButton(centralwidget);
        ouvrirFermer->setObjectName("ouvrirFermer");

        gridLayout->addWidget(ouvrirFermer, 3, 2, 1, 1);

        boutonStop = new QPushButton(centralwidget);
        boutonStop->setObjectName("boutonStop");

        gridLayout->addWidget(boutonStop, 2, 3, 1, 1);

        titrePrec = new QPushButton(centralwidget);
        titrePrec->setObjectName("titrePrec");

        gridLayout->addWidget(titrePrec, 2, 0, 1, 1);

        titreEnCours = new QLabel(centralwidget);
        titreEnCours->setObjectName("titreEnCours");
        titreEnCours->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(titreEnCours, 1, 2, 1, 1);

        recommencerTitre = new QPushButton(centralwidget);
        recommencerTitre->setObjectName("recommencerTitre");

        gridLayout->addWidget(recommencerTitre, 2, 1, 1, 1);

        lecturePause = new QPushButton(centralwidget);
        lecturePause->setObjectName("lecturePause");

        gridLayout->addWidget(lecturePause, 2, 2, 1, 1);

        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName("radioButton");

        gridLayout->addWidget(radioButton, 1, 3, 1, 1);

        rangTitre = new QLabel(centralwidget);
        rangTitre->setObjectName("rangTitre");

        gridLayout->addWidget(rangTitre, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        tempEcoule = new QLabel(centralwidget);
        tempEcoule->setObjectName("tempEcoule");

        gridLayout_2->addWidget(tempEcoule, 0, 0, 1, 1);

        volume = new QLabel(centralwidget);
        volume->setObjectName("volume");

        gridLayout_2->addWidget(volume, 1, 0, 1, 1);

        barreVolume = new QSlider(centralwidget);
        barreVolume->setObjectName("barreVolume");
        barreVolume->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(barreVolume, 1, 1, 1, 1);

        tempEcoule_2 = new QSlider(centralwidget);
        tempEcoule_2->setObjectName("tempEcoule_2");
        tempEcoule_2->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(tempEcoule_2, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);


        horizontalLayout_3->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 5);
        horizontalLayout_3->setStretch(2, 1);

        horizontalLayout_4->addLayout(horizontalLayout_3);

        LecteurVue->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LecteurVue);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1236, 22));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName("menuMenu");
        LecteurVue->setMenuBar(menubar);
        statusbar = new QStatusBar(LecteurVue);
        statusbar->setObjectName("statusbar");
        LecteurVue->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());

        retranslateUi(LecteurVue);

        QMetaObject::connectSlotsByName(LecteurVue);
    } // setupUi

    void retranslateUi(QMainWindow *LecteurVue)
    {
        LecteurVue->setWindowTitle(QCoreApplication::translate("LecteurVue", "LecteurVue", nullptr));
        etatDisque->setText(QCoreApplication::translate("LecteurVue", "Etat du disque :", nullptr));
        pochette->setText(QCoreApplication::translate("LecteurVue", "pochette", nullptr));
        titreSuivant->setText(QCoreApplication::translate("LecteurVue", "Titre suivant", nullptr));
        intituleCD->setText(QCoreApplication::translate("LecteurVue", "Intitul\303\251 du CD", nullptr));
        ouvrirFermer->setText(QCoreApplication::translate("LecteurVue", "Ouvrir/Fermer", nullptr));
        boutonStop->setText(QCoreApplication::translate("LecteurVue", "Stop", nullptr));
        titrePrec->setText(QCoreApplication::translate("LecteurVue", "Titre pr\303\251c\303\251dent", nullptr));
        titreEnCours->setText(QCoreApplication::translate("LecteurVue", "Titre en cours ", nullptr));
        recommencerTitre->setText(QCoreApplication::translate("LecteurVue", "Recommencer titre", nullptr));
        lecturePause->setText(QCoreApplication::translate("LecteurVue", "Lecture/Pause", nullptr));
        radioButton->setText(QCoreApplication::translate("LecteurVue", "Mode auto", nullptr));
        rangTitre->setText(QCoreApplication::translate("LecteurVue", "Rang du titre", nullptr));
        tempEcoule->setText(QCoreApplication::translate("LecteurVue", "Temp \303\251coul\303\251 : .. /..", nullptr));
        volume->setText(QCoreApplication::translate("LecteurVue", "Volume :", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("LecteurVue", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LecteurVue: public Ui_LecteurVue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LECTEURVUE_H
