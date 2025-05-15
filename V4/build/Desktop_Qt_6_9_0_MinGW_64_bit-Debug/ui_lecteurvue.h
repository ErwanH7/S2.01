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
#include <QtWidgets/QFrame>
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
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout;
    QPushButton *boutonPrecedent;
    QPushButton *lecturePause;
    QPushButton *boutonDebut;
    QPushButton *boutonSuivant;
    QPushButton *boutonStop;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_2;
    QPushButton *boutonSequentiel;
    QPushButton *boutonAleatoire;
    QPushButton *boutonBoucle;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_7;
    QVBoxLayout *verticalLayout;
    QPushButton *ouvrirFermer;
    QPushButton *insererCD;
    QPushButton *retirerCD;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_3;
    QLabel *volume;
    QSlider *barreVolume;
    QCheckBox *volumeCheck;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_9;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelRang;
    QLabel *labelNmrRang;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *labelProgression;
    QSlider *tempEcoule;
    QLabel *labelTemp;
    QGroupBox *groupBox_6;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelCD;
    QLabel *labelTitre;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame;

    void setupUi(QMainWindow *LecteurVue)
    {
        if (LecteurVue->objectName().isEmpty())
            LecteurVue->setObjectName("LecteurVue");
        LecteurVue->resize(723, 408);
        centralwidget = new QWidget(LecteurVue);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        QFont font;
        font.setBold(true);
        groupBox_2->setFont(font);
        gridLayout_8 = new QGridLayout(groupBox_2);
        gridLayout_8->setObjectName("gridLayout_8");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        boutonPrecedent = new QPushButton(groupBox_2);
        boutonPrecedent->setObjectName("boutonPrecedent");

        gridLayout->addWidget(boutonPrecedent, 1, 1, 1, 1);

        lecturePause = new QPushButton(groupBox_2);
        lecturePause->setObjectName("lecturePause");
        lecturePause->setCheckable(true);

        gridLayout->addWidget(lecturePause, 0, 0, 1, 1);

        boutonDebut = new QPushButton(groupBox_2);
        boutonDebut->setObjectName("boutonDebut");

        gridLayout->addWidget(boutonDebut, 2, 1, 1, 1);

        boutonSuivant = new QPushButton(groupBox_2);
        boutonSuivant->setObjectName("boutonSuivant");

        gridLayout->addWidget(boutonSuivant, 0, 1, 1, 1);

        boutonStop = new QPushButton(groupBox_2);
        boutonStop->setObjectName("boutonStop");

        gridLayout->addWidget(boutonStop, 2, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setFont(font);
        gridLayout_5 = new QGridLayout(groupBox_3);
        gridLayout_5->setObjectName("gridLayout_5");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        boutonSequentiel = new QPushButton(groupBox_3);
        boutonSequentiel->setObjectName("boutonSequentiel");

        verticalLayout_2->addWidget(boutonSequentiel);

        boutonAleatoire = new QPushButton(groupBox_3);
        boutonAleatoire->setObjectName("boutonAleatoire");

        verticalLayout_2->addWidget(boutonAleatoire);

        boutonBoucle = new QPushButton(groupBox_3);
        boutonBoucle->setObjectName("boutonBoucle");

        verticalLayout_2->addWidget(boutonBoucle);


        gridLayout_5->addLayout(verticalLayout_2, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_3, 0, 2, 1, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setFont(font);
        gridLayout_7 = new QGridLayout(groupBox);
        gridLayout_7->setObjectName("gridLayout_7");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        ouvrirFermer = new QPushButton(groupBox);
        ouvrirFermer->setObjectName("ouvrirFermer");
        ouvrirFermer->setCheckable(true);

        verticalLayout->addWidget(ouvrirFermer);

        insererCD = new QPushButton(groupBox);
        insererCD->setObjectName("insererCD");

        verticalLayout->addWidget(insererCD);

        retirerCD = new QPushButton(groupBox);
        retirerCD->setObjectName("retirerCD");

        verticalLayout->addWidget(retirerCD);


        gridLayout_7->addLayout(verticalLayout, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setFont(font);
        gridLayout_6 = new QGridLayout(groupBox_4);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        volume = new QLabel(groupBox_4);
        volume->setObjectName("volume");

        gridLayout_3->addWidget(volume, 0, 0, 1, 1);

        barreVolume = new QSlider(groupBox_4);
        barreVolume->setObjectName("barreVolume");
        barreVolume->setMaximum(100);
        barreVolume->setOrientation(Qt::Orientation::Horizontal);

        gridLayout_3->addWidget(barreVolume, 0, 1, 1, 1);

        volumeCheck = new QCheckBox(groupBox_4);
        volumeCheck->setObjectName("volumeCheck");

        gridLayout_3->addWidget(volumeCheck, 0, 2, 1, 1);


        gridLayout_6->addLayout(gridLayout_3, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_4, 0, 3, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 2, 0, 1, 1);

        groupBox_5 = new QGroupBox(centralwidget);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setSizeIncrement(QSize(0, 20));
        groupBox_5->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        gridLayout_9 = new QGridLayout(groupBox_5);
        gridLayout_9->setObjectName("gridLayout_9");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        labelRang = new QLabel(groupBox_5);
        labelRang->setObjectName("labelRang");

        horizontalLayout_2->addWidget(labelRang);

        labelNmrRang = new QLabel(groupBox_5);
        labelNmrRang->setObjectName("labelNmrRang");

        horizontalLayout_2->addWidget(labelNmrRang);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        labelProgression = new QLabel(groupBox_5);
        labelProgression->setObjectName("labelProgression");

        horizontalLayout->addWidget(labelProgression);

        tempEcoule = new QSlider(groupBox_5);
        tempEcoule->setObjectName("tempEcoule");
        tempEcoule->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout->addWidget(tempEcoule);

        labelTemp = new QLabel(groupBox_5);
        labelTemp->setObjectName("labelTemp");

        horizontalLayout->addWidget(labelTemp);


        horizontalLayout_2->addLayout(horizontalLayout);


        gridLayout_9->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_5, 1, 0, 1, 1);

        groupBox_6 = new QGroupBox(centralwidget);
        groupBox_6->setObjectName("groupBox_6");
        horizontalLayoutWidget_4 = new QWidget(groupBox_6);
        horizontalLayoutWidget_4->setObjectName("horizontalLayoutWidget_4");
        horizontalLayoutWidget_4->setGeometry(QRect(0, 20, 311, 171));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        labelCD = new QLabel(horizontalLayoutWidget_4);
        labelCD->setObjectName("labelCD");
        labelCD->setFont(font);

        horizontalLayout_4->addWidget(labelCD);

        labelTitre = new QLabel(horizontalLayoutWidget_4);
        labelTitre->setObjectName("labelTitre");

        horizontalLayout_4->addWidget(labelTitre);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        frame = new QFrame(groupBox_6);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(290, 20, 391, 91));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);

        gridLayout_4->addWidget(groupBox_6, 0, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout_4);

        LecteurVue->setCentralWidget(centralwidget);

        retranslateUi(LecteurVue);

        QMetaObject::connectSlotsByName(LecteurVue);
    } // setupUi

    void retranslateUi(QMainWindow *LecteurVue)
    {
        LecteurVue->setWindowTitle(QCoreApplication::translate("LecteurVue", "LecteurVue", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("LecteurVue", "Lecture", nullptr));
        boutonPrecedent->setText(QCoreApplication::translate("LecteurVue", "Pr\303\251c\303\251dent", nullptr));
        lecturePause->setText(QCoreApplication::translate("LecteurVue", "Lecture/Pause", nullptr));
        boutonDebut->setText(QCoreApplication::translate("LecteurVue", "D\303\251but", nullptr));
        boutonSuivant->setText(QCoreApplication::translate("LecteurVue", "Suivant", nullptr));
        boutonStop->setText(QCoreApplication::translate("LecteurVue", "Stop", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("LecteurVue", "Mode", nullptr));
        boutonSequentiel->setText(QCoreApplication::translate("LecteurVue", "S\303\251quentiel", nullptr));
        boutonAleatoire->setText(QCoreApplication::translate("LecteurVue", "Al\303\251atoire", nullptr));
        boutonBoucle->setText(QCoreApplication::translate("LecteurVue", "Boucle", nullptr));
        groupBox->setTitle(QCoreApplication::translate("LecteurVue", "Tiroir", nullptr));
        ouvrirFermer->setText(QCoreApplication::translate("LecteurVue", "Ouvrir/Fermer", nullptr));
        insererCD->setText(QCoreApplication::translate("LecteurVue", "Ins\303\251rer", nullptr));
        retirerCD->setText(QCoreApplication::translate("LecteurVue", "Retirer", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("LecteurVue", "Son", nullptr));
        volume->setText(QCoreApplication::translate("LecteurVue", "Volume : ", nullptr));
        volumeCheck->setText(QCoreApplication::translate("LecteurVue", "activer/d\303\251sactiver", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("LecteurVue", "Titre en cours", nullptr));
        labelRang->setText(QCoreApplication::translate("LecteurVue", "Rang :", nullptr));
        labelNmrRang->setText(QCoreApplication::translate("LecteurVue", "/ 0", nullptr));
        labelProgression->setText(QCoreApplication::translate("LecteurVue", "Progression :", nullptr));
        labelTemp->setText(QCoreApplication::translate("LecteurVue", "00.00 / 00.00", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("LecteurVue", "Intitul\303\251 CD", nullptr));
        labelCD->setText(QCoreApplication::translate("LecteurVue", "PAS DE CD", nullptr));
        labelTitre->setText(QCoreApplication::translate("LecteurVue", "titres", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LecteurVue: public Ui_LecteurVue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LECTEURVUE_H
