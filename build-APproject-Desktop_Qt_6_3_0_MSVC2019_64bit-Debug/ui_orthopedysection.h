/********************************************************************************
** Form generated from reading UI file 'orthopedysection.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORTHOPEDYSECTION_H
#define UI_ORTHOPEDYSECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_orthopedySection
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *BedsNum;
    QLabel *NursesNum;
    QLabel *personnelNumLbl;
    QLabel *doctorsNumLbl;
    QLabel *bedsNumLbl;
    QLabel *PersonnelNum;
    QLabel *DoctorsNum;
    QLabel *nursesNumLbl;
    QLabel *OrthopedySectionLabel;

    void setupUi(QMainWindow *orthopedySection)
    {
        if (orthopedySection->objectName().isEmpty())
            orthopedySection->setObjectName(QString::fromUtf8("orthopedySection"));
        orthopedySection->resize(560, 700);
        centralwidget = new QWidget(orthopedySection);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 560, 700));
        label->setPixmap(QPixmap(QString::fromUtf8(":/orthopedySectionBackground.jpg")));
        BedsNum = new QLabel(centralwidget);
        BedsNum->setObjectName(QString::fromUtf8("BedsNum"));
        BedsNum->setGeometry(QRect(490, 340, 31, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        BedsNum->setFont(font);
        BedsNum->setAlignment(Qt::AlignCenter);
        NursesNum = new QLabel(centralwidget);
        NursesNum->setObjectName(QString::fromUtf8("NursesNum"));
        NursesNum->setGeometry(QRect(490, 220, 31, 31));
        NursesNum->setFont(font);
        NursesNum->setAlignment(Qt::AlignCenter);
        personnelNumLbl = new QLabel(centralwidget);
        personnelNumLbl->setObjectName(QString::fromUtf8("personnelNumLbl"));
        personnelNumLbl->setGeometry(QRect(20, 280, 121, 31));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(false);
        personnelNumLbl->setFont(font1);
        personnelNumLbl->setAlignment(Qt::AlignCenter);
        doctorsNumLbl = new QLabel(centralwidget);
        doctorsNumLbl->setObjectName(QString::fromUtf8("doctorsNumLbl"));
        doctorsNumLbl->setGeometry(QRect(20, 160, 121, 31));
        doctorsNumLbl->setFont(font1);
        doctorsNumLbl->setAlignment(Qt::AlignCenter);
        bedsNumLbl = new QLabel(centralwidget);
        bedsNumLbl->setObjectName(QString::fromUtf8("bedsNumLbl"));
        bedsNumLbl->setGeometry(QRect(20, 340, 121, 31));
        bedsNumLbl->setFont(font1);
        bedsNumLbl->setAlignment(Qt::AlignCenter);
        PersonnelNum = new QLabel(centralwidget);
        PersonnelNum->setObjectName(QString::fromUtf8("PersonnelNum"));
        PersonnelNum->setGeometry(QRect(490, 280, 31, 31));
        PersonnelNum->setFont(font);
        PersonnelNum->setAlignment(Qt::AlignCenter);
        DoctorsNum = new QLabel(centralwidget);
        DoctorsNum->setObjectName(QString::fromUtf8("DoctorsNum"));
        DoctorsNum->setGeometry(QRect(490, 160, 31, 31));
        DoctorsNum->setFont(font);
        DoctorsNum->setAlignment(Qt::AlignCenter);
        nursesNumLbl = new QLabel(centralwidget);
        nursesNumLbl->setObjectName(QString::fromUtf8("nursesNumLbl"));
        nursesNumLbl->setGeometry(QRect(20, 220, 121, 31));
        nursesNumLbl->setFont(font1);
        nursesNumLbl->setAlignment(Qt::AlignCenter);
        OrthopedySectionLabel = new QLabel(centralwidget);
        OrthopedySectionLabel->setObjectName(QString::fromUtf8("OrthopedySectionLabel"));
        OrthopedySectionLabel->setGeometry(QRect(200, 30, 181, 20));
        QFont font2;
        font2.setPointSize(11);
        OrthopedySectionLabel->setFont(font2);
        OrthopedySectionLabel->setAlignment(Qt::AlignCenter);
        orthopedySection->setCentralWidget(centralwidget);

        retranslateUi(orthopedySection);

        QMetaObject::connectSlotsByName(orthopedySection);
    } // setupUi

    void retranslateUi(QMainWindow *orthopedySection)
    {
        orthopedySection->setWindowTitle(QCoreApplication::translate("orthopedySection", "MainWindow", nullptr));
        label->setText(QString());
        BedsNum->setText(QCoreApplication::translate("orthopedySection", "6", nullptr));
        NursesNum->setText(QCoreApplication::translate("orthopedySection", "6", nullptr));
        personnelNumLbl->setText(QCoreApplication::translate("orthopedySection", "\330\252\330\271\330\257\330\247\330\257 \332\251\330\247\330\261\332\251\331\206\330\247\331\206", nullptr));
        doctorsNumLbl->setText(QCoreApplication::translate("orthopedySection", "\330\252\330\271\330\257\330\247\330\257 \331\276\330\262\330\264\332\251\330\247\331\206", nullptr));
        bedsNumLbl->setText(QCoreApplication::translate("orthopedySection", "\330\252\330\271\330\257\330\247\330\257 \330\252\330\256\330\252 \331\207\330\247", nullptr));
        PersonnelNum->setText(QCoreApplication::translate("orthopedySection", "5", nullptr));
        DoctorsNum->setText(QCoreApplication::translate("orthopedySection", "2", nullptr));
        nursesNumLbl->setText(QCoreApplication::translate("orthopedySection", "\330\252\330\271\330\257\330\247\330\257 \331\276\330\261\330\263\330\252\330\247\330\261", nullptr));
        OrthopedySectionLabel->setText(QCoreApplication::translate("orthopedySection", "\330\247\331\205\332\251\330\247\331\206\330\247\330\252 \330\250\330\256\330\264 \330\247\330\261\330\252\331\210\331\276\330\257\333\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class orthopedySection: public Ui_orthopedySection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORTHOPEDYSECTION_H
