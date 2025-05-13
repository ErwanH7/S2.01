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
#include <QtGui/QAction>
#include <QtGui/QIcon>
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
    QRadioButton *autoButton;
    QLabel *rangTitre;
    QPushButton *insererCD;
    QPushButton *retirerCD;
    QGridLayout *gridLayout_2;
    QSlider *barreVolume;
    QLabel *tempEcoule;
    QLabel *volume;
    QSlider *barreTempEcoule;
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
        etatDisque->setAlignment(Qt::AlignmentFlag::AlignCenter);
        etatDisque->setMargin(10);
        etatDisque->setIndent(530);

        horizontalLayout->addWidget(etatDisque);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pochette = new QLabel(centralwidget);
        pochette->setObjectName("pochette");
        pochette->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(pochette);


        verticalLayout->addLayout(horizontalLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        titreSuivant = new QPushButton(centralwidget);
        titreSuivant->setObjectName("titreSuivant");
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::GoNext));
        titreSuivant->setIcon(icon);

        gridLayout->addWidget(titreSuivant, 2, 4, 1, 1);

        intituleCD = new QLabel(centralwidget);
        intituleCD->setObjectName("intituleCD");
        intituleCD->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(intituleCD, 0, 2, 1, 1);

        ouvrirFermer = new QPushButton(centralwidget);
        ouvrirFermer->setObjectName("ouvrirFermer");
        ouvrirFermer->setCheckable(true);

        gridLayout->addWidget(ouvrirFermer, 3, 2, 1, 1);

        boutonStop = new QPushButton(centralwidget);
        boutonStop->setObjectName("boutonStop");
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::MediaPlaybackStop));
        boutonStop->setIcon(icon1);

        gridLayout->addWidget(boutonStop, 2, 3, 1, 1);

        titrePrec = new QPushButton(centralwidget);
        titrePrec->setObjectName("titrePrec");
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::GoPrevious));
        titrePrec->setIcon(icon2);

        gridLayout->addWidget(titrePrec, 2, 0, 1, 1);

        titreEnCours = new QLabel(centralwidget);
        titreEnCours->setObjectName("titreEnCours");
        titreEnCours->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(titreEnCours, 1, 2, 1, 1);

        recommencerTitre = new QPushButton(centralwidget);
        recommencerTitre->setObjectName("recommencerTitre");
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::MediaSeekBackward));
        recommencerTitre->setIcon(icon3);

        gridLayout->addWidget(recommencerTitre, 2, 1, 1, 1);

        lecturePause = new QPushButton(centralwidget);
        lecturePause->setObjectName("lecturePause");
        QIcon icon4(QIcon::fromTheme(QIcon::ThemeIcon::MediaPlaybackStart));
        lecturePause->setIcon(icon4);
        lecturePause->setCheckable(true);

        gridLayout->addWidget(lecturePause, 2, 2, 1, 1);

        autoButton = new QRadioButton(centralwidget);
        autoButton->setObjectName("autoButton");

        gridLayout->addWidget(autoButton, 1, 3, 1, 1);

        rangTitre = new QLabel(centralwidget);
        rangTitre->setObjectName("rangTitre");

        gridLayout->addWidget(rangTitre, 1, 1, 1, 1);

        insererCD = new QPushButton(centralwidget);
        insererCD->setObjectName("insererCD");
        insererCD->setAutoDefault(false);

        gridLayout->addWidget(insererCD, 3, 1, 1, 1);

        retirerCD = new QPushButton(centralwidget);
        retirerCD->setObjectName("retirerCD");

        gridLayout->addWidget(retirerCD, 3, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        barreVolume = new QSlider(centralwidget);
        barreVolume->setObjectName("barreVolume");
        barreVolume->setMaximum(100);
        barreVolume->setOrientation(Qt::Orientation::Horizontal);

        gridLayout_2->addWidget(barreVolume, 1, 1, 1, 1);

        tempEcoule = new QLabel(centralwidget);
        tempEcoule->setObjectName("tempEcoule");

        gridLayout_2->addWidget(tempEcoule, 0, 0, 1, 1);

        volume = new QLabel(centralwidget);
        volume->setObjectName("volume");

        gridLayout_2->addWidget(volume, 1, 0, 1, 1);

        barreTempEcoule = new QSlider(centralwidget);
        barreTempEcoule->setObjectName("barreTempEcoule");
        barreTempEcoule->setOrientation(Qt::Orientation::Horizontal);

        gridLayout_2->addWidget(barreTempEcoule, 0, 1, 1, 1);


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
        menubar->setGeometry(QRect(0, 0, 1236, 17));
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
        etatDisque->setText(QCoreApplication::translate("LecteurVue", "Sans CD", nullptr));
        pochette->setText(QCoreApplication::translate("LecteurVue", "pochette", nullptr));
        titreSuivant->setText(QString());
        intituleCD->setText(QCoreApplication::translate("LecteurVue", "Intitul\303\251 du CD", nullptr));
        ouvrirFermer->setText(QCoreApplication::translate("LecteurVue", "Ouvrir/Fermer", nullptr));
        boutonStop->setText(QString());
        titrePrec->setText(QString());
        titreEnCours->setText(QCoreApplication::translate("LecteurVue", "Titre en cours ", nullptr));
        recommencerTitre->setText(QString());
        lecturePause->setText(QCoreApplication::translate("LecteurVue", "Lecture/Pause", nullptr));
        autoButton->setText(QCoreApplication::translate("LecteurVue", "Mode auto", nullptr));
        rangTitre->setText(QCoreApplication::translate("LecteurVue", "Rang du titre", nullptr));
        insererCD->setText(QCoreApplication::translate("LecteurVue", "ins\303\251rer CD", nullptr));
        retirerCD->setText(QCoreApplication::translate("LecteurVue", "retirer CD", nullptr));
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
