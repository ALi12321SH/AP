/********************************************************************************
** Form generated from reading UI file 'heartdoctorsintro.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEARTDOCTORSINTRO_H
#define UI_HEARTDOCTORSINTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_heartDoctorsIntro
{
public:
    QWidget *centralwidget;
    QGroupBox *heartGroup;
    QLabel *DrMasoudGhasemi;
    QLabel *DrGHasemiName;
    QLabel *DrGhasemiSpecialty;
    QLabel *DrMohammadAbazari;
    QLabel *DrAbazariName;
    QLabel *DrAbazariSpecialty;

    void setupUi(QMainWindow *heartDoctorsIntro)
    {
        if (heartDoctorsIntro->objectName().isEmpty())
            heartDoctorsIntro->setObjectName(QString::fromUtf8("heartDoctorsIntro"));
        heartDoctorsIntro->resize(642, 434);
        centralwidget = new QWidget(heartDoctorsIntro);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        heartGroup = new QGroupBox(centralwidget);
        heartGroup->setObjectName(QString::fromUtf8("heartGroup"));
        heartGroup->setGeometry(QRect(20, 20, 591, 391));
        DrMasoudGhasemi = new QLabel(heartGroup);
        DrMasoudGhasemi->setObjectName(QString::fromUtf8("DrMasoudGhasemi"));
        DrMasoudGhasemi->setGeometry(QRect(10, 30, 251, 261));
        DrMasoudGhasemi->setPixmap(QPixmap(QString::fromUtf8(":/dr.MasoudGhasemi.jpg")));
        DrGHasemiName = new QLabel(heartGroup);
        DrGHasemiName->setObjectName(QString::fromUtf8("DrGHasemiName"));
        DrGHasemiName->setGeometry(QRect(80, 300, 101, 20));
        DrGhasemiSpecialty = new QLabel(heartGroup);
        DrGhasemiSpecialty->setObjectName(QString::fromUtf8("DrGhasemiSpecialty"));
        DrGhasemiSpecialty->setGeometry(QRect(97, 320, 61, 20));
        DrMohammadAbazari = new QLabel(heartGroup);
        DrMohammadAbazari->setObjectName(QString::fromUtf8("DrMohammadAbazari"));
        DrMohammadAbazari->setGeometry(QRect(280, 30, 271, 261));
        DrMohammadAbazari->setPixmap(QPixmap(QString::fromUtf8(":/dr.MohammadAbazari.jpg")));
        DrAbazariName = new QLabel(heartGroup);
        DrAbazariName->setObjectName(QString::fromUtf8("DrAbazariName"));
        DrAbazariName->setGeometry(QRect(380, 300, 91, 20));
        DrAbazariSpecialty = new QLabel(heartGroup);
        DrAbazariSpecialty->setObjectName(QString::fromUtf8("DrAbazariSpecialty"));
        DrAbazariSpecialty->setGeometry(QRect(387, 320, 61, 20));
        heartDoctorsIntro->setCentralWidget(centralwidget);

        retranslateUi(heartDoctorsIntro);

        QMetaObject::connectSlotsByName(heartDoctorsIntro);
    } // setupUi

    void retranslateUi(QMainWindow *heartDoctorsIntro)
    {
        heartDoctorsIntro->setWindowTitle(QCoreApplication::translate("heartDoctorsIntro", "\331\276\330\262\330\264\332\251\330\247\331\206 \330\250\330\256\330\264 \331\202\331\204\330\250", nullptr));
        heartGroup->setTitle(QCoreApplication::translate("heartDoctorsIntro", "\330\257\330\247\330\256\331\204\333\214 \331\202\331\204\330\250", nullptr));
        DrMasoudGhasemi->setText(QString());
        DrGHasemiName->setText(QCoreApplication::translate("heartDoctorsIntro", "\330\257\332\251\330\252\330\261 \331\205\330\263\330\271\331\210\330\257 \331\202\330\247\330\263\331\205\333\214", nullptr));
        DrGhasemiSpecialty->setText(QCoreApplication::translate("heartDoctorsIntro", "\330\257\330\247\330\256\331\204\333\214 \331\202\331\204\330\250", nullptr));
        DrMohammadAbazari->setText(QString());
        DrAbazariName->setText(QCoreApplication::translate("heartDoctorsIntro", "<html><head/><body><p>\330\257\332\251\330\252\330\261 \331\205\330\255\331\205\330\257 \330\247\330\250\330\247\330\260\330\261\333\214</p></body></html>", nullptr));
        DrAbazariSpecialty->setText(QCoreApplication::translate("heartDoctorsIntro", "\330\257\330\247\330\256\331\204\333\214 \331\202\331\204\330\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class heartDoctorsIntro: public Ui_heartDoctorsIntro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEARTDOCTORSINTRO_H
