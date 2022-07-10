/********************************************************************************
** Form generated from reading UI file 'digestiondoctorsintro.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIGESTIONDOCTORSINTRO_H
#define UI_DIGESTIONDOCTORSINTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_digestionDoctorsIntro
{
public:
    QWidget *centralwidget;
    QGroupBox *digestionGroup;
    QLabel *DrShahrokhMousavi;
    QLabel *DrMousaviName;
    QLabel *DrMousaviSpecialty;
    QLabel *DrNaserEbrahimi;
    QLabel *DrEbrahimiName;
    QLabel *DrEbrahimiSpecialty;

    void setupUi(QMainWindow *digestionDoctorsIntro)
    {
        if (digestionDoctorsIntro->objectName().isEmpty())
            digestionDoctorsIntro->setObjectName(QString::fromUtf8("digestionDoctorsIntro"));
        digestionDoctorsIntro->resize(646, 437);
        centralwidget = new QWidget(digestionDoctorsIntro);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        digestionGroup = new QGroupBox(centralwidget);
        digestionGroup->setObjectName(QString::fromUtf8("digestionGroup"));
        digestionGroup->setGeometry(QRect(10, 20, 621, 391));
        DrShahrokhMousavi = new QLabel(digestionGroup);
        DrShahrokhMousavi->setObjectName(QString::fromUtf8("DrShahrokhMousavi"));
        DrShahrokhMousavi->setGeometry(QRect(20, 30, 281, 271));
        DrShahrokhMousavi->setPixmap(QPixmap(QString::fromUtf8(":/dr.ShahrokhMousavi.jpg")));
        DrMousaviName = new QLabel(digestionGroup);
        DrMousaviName->setObjectName(QString::fromUtf8("DrMousaviName"));
        DrMousaviName->setGeometry(QRect(110, 310, 101, 20));
        DrMousaviSpecialty = new QLabel(digestionGroup);
        DrMousaviSpecialty->setObjectName(QString::fromUtf8("DrMousaviSpecialty"));
        DrMousaviSpecialty->setGeometry(QRect(130, 330, 48, 16));
        DrNaserEbrahimi = new QLabel(digestionGroup);
        DrNaserEbrahimi->setObjectName(QString::fromUtf8("DrNaserEbrahimi"));
        DrNaserEbrahimi->setGeometry(QRect(327, 30, 271, 271));
        DrNaserEbrahimi->setPixmap(QPixmap(QString::fromUtf8(":/dr.NaserEbrahimi.jpg")));
        DrEbrahimiName = new QLabel(digestionGroup);
        DrEbrahimiName->setObjectName(QString::fromUtf8("DrEbrahimiName"));
        DrEbrahimiName->setGeometry(QRect(410, 310, 101, 20));
        DrEbrahimiSpecialty = new QLabel(digestionGroup);
        DrEbrahimiSpecialty->setObjectName(QString::fromUtf8("DrEbrahimiSpecialty"));
        DrEbrahimiSpecialty->setGeometry(QRect(430, 330, 48, 16));
        digestionDoctorsIntro->setCentralWidget(centralwidget);

        retranslateUi(digestionDoctorsIntro);

        QMetaObject::connectSlotsByName(digestionDoctorsIntro);
    } // setupUi

    void retranslateUi(QMainWindow *digestionDoctorsIntro)
    {
        digestionDoctorsIntro->setWindowTitle(QCoreApplication::translate("digestionDoctorsIntro", "\331\276\330\262\330\264\332\251\330\247\331\206 \330\250\330\256\330\264 \332\257\331\210\330\247\330\261\330\264", nullptr));
        digestionGroup->setTitle(QCoreApplication::translate("digestionDoctorsIntro", "\332\257\331\210\330\247\330\261\330\264", nullptr));
        DrShahrokhMousavi->setText(QString());
        DrMousaviName->setText(QCoreApplication::translate("digestionDoctorsIntro", "\330\257\332\251\330\252\330\261 \330\264\330\247\331\207\330\261\330\256 \331\205\331\210\330\263\331\210\333\214", nullptr));
        DrMousaviSpecialty->setText(QCoreApplication::translate("digestionDoctorsIntro", "\332\257\331\210\330\247\330\261\330\264", nullptr));
        DrNaserEbrahimi->setText(QString());
        DrEbrahimiName->setText(QCoreApplication::translate("digestionDoctorsIntro", "\330\257\332\251\330\252\330\261 \331\206\330\247\330\265\330\261 \330\247\330\250\330\261\330\247\331\207\333\214\331\205\333\214", nullptr));
        DrEbrahimiSpecialty->setText(QCoreApplication::translate("digestionDoctorsIntro", "\332\257\331\210\330\247\330\261\330\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class digestionDoctorsIntro: public Ui_digestionDoctorsIntro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIGESTIONDOCTORSINTRO_H
