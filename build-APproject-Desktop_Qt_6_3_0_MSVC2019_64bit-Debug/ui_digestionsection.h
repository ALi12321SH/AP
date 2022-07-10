/********************************************************************************
** Form generated from reading UI file 'digestionsection.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIGESTIONSECTION_H
#define UI_DIGESTIONSECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_digestionSection
{
public:
    QWidget *centralwidget;
    QLabel *digestionSectionBackground;
    QLabel *BedsNum;
    QLabel *NursesNum;
    QLabel *personnelNumLbl;
    QLabel *doctorsNumLbl;
    QLabel *bedsNumLbl;
    QLabel *PersonnelNum;
    QLabel *DoctorsNum;
    QLabel *nursesNumLbl;
    QLabel *DigestionSectionLabel;

    void setupUi(QMainWindow *digestionSection)
    {
        if (digestionSection->objectName().isEmpty())
            digestionSection->setObjectName(QString::fromUtf8("digestionSection"));
        digestionSection->resize(822, 522);
        centralwidget = new QWidget(digestionSection);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        digestionSectionBackground = new QLabel(centralwidget);
        digestionSectionBackground->setObjectName(QString::fromUtf8("digestionSectionBackground"));
        digestionSectionBackground->setGeometry(QRect(0, 0, 822, 522));
        digestionSectionBackground->setPixmap(QPixmap(QString::fromUtf8(":/digestionSectionBackground.jpg")));
        BedsNum = new QLabel(centralwidget);
        BedsNum->setObjectName(QString::fromUtf8("BedsNum"));
        BedsNum->setGeometry(QRect(690, 330, 31, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        BedsNum->setFont(font);
        BedsNum->setAlignment(Qt::AlignCenter);
        NursesNum = new QLabel(centralwidget);
        NursesNum->setObjectName(QString::fromUtf8("NursesNum"));
        NursesNum->setGeometry(QRect(690, 210, 31, 31));
        NursesNum->setFont(font);
        NursesNum->setAlignment(Qt::AlignCenter);
        personnelNumLbl = new QLabel(centralwidget);
        personnelNumLbl->setObjectName(QString::fromUtf8("personnelNumLbl"));
        personnelNumLbl->setGeometry(QRect(30, 260, 121, 31));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(false);
        personnelNumLbl->setFont(font1);
        personnelNumLbl->setAlignment(Qt::AlignCenter);
        doctorsNumLbl = new QLabel(centralwidget);
        doctorsNumLbl->setObjectName(QString::fromUtf8("doctorsNumLbl"));
        doctorsNumLbl->setGeometry(QRect(30, 140, 121, 31));
        doctorsNumLbl->setFont(font1);
        doctorsNumLbl->setAlignment(Qt::AlignCenter);
        bedsNumLbl = new QLabel(centralwidget);
        bedsNumLbl->setObjectName(QString::fromUtf8("bedsNumLbl"));
        bedsNumLbl->setGeometry(QRect(30, 320, 121, 31));
        bedsNumLbl->setFont(font1);
        bedsNumLbl->setAlignment(Qt::AlignCenter);
        PersonnelNum = new QLabel(centralwidget);
        PersonnelNum->setObjectName(QString::fromUtf8("PersonnelNum"));
        PersonnelNum->setGeometry(QRect(690, 270, 31, 31));
        PersonnelNum->setFont(font);
        PersonnelNum->setAlignment(Qt::AlignCenter);
        DoctorsNum = new QLabel(centralwidget);
        DoctorsNum->setObjectName(QString::fromUtf8("DoctorsNum"));
        DoctorsNum->setGeometry(QRect(690, 150, 31, 31));
        DoctorsNum->setFont(font);
        DoctorsNum->setAlignment(Qt::AlignCenter);
        nursesNumLbl = new QLabel(centralwidget);
        nursesNumLbl->setObjectName(QString::fromUtf8("nursesNumLbl"));
        nursesNumLbl->setGeometry(QRect(30, 200, 121, 31));
        nursesNumLbl->setFont(font1);
        nursesNumLbl->setAlignment(Qt::AlignCenter);
        DigestionSectionLabel = new QLabel(centralwidget);
        DigestionSectionLabel->setObjectName(QString::fromUtf8("DigestionSectionLabel"));
        DigestionSectionLabel->setGeometry(QRect(340, 20, 141, 20));
        QFont font2;
        font2.setPointSize(11);
        DigestionSectionLabel->setFont(font2);
        DigestionSectionLabel->setAlignment(Qt::AlignCenter);
        digestionSection->setCentralWidget(centralwidget);

        retranslateUi(digestionSection);

        QMetaObject::connectSlotsByName(digestionSection);
    } // setupUi

    void retranslateUi(QMainWindow *digestionSection)
    {
        digestionSection->setWindowTitle(QCoreApplication::translate("digestionSection", "MainWindow", nullptr));
        digestionSectionBackground->setText(QString());
        BedsNum->setText(QCoreApplication::translate("digestionSection", "6", nullptr));
        NursesNum->setText(QCoreApplication::translate("digestionSection", "6", nullptr));
        personnelNumLbl->setText(QCoreApplication::translate("digestionSection", "\330\252\330\271\330\257\330\247\330\257 \332\251\330\247\330\261\332\251\331\206\330\247\331\206", nullptr));
        doctorsNumLbl->setText(QCoreApplication::translate("digestionSection", "\330\252\330\271\330\257\330\247\330\257 \331\276\330\262\330\264\332\251\330\247\331\206", nullptr));
        bedsNumLbl->setText(QCoreApplication::translate("digestionSection", "\330\252\330\271\330\257\330\247\330\257 \330\252\330\256\330\252 \331\207\330\247", nullptr));
        PersonnelNum->setText(QCoreApplication::translate("digestionSection", "5", nullptr));
        DoctorsNum->setText(QCoreApplication::translate("digestionSection", "2", nullptr));
        nursesNumLbl->setText(QCoreApplication::translate("digestionSection", "\330\252\330\271\330\257\330\247\330\257 \331\276\330\261\330\263\330\252\330\247\330\261", nullptr));
        DigestionSectionLabel->setText(QCoreApplication::translate("digestionSection", "\330\247\331\205\332\251\330\247\331\206\330\247\330\252 \330\250\330\256\330\264 \332\257\331\210\330\247\330\261\330\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class digestionSection: public Ui_digestionSection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIGESTIONSECTION_H
