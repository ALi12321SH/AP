/********************************************************************************
** Form generated from reading UI file 'dentrisrtysection.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DENTRISRTYSECTION_H
#define UI_DENTRISRTYSECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dentrisrtySection
{
public:
    QWidget *centralwidget;
    QLabel *dentistrySection;
    QLabel *BedsNum;
    QLabel *NursesNum;
    QLabel *personnelNumLbl;
    QLabel *doctorsNumLbl;
    QLabel *bedsNumLbl;
    QLabel *PersonnelNum;
    QLabel *DoctorsNum;
    QLabel *nursesNumLbl;
    QLabel *DentistrySectionLabel;

    void setupUi(QMainWindow *dentrisrtySection)
    {
        if (dentrisrtySection->objectName().isEmpty())
            dentrisrtySection->setObjectName(QString::fromUtf8("dentrisrtySection"));
        dentrisrtySection->resize(600, 530);
        centralwidget = new QWidget(dentrisrtySection);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        dentistrySection = new QLabel(centralwidget);
        dentistrySection->setObjectName(QString::fromUtf8("dentistrySection"));
        dentistrySection->setGeometry(QRect(0, 0, 600, 530));
        dentistrySection->setPixmap(QPixmap(QString::fromUtf8(":/dentistrySectionBackground.jpg")));
        BedsNum = new QLabel(centralwidget);
        BedsNum->setObjectName(QString::fromUtf8("BedsNum"));
        BedsNum->setGeometry(QRect(535, 310, 31, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        BedsNum->setFont(font);
        BedsNum->setAlignment(Qt::AlignCenter);
        NursesNum = new QLabel(centralwidget);
        NursesNum->setObjectName(QString::fromUtf8("NursesNum"));
        NursesNum->setGeometry(QRect(535, 190, 31, 31));
        NursesNum->setFont(font);
        NursesNum->setAlignment(Qt::AlignCenter);
        personnelNumLbl = new QLabel(centralwidget);
        personnelNumLbl->setObjectName(QString::fromUtf8("personnelNumLbl"));
        personnelNumLbl->setGeometry(QRect(20, 250, 121, 31));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(false);
        personnelNumLbl->setFont(font1);
        personnelNumLbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doctorsNumLbl = new QLabel(centralwidget);
        doctorsNumLbl->setObjectName(QString::fromUtf8("doctorsNumLbl"));
        doctorsNumLbl->setGeometry(QRect(20, 130, 121, 31));
        doctorsNumLbl->setFont(font1);
        doctorsNumLbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        bedsNumLbl = new QLabel(centralwidget);
        bedsNumLbl->setObjectName(QString::fromUtf8("bedsNumLbl"));
        bedsNumLbl->setGeometry(QRect(20, 310, 121, 31));
        bedsNumLbl->setFont(font1);
        bedsNumLbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        PersonnelNum = new QLabel(centralwidget);
        PersonnelNum->setObjectName(QString::fromUtf8("PersonnelNum"));
        PersonnelNum->setGeometry(QRect(535, 250, 31, 31));
        PersonnelNum->setFont(font);
        PersonnelNum->setAlignment(Qt::AlignCenter);
        DoctorsNum = new QLabel(centralwidget);
        DoctorsNum->setObjectName(QString::fromUtf8("DoctorsNum"));
        DoctorsNum->setGeometry(QRect(535, 130, 31, 31));
        DoctorsNum->setFont(font);
        DoctorsNum->setAlignment(Qt::AlignCenter);
        nursesNumLbl = new QLabel(centralwidget);
        nursesNumLbl->setObjectName(QString::fromUtf8("nursesNumLbl"));
        nursesNumLbl->setGeometry(QRect(20, 190, 121, 31));
        nursesNumLbl->setFont(font1);
        nursesNumLbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        DentistrySectionLabel = new QLabel(centralwidget);
        DentistrySectionLabel->setObjectName(QString::fromUtf8("DentistrySectionLabel"));
        DentistrySectionLabel->setGeometry(QRect(200, 20, 181, 20));
        QFont font2;
        font2.setPointSize(11);
        DentistrySectionLabel->setFont(font2);
        DentistrySectionLabel->setAlignment(Qt::AlignCenter);
        dentrisrtySection->setCentralWidget(centralwidget);

        retranslateUi(dentrisrtySection);

        QMetaObject::connectSlotsByName(dentrisrtySection);
    } // setupUi

    void retranslateUi(QMainWindow *dentrisrtySection)
    {
        dentrisrtySection->setWindowTitle(QCoreApplication::translate("dentrisrtySection", "MainWindow", nullptr));
        dentistrySection->setText(QString());
        BedsNum->setText(QCoreApplication::translate("dentrisrtySection", "6", nullptr));
        NursesNum->setText(QCoreApplication::translate("dentrisrtySection", "6", nullptr));
        personnelNumLbl->setText(QCoreApplication::translate("dentrisrtySection", "\330\252\330\271\330\257\330\247\330\257 \332\251\330\247\330\261\332\251\331\206\330\247\331\206", nullptr));
        doctorsNumLbl->setText(QCoreApplication::translate("dentrisrtySection", "\330\252\330\271\330\257\330\247\330\257 \331\276\330\262\330\264\332\251\330\247\331\206", nullptr));
        bedsNumLbl->setText(QCoreApplication::translate("dentrisrtySection", "\330\252\330\271\330\257\330\247\330\257 \330\252\330\256\330\252 \331\207\330\247", nullptr));
        PersonnelNum->setText(QCoreApplication::translate("dentrisrtySection", "5", nullptr));
        DoctorsNum->setText(QCoreApplication::translate("dentrisrtySection", "2", nullptr));
        nursesNumLbl->setText(QCoreApplication::translate("dentrisrtySection", "\330\252\330\271\330\257\330\247\330\257 \331\276\330\261\330\263\330\252\330\247\330\261", nullptr));
        DentistrySectionLabel->setText(QCoreApplication::translate("dentrisrtySection", "\330\247\331\205\332\251\330\247\331\206\330\247\330\252 \330\250\330\256\330\264 \330\257\331\206\330\257\330\247\331\206\331\276\330\262\330\264\332\251\333\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dentrisrtySection: public Ui_dentrisrtySection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DENTRISRTYSECTION_H
