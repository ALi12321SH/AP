/********************************************************************************
** Form generated from reading UI file 'dentistdoctorsintro.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DENTISTDOCTORSINTRO_H
#define UI_DENTISTDOCTORSINTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dentistDoctorsintro
{
public:
    QWidget *centralwidget;
    QGroupBox *dentistsGroup;
    QLabel *DrHosseinBehnia;
    QLabel *DrBehniaName;
    QLabel *DrBehniaSpecialty;
    QLabel *DrMohammadJavadTohidpour;
    QLabel *DrTohidipourName;
    QLabel *DrTohidiPourSpecialty;
    QLabel *DrRoshanipourName;
    QLabel *DrRoshanipourSpecialty;
    QLabel *DrAfshinRoshanpour;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *dentistDoctorsintro)
    {
        if (dentistDoctorsintro->objectName().isEmpty())
            dentistDoctorsintro->setObjectName(QString::fromUtf8("dentistDoctorsintro"));
        dentistDoctorsintro->resize(716, 702);
        centralwidget = new QWidget(dentistDoctorsintro);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        dentistsGroup = new QGroupBox(centralwidget);
        dentistsGroup->setObjectName(QString::fromUtf8("dentistsGroup"));
        dentistsGroup->setGeometry(QRect(20, 0, 661, 661));
        DrHosseinBehnia = new QLabel(dentistsGroup);
        DrHosseinBehnia->setObjectName(QString::fromUtf8("DrHosseinBehnia"));
        DrHosseinBehnia->setGeometry(QRect(10, 30, 301, 251));
        DrHosseinBehnia->setFrameShape(QFrame::NoFrame);
        DrHosseinBehnia->setFrameShadow(QFrame::Plain);
        DrHosseinBehnia->setPixmap(QPixmap(QString::fromUtf8(":/dr.HosseinBehnia.jpeg")));
        DrBehniaName = new QLabel(dentistsGroup);
        DrBehniaName->setObjectName(QString::fromUtf8("DrBehniaName"));
        DrBehniaName->setGeometry(QRect(110, 290, 81, 16));
        DrBehniaSpecialty = new QLabel(dentistsGroup);
        DrBehniaSpecialty->setObjectName(QString::fromUtf8("DrBehniaSpecialty"));
        DrBehniaSpecialty->setGeometry(QRect(90, 310, 121, 20));
        DrMohammadJavadTohidpour = new QLabel(dentistsGroup);
        DrMohammadJavadTohidpour->setObjectName(QString::fromUtf8("DrMohammadJavadTohidpour"));
        DrMohammadJavadTohidpour->setGeometry(QRect(350, 30, 301, 251));
        QFont font;
        font.setPointSize(9);
        DrMohammadJavadTohidpour->setFont(font);
        DrMohammadJavadTohidpour->setPixmap(QPixmap(QString::fromUtf8(":/dr.MohammadJavadTohidpour.jpg")));
        DrTohidipourName = new QLabel(dentistsGroup);
        DrTohidipourName->setObjectName(QString::fromUtf8("DrTohidipourName"));
        DrTohidipourName->setGeometry(QRect(430, 290, 141, 20));
        DrTohidiPourSpecialty = new QLabel(dentistsGroup);
        DrTohidiPourSpecialty->setObjectName(QString::fromUtf8("DrTohidiPourSpecialty"));
        DrTohidiPourSpecialty->setGeometry(QRect(470, 310, 61, 20));
        DrRoshanipourName = new QLabel(dentistsGroup);
        DrRoshanipourName->setObjectName(QString::fromUtf8("DrRoshanipourName"));
        DrRoshanipourName->setGeometry(QRect(90, 600, 121, 20));
        DrRoshanipourSpecialty = new QLabel(dentistsGroup);
        DrRoshanipourSpecialty->setObjectName(QString::fromUtf8("DrRoshanipourSpecialty"));
        DrRoshanipourSpecialty->setGeometry(QRect(120, 620, 61, 20));
        DrAfshinRoshanpour = new QLabel(dentistsGroup);
        DrAfshinRoshanpour->setObjectName(QString::fromUtf8("DrAfshinRoshanpour"));
        DrAfshinRoshanpour->setGeometry(QRect(10, 340, 301, 251));
        DrAfshinRoshanpour->setPixmap(QPixmap(QString::fromUtf8(":/dr.AfshinRoshanpour.jpg")));
        dentistDoctorsintro->setCentralWidget(centralwidget);
        menubar = new QMenuBar(dentistDoctorsintro);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 716, 21));
        dentistDoctorsintro->setMenuBar(menubar);
        statusbar = new QStatusBar(dentistDoctorsintro);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        dentistDoctorsintro->setStatusBar(statusbar);

        retranslateUi(dentistDoctorsintro);

        QMetaObject::connectSlotsByName(dentistDoctorsintro);
    } // setupUi

    void retranslateUi(QMainWindow *dentistDoctorsintro)
    {
        dentistDoctorsintro->setWindowTitle(QCoreApplication::translate("dentistDoctorsintro", "\331\276\330\262\330\264\332\251\330\247\331\206 \330\250\330\256\330\264 \330\257\331\206\330\257\330\247\331\206\331\276\330\262\330\264\332\251\333\214", nullptr));
        dentistsGroup->setTitle(QCoreApplication::translate("dentistDoctorsintro", "\330\257\331\206\330\257\330\247\331\206\331\276\330\262\330\264\332\251\333\214", nullptr));
        DrHosseinBehnia->setText(QString());
        DrBehniaName->setText(QCoreApplication::translate("dentistDoctorsintro", "\330\257\332\251\330\252\330\261 \330\255\330\263\333\214\331\206 \330\250\331\207\331\206\333\214\330\247", nullptr));
        DrBehniaSpecialty->setText(QCoreApplication::translate("dentistDoctorsintro", "\330\254\330\261\330\247\330\255 \330\257\331\207\330\247\331\206\330\214\331\201\332\251 \331\210 \330\265\331\210\330\261\330\252", nullptr));
        DrMohammadJavadTohidpour->setText(QString());
        DrTohidipourName->setText(QCoreApplication::translate("dentistDoctorsintro", "\330\257\332\251\330\252\330\261 \331\205\330\255\331\205\330\257 \330\254\331\210\330\247\330\257 \330\252\331\210\330\255\333\214\330\257\333\214 \331\276\331\210\330\261", nullptr));
        DrTohidiPourSpecialty->setText(QCoreApplication::translate("dentistDoctorsintro", "\330\257\331\206\330\257\330\247\331\206\331\276\330\262\330\264\332\251", nullptr));
        DrRoshanipourName->setText(QCoreApplication::translate("dentistDoctorsintro", "\330\257\332\251\330\252\330\261 \330\247\331\201\330\264\333\214\331\206 \330\261\331\210\330\264\331\206\333\214 \331\276\331\210\330\261", nullptr));
        DrRoshanipourSpecialty->setText(QCoreApplication::translate("dentistDoctorsintro", "\330\257\331\206\330\257\330\247\331\206\331\276\330\262\330\264\332\251", nullptr));
        DrAfshinRoshanpour->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class dentistDoctorsintro: public Ui_dentistDoctorsintro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DENTISTDOCTORSINTRO_H
