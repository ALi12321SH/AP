/********************************************************************************
** Form generated from reading UI file 'doctors.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCTORS_H
#define UI_DOCTORS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_doctors
{
public:
    QWidget *centralwidget;
    QLabel *DoctorsBackground;
    QLabel *doctorsLabel;
    QPushButton *introPB;
    QPushButton *schedulePB;

    void setupUi(QMainWindow *doctors)
    {
        if (doctors->objectName().isEmpty())
            doctors->setObjectName(QString::fromUtf8("doctors"));
        doctors->resize(330, 450);
        centralwidget = new QWidget(doctors);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        DoctorsBackground = new QLabel(centralwidget);
        DoctorsBackground->setObjectName(QString::fromUtf8("DoctorsBackground"));
        DoctorsBackground->setGeometry(QRect(0, 0, 330, 450));
        DoctorsBackground->setPixmap(QPixmap(QString::fromUtf8(":/DoctorsBackground.png")));
        doctorsLabel = new QLabel(centralwidget);
        doctorsLabel->setObjectName(QString::fromUtf8("doctorsLabel"));
        doctorsLabel->setGeometry(QRect(60, 20, 211, 20));
        introPB = new QPushButton(centralwidget);
        introPB->setObjectName(QString::fromUtf8("introPB"));
        introPB->setGeometry(QRect(20, 260, 291, 24));
        schedulePB = new QPushButton(centralwidget);
        schedulePB->setObjectName(QString::fromUtf8("schedulePB"));
        schedulePB->setGeometry(QRect(20, 300, 291, 24));
        doctors->setCentralWidget(centralwidget);

        retranslateUi(doctors);

        QMetaObject::connectSlotsByName(doctors);
    } // setupUi

    void retranslateUi(QMainWindow *doctors)
    {
        doctors->setWindowTitle(QCoreApplication::translate("doctors", "\331\276\330\262\330\264\332\251\330\247\331\206", nullptr));
        DoctorsBackground->setText(QString());
        doctorsLabel->setText(QCoreApplication::translate("doctors", "\331\204\330\267\331\201\330\247 \332\257\330\262\333\214\331\206\331\207 \333\214 \331\205\331\210\330\261\330\257 \331\206\330\270\330\261 \330\256\331\210\330\257 \330\261\330\247 \330\247\331\206\330\252\330\256\330\247\330\250 \332\251\331\206\333\214\330\257", nullptr));
        introPB->setText(QCoreApplication::translate("doctors", "\331\205\330\271\330\261\331\201\333\214 \331\276\330\262\330\264\332\251\330\247\331\206", nullptr));
        schedulePB->setText(QCoreApplication::translate("doctors", "\330\250\330\261\331\206\330\247\331\205\331\207 \333\214 \331\276\330\262\330\264\332\251\330\247\331\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class doctors: public Ui_doctors {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCTORS_H
