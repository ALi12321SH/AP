/********************************************************************************
** Form generated from reading UI file 'neurologydoctorsintro.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEUROLOGYDOCTORSINTRO_H
#define UI_NEUROLOGYDOCTORSINTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_neurologyDoctorsIntro
{
public:
    QWidget *centralwidget;
    QGroupBox *neurologyGroup;
    QLabel *DrMahmoudMotamedi;
    QLabel *DrMotamediName;
    QLabel *DrMotamediSpecialty;
    QLabel *DrHosseinPourmahmoudian;
    QLabel *DrMahmoudianName;
    QLabel *DrMahmoudianSpecialty;

    void setupUi(QMainWindow *neurologyDoctorsIntro)
    {
        if (neurologyDoctorsIntro->objectName().isEmpty())
            neurologyDoctorsIntro->setObjectName(QString::fromUtf8("neurologyDoctorsIntro"));
        neurologyDoctorsIntro->resize(665, 424);
        centralwidget = new QWidget(neurologyDoctorsIntro);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        neurologyGroup = new QGroupBox(centralwidget);
        neurologyGroup->setObjectName(QString::fromUtf8("neurologyGroup"));
        neurologyGroup->setGeometry(QRect(20, 20, 621, 371));
        DrMahmoudMotamedi = new QLabel(neurologyGroup);
        DrMahmoudMotamedi->setObjectName(QString::fromUtf8("DrMahmoudMotamedi"));
        DrMahmoudMotamedi->setGeometry(QRect(17, 35, 251, 261));
        DrMahmoudMotamedi->setPixmap(QPixmap(QString::fromUtf8(":/dr.MahmoudMotamedi.jpg")));
        DrMotamediName = new QLabel(neurologyGroup);
        DrMotamediName->setObjectName(QString::fromUtf8("DrMotamediName"));
        DrMotamediName->setGeometry(QRect(80, 300, 111, 20));
        DrMotamediSpecialty = new QLabel(neurologyGroup);
        DrMotamediSpecialty->setObjectName(QString::fromUtf8("DrMotamediSpecialty"));
        DrMotamediSpecialty->setGeometry(QRect(97, 320, 71, 20));
        DrHosseinPourmahmoudian = new QLabel(neurologyGroup);
        DrHosseinPourmahmoudian->setObjectName(QString::fromUtf8("DrHosseinPourmahmoudian"));
        DrHosseinPourmahmoudian->setGeometry(QRect(307, 35, 271, 261));
        DrHosseinPourmahmoudian->setPixmap(QPixmap(QString::fromUtf8(":/dr.HosseinPourmahmoudian.jpg")));
        DrMahmoudianName = new QLabel(neurologyGroup);
        DrMahmoudianName->setObjectName(QString::fromUtf8("DrMahmoudianName"));
        DrMahmoudianName->setGeometry(QRect(370, 300, 131, 20));
        DrMahmoudianSpecialty = new QLabel(neurologyGroup);
        DrMahmoudianSpecialty->setObjectName(QString::fromUtf8("DrMahmoudianSpecialty"));
        DrMahmoudianSpecialty->setGeometry(QRect(410, 320, 71, 20));
        DrMahmoudianSpecialty->setAlignment(Qt::AlignCenter);
        neurologyDoctorsIntro->setCentralWidget(centralwidget);

        retranslateUi(neurologyDoctorsIntro);

        QMetaObject::connectSlotsByName(neurologyDoctorsIntro);
    } // setupUi

    void retranslateUi(QMainWindow *neurologyDoctorsIntro)
    {
        neurologyDoctorsIntro->setWindowTitle(QCoreApplication::translate("neurologyDoctorsIntro", "\331\276\330\262\330\264\332\251\330\247\331\206 \330\250\330\256\330\264 \331\205\330\272\330\262 \331\210 \330\247\330\271\330\265\330\247\330\250", nullptr));
        neurologyGroup->setTitle(QCoreApplication::translate("neurologyDoctorsIntro", "\331\205\330\272\330\262 \331\210 \330\247\330\271\330\265\330\247\330\250", nullptr));
        DrMahmoudMotamedi->setText(QString());
        DrMotamediName->setText(QCoreApplication::translate("neurologyDoctorsIntro", "\330\257\332\251\330\252\330\261 \331\205\330\255\331\205\331\210\330\257 \331\205\330\271\330\252\331\205\330\257\333\214", nullptr));
        DrMotamediSpecialty->setText(QCoreApplication::translate("neurologyDoctorsIntro", "\331\206\331\210\330\261\331\210\331\204\331\210\332\230\333\214\330\263\330\252", nullptr));
        DrHosseinPourmahmoudian->setText(QString());
        DrMahmoudianName->setText(QCoreApplication::translate("neurologyDoctorsIntro", "\330\257\332\251\330\252\330\261 \330\255\330\263\333\214\331\206 \331\276\331\210\330\261\331\205\330\255\331\205\331\210\330\257\333\214\330\247\331\206", nullptr));
        DrMahmoudianSpecialty->setText(QCoreApplication::translate("neurologyDoctorsIntro", "\331\206\331\210\330\261\331\210\331\204\331\210\332\230\333\214\330\263\330\252", nullptr));
    } // retranslateUi

};

namespace Ui {
    class neurologyDoctorsIntro: public Ui_neurologyDoctorsIntro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEUROLOGYDOCTORSINTRO_H
