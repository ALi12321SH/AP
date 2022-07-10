/********************************************************************************
** Form generated from reading UI file 'heartsection.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEARTSECTION_H
#define UI_HEARTSECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_heartSection
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *personnelNumLbl;
    QLabel *nursesNumLbl;
    QLabel *PersonnelNum;
    QLabel *NursesNum;
    QLabel *BedsNum;
    QLabel *doctorsNumLbl;
    QLabel *bedsNumLbl;
    QLabel *DoctorsNum;
    QLabel *HeartSectionLabel;

    void setupUi(QMainWindow *heartSection)
    {
        if (heartSection->objectName().isEmpty())
            heartSection->setObjectName(QString::fromUtf8("heartSection"));
        heartSection->resize(736, 545);
        centralwidget = new QWidget(heartSection);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 736, 545));
        label->setPixmap(QPixmap(QString::fromUtf8(":/heartSectionBackground.jpg")));
        personnelNumLbl = new QLabel(centralwidget);
        personnelNumLbl->setObjectName(QString::fromUtf8("personnelNumLbl"));
        personnelNumLbl->setGeometry(QRect(80, 270, 121, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(false);
        personnelNumLbl->setFont(font);
        personnelNumLbl->setAlignment(Qt::AlignCenter);
        nursesNumLbl = new QLabel(centralwidget);
        nursesNumLbl->setObjectName(QString::fromUtf8("nursesNumLbl"));
        nursesNumLbl->setGeometry(QRect(80, 210, 121, 31));
        nursesNumLbl->setFont(font);
        nursesNumLbl->setAlignment(Qt::AlignCenter);
        PersonnelNum = new QLabel(centralwidget);
        PersonnelNum->setObjectName(QString::fromUtf8("PersonnelNum"));
        PersonnelNum->setGeometry(QRect(595, 270, 31, 31));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        PersonnelNum->setFont(font1);
        PersonnelNum->setAlignment(Qt::AlignCenter);
        NursesNum = new QLabel(centralwidget);
        NursesNum->setObjectName(QString::fromUtf8("NursesNum"));
        NursesNum->setGeometry(QRect(595, 210, 31, 31));
        NursesNum->setFont(font1);
        NursesNum->setAlignment(Qt::AlignCenter);
        BedsNum = new QLabel(centralwidget);
        BedsNum->setObjectName(QString::fromUtf8("BedsNum"));
        BedsNum->setGeometry(QRect(595, 330, 31, 31));
        BedsNum->setFont(font1);
        BedsNum->setAlignment(Qt::AlignCenter);
        doctorsNumLbl = new QLabel(centralwidget);
        doctorsNumLbl->setObjectName(QString::fromUtf8("doctorsNumLbl"));
        doctorsNumLbl->setGeometry(QRect(80, 150, 121, 31));
        doctorsNumLbl->setFont(font);
        doctorsNumLbl->setAlignment(Qt::AlignCenter);
        bedsNumLbl = new QLabel(centralwidget);
        bedsNumLbl->setObjectName(QString::fromUtf8("bedsNumLbl"));
        bedsNumLbl->setGeometry(QRect(80, 330, 121, 31));
        bedsNumLbl->setFont(font);
        bedsNumLbl->setAlignment(Qt::AlignCenter);
        DoctorsNum = new QLabel(centralwidget);
        DoctorsNum->setObjectName(QString::fromUtf8("DoctorsNum"));
        DoctorsNum->setGeometry(QRect(595, 150, 31, 31));
        DoctorsNum->setFont(font1);
        DoctorsNum->setAlignment(Qt::AlignCenter);
        HeartSectionLabel = new QLabel(centralwidget);
        HeartSectionLabel->setObjectName(QString::fromUtf8("HeartSectionLabel"));
        HeartSectionLabel->setGeometry(QRect(290, 20, 181, 20));
        QFont font2;
        font2.setPointSize(11);
        HeartSectionLabel->setFont(font2);
        HeartSectionLabel->setAlignment(Qt::AlignCenter);
        heartSection->setCentralWidget(centralwidget);

        retranslateUi(heartSection);

        QMetaObject::connectSlotsByName(heartSection);
    } // setupUi

    void retranslateUi(QMainWindow *heartSection)
    {
        heartSection->setWindowTitle(QCoreApplication::translate("heartSection", "MainWindow", nullptr));
        label->setText(QString());
        personnelNumLbl->setText(QCoreApplication::translate("heartSection", "\330\252\330\271\330\257\330\247\330\257 \332\251\330\247\330\261\332\251\331\206\330\247\331\206", nullptr));
        nursesNumLbl->setText(QCoreApplication::translate("heartSection", "\330\252\330\271\330\257\330\247\330\257 \331\276\330\261\330\263\330\252\330\247\330\261", nullptr));
        PersonnelNum->setText(QCoreApplication::translate("heartSection", "5", nullptr));
        NursesNum->setText(QCoreApplication::translate("heartSection", "6", nullptr));
        BedsNum->setText(QCoreApplication::translate("heartSection", "6", nullptr));
        doctorsNumLbl->setText(QCoreApplication::translate("heartSection", "\330\252\330\271\330\257\330\247\330\257 \331\276\330\262\330\264\332\251\330\247\331\206", nullptr));
        bedsNumLbl->setText(QCoreApplication::translate("heartSection", "\330\252\330\271\330\257\330\247\330\257 \330\252\330\256\330\252 \331\207\330\247", nullptr));
        DoctorsNum->setText(QCoreApplication::translate("heartSection", "2", nullptr));
        HeartSectionLabel->setText(QCoreApplication::translate("heartSection", "\330\247\331\205\332\251\330\247\331\206\330\247\330\252 \330\250\330\256\330\264 \331\202\331\204\330\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class heartSection: public Ui_heartSection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEARTSECTION_H
