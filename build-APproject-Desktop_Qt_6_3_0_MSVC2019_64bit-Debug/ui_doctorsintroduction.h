/********************************************************************************
** Form generated from reading UI file 'doctorsintroduction.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCTORSINTRODUCTION_H
#define UI_DOCTORSINTRODUCTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_doctorsIntroduction
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *NeurologyDoctorsPB;
    QPushButton *dentistDoctorPB;
    QPushButton *digestionDoctorsPB;
    QPushButton *heartDoctorsPB;
    QLabel *doctorsIntroductionlbl;
    QPushButton *orthopedistDoctorsPB;

    void setupUi(QMainWindow *doctorsIntroduction)
    {
        if (doctorsIntroduction->objectName().isEmpty())
            doctorsIntroduction->setObjectName(QString::fromUtf8("doctorsIntroduction"));
        doctorsIntroduction->resize(680, 361);
        centralwidget = new QWidget(doctorsIntroduction);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 680, 361));
        label->setPixmap(QPixmap(QString::fromUtf8(":/doctorsIntroductionBackground.jpg")));
        NeurologyDoctorsPB = new QPushButton(centralwidget);
        NeurologyDoctorsPB->setObjectName(QString::fromUtf8("NeurologyDoctorsPB"));
        NeurologyDoctorsPB->setGeometry(QRect(210, 230, 281, 24));
        dentistDoctorPB = new QPushButton(centralwidget);
        dentistDoctorPB->setObjectName(QString::fromUtf8("dentistDoctorPB"));
        dentistDoctorPB->setGeometry(QRect(210, 110, 281, 24));
        digestionDoctorsPB = new QPushButton(centralwidget);
        digestionDoctorsPB->setObjectName(QString::fromUtf8("digestionDoctorsPB"));
        digestionDoctorsPB->setGeometry(QRect(210, 140, 281, 24));
        heartDoctorsPB = new QPushButton(centralwidget);
        heartDoctorsPB->setObjectName(QString::fromUtf8("heartDoctorsPB"));
        heartDoctorsPB->setGeometry(QRect(210, 200, 281, 24));
        doctorsIntroductionlbl = new QLabel(centralwidget);
        doctorsIntroductionlbl->setObjectName(QString::fromUtf8("doctorsIntroductionlbl"));
        doctorsIntroductionlbl->setGeometry(QRect(208, 20, 281, 20));
        doctorsIntroductionlbl->setAlignment(Qt::AlignCenter);
        orthopedistDoctorsPB = new QPushButton(centralwidget);
        orthopedistDoctorsPB->setObjectName(QString::fromUtf8("orthopedistDoctorsPB"));
        orthopedistDoctorsPB->setGeometry(QRect(210, 170, 281, 24));
        doctorsIntroduction->setCentralWidget(centralwidget);

        retranslateUi(doctorsIntroduction);

        QMetaObject::connectSlotsByName(doctorsIntroduction);
    } // setupUi

    void retranslateUi(QMainWindow *doctorsIntroduction)
    {
        doctorsIntroduction->setWindowTitle(QCoreApplication::translate("doctorsIntroduction", "\331\205\330\271\330\261\331\201\333\214 \331\276\330\262\330\264\332\251\330\247\331\206", nullptr));
        label->setText(QString());
        NeurologyDoctorsPB->setText(QCoreApplication::translate("doctorsIntroduction", "\331\205\330\272\330\262 \331\210 \330\247\330\271\330\265\330\247\330\250", nullptr));
        dentistDoctorPB->setText(QCoreApplication::translate("doctorsIntroduction", "\330\257\331\206\330\257\330\247\331\206\331\276\330\262\330\264\332\251\333\214", nullptr));
        digestionDoctorsPB->setText(QCoreApplication::translate("doctorsIntroduction", "\332\257\331\210\330\247\330\261\330\264", nullptr));
        heartDoctorsPB->setText(QCoreApplication::translate("doctorsIntroduction", "\330\257\330\247\330\256\331\204\333\214 \331\202\331\204\330\250", nullptr));
        doctorsIntroductionlbl->setText(QCoreApplication::translate("doctorsIntroduction", "\330\250\330\261\330\247\333\214 \333\214\330\247\331\201\330\252\331\206 \331\276\330\262\330\264\332\251 \331\205\331\210\330\261\330\257 \331\206\330\270\330\261\330\214\330\261\331\210\333\214 \330\250\330\256\330\264 \331\205\330\261\330\250\331\210\330\267\331\207 \332\251\331\204\333\214\332\251 \332\251\331\206\333\214\330\257", nullptr));
        orthopedistDoctorsPB->setText(QCoreApplication::translate("doctorsIntroduction", "\330\247\330\261\330\252\331\210\331\276\330\257\333\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class doctorsIntroduction: public Ui_doctorsIntroduction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCTORSINTRODUCTION_H
