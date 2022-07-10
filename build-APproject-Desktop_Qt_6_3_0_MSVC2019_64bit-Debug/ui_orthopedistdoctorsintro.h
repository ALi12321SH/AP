/********************************************************************************
** Form generated from reading UI file 'orthopedistdoctorsintro.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORTHOPEDISTDOCTORSINTRO_H
#define UI_ORTHOPEDISTDOCTORSINTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_orthopedistDoctorsIntro
{
public:
    QWidget *centralwidget;
    QGroupBox *orthopedistGroup;
    QLabel *DrAhmadShahla;
    QLabel *DrShahlaName;
    QLabel *DrShahlaSpecialty;
    QLabel *DrEsmaeilAbbasi;
    QLabel *DrAbbasiName;
    QLabel *DrAbbasiSpecialty;

    void setupUi(QMainWindow *orthopedistDoctorsIntro)
    {
        if (orthopedistDoctorsIntro->objectName().isEmpty())
            orthopedistDoctorsIntro->setObjectName(QString::fromUtf8("orthopedistDoctorsIntro"));
        orthopedistDoctorsIntro->resize(660, 400);
        centralwidget = new QWidget(orthopedistDoctorsIntro);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        orthopedistGroup = new QGroupBox(centralwidget);
        orthopedistGroup->setObjectName(QString::fromUtf8("orthopedistGroup"));
        orthopedistGroup->setGeometry(QRect(30, 10, 601, 361));
        DrAhmadShahla = new QLabel(orthopedistGroup);
        DrAhmadShahla->setObjectName(QString::fromUtf8("DrAhmadShahla"));
        DrAhmadShahla->setGeometry(QRect(7, 35, 271, 271));
        DrAhmadShahla->setPixmap(QPixmap(QString::fromUtf8(":/dr.AhmadShahla.jpg")));
        DrShahlaName = new QLabel(orthopedistGroup);
        DrShahlaName->setObjectName(QString::fromUtf8("DrShahlaName"));
        DrShahlaName->setGeometry(QRect(77, 310, 91, 20));
        DrShahlaSpecialty = new QLabel(orthopedistGroup);
        DrShahlaSpecialty->setObjectName(QString::fromUtf8("DrShahlaSpecialty"));
        DrShahlaSpecialty->setGeometry(QRect(100, 330, 48, 16));
        DrEsmaeilAbbasi = new QLabel(orthopedistGroup);
        DrEsmaeilAbbasi->setObjectName(QString::fromUtf8("DrEsmaeilAbbasi"));
        DrEsmaeilAbbasi->setGeometry(QRect(307, 35, 261, 271));
        DrEsmaeilAbbasi->setPixmap(QPixmap(QString::fromUtf8(":/dr.EsmaeilAbbasi.jpg")));
        DrAbbasiName = new QLabel(orthopedistGroup);
        DrAbbasiName->setObjectName(QString::fromUtf8("DrAbbasiName"));
        DrAbbasiName->setGeometry(QRect(390, 310, 101, 20));
        DrAbbasiSpecialty = new QLabel(orthopedistGroup);
        DrAbbasiSpecialty->setObjectName(QString::fromUtf8("DrAbbasiSpecialty"));
        DrAbbasiSpecialty->setGeometry(QRect(410, 330, 48, 16));
        orthopedistDoctorsIntro->setCentralWidget(centralwidget);

        retranslateUi(orthopedistDoctorsIntro);

        QMetaObject::connectSlotsByName(orthopedistDoctorsIntro);
    } // setupUi

    void retranslateUi(QMainWindow *orthopedistDoctorsIntro)
    {
        orthopedistDoctorsIntro->setWindowTitle(QCoreApplication::translate("orthopedistDoctorsIntro", "\331\276\330\262\330\264\332\251\330\247\331\206 \330\250\330\256\330\264 \330\247\330\261\330\252\331\210\331\276\330\257\333\214", nullptr));
        orthopedistGroup->setTitle(QCoreApplication::translate("orthopedistDoctorsIntro", "\330\247\330\261\330\252\331\210\331\276\330\257\333\214", nullptr));
        DrAhmadShahla->setText(QString());
        DrShahlaName->setText(QCoreApplication::translate("orthopedistDoctorsIntro", "\330\257\332\251\330\252\330\261 \330\247\330\255\331\205\330\257 \330\264\331\207\331\204\330\247", nullptr));
        DrShahlaSpecialty->setText(QCoreApplication::translate("orthopedistDoctorsIntro", "\330\247\330\261\330\252\331\210\331\276\330\257", nullptr));
        DrEsmaeilAbbasi->setText(QString());
        DrAbbasiName->setText(QCoreApplication::translate("orthopedistDoctorsIntro", "\330\257\332\251\330\252\330\261 \330\247\330\263\331\205\330\247\330\271\333\214\331\204 \330\271\330\250\330\247\330\263\333\214", nullptr));
        DrAbbasiSpecialty->setText(QCoreApplication::translate("orthopedistDoctorsIntro", "\330\247\330\261\330\252\331\210\331\276\330\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class orthopedistDoctorsIntro: public Ui_orthopedistDoctorsIntro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORTHOPEDISTDOCTORSINTRO_H
