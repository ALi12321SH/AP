/********************************************************************************
** Form generated from reading UI file 'neurologysection.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEUROLOGYSECTION_H
#define UI_NEUROLOGYSECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_neurologySection
{
public:
    QWidget *centralwidget;
    QLabel *neurologySectionBackground;
    QLabel *BedsNum;
    QLabel *NursesNum;
    QLabel *personnelNumLbl;
    QLabel *doctorsNumLbl;
    QLabel *bedsNumLbl;
    QLabel *PersonnelNum;
    QLabel *DoctorsNum;
    QLabel *nursesNumLbl;
    QLabel *NeorologySectionLabel;

    void setupUi(QMainWindow *neurologySection)
    {
        if (neurologySection->objectName().isEmpty())
            neurologySection->setObjectName(QString::fromUtf8("neurologySection"));
        neurologySection->resize(700, 420);
        centralwidget = new QWidget(neurologySection);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        neurologySectionBackground = new QLabel(centralwidget);
        neurologySectionBackground->setObjectName(QString::fromUtf8("neurologySectionBackground"));
        neurologySectionBackground->setGeometry(QRect(0, 0, 700, 420));
        neurologySectionBackground->setPixmap(QPixmap(QString::fromUtf8(":/neurologySectionBackground.jpg")));
        BedsNum = new QLabel(centralwidget);
        BedsNum->setObjectName(QString::fromUtf8("BedsNum"));
        BedsNum->setGeometry(QRect(570, 310, 31, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        BedsNum->setFont(font);
        BedsNum->setAlignment(Qt::AlignCenter);
        NursesNum = new QLabel(centralwidget);
        NursesNum->setObjectName(QString::fromUtf8("NursesNum"));
        NursesNum->setGeometry(QRect(570, 190, 31, 31));
        NursesNum->setFont(font);
        NursesNum->setAlignment(Qt::AlignCenter);
        personnelNumLbl = new QLabel(centralwidget);
        personnelNumLbl->setObjectName(QString::fromUtf8("personnelNumLbl"));
        personnelNumLbl->setGeometry(QRect(55, 250, 121, 31));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(false);
        personnelNumLbl->setFont(font1);
        personnelNumLbl->setAlignment(Qt::AlignCenter);
        doctorsNumLbl = new QLabel(centralwidget);
        doctorsNumLbl->setObjectName(QString::fromUtf8("doctorsNumLbl"));
        doctorsNumLbl->setGeometry(QRect(55, 130, 121, 31));
        doctorsNumLbl->setFont(font1);
        doctorsNumLbl->setAlignment(Qt::AlignCenter);
        bedsNumLbl = new QLabel(centralwidget);
        bedsNumLbl->setObjectName(QString::fromUtf8("bedsNumLbl"));
        bedsNumLbl->setGeometry(QRect(55, 310, 121, 31));
        bedsNumLbl->setFont(font1);
        bedsNumLbl->setAlignment(Qt::AlignCenter);
        PersonnelNum = new QLabel(centralwidget);
        PersonnelNum->setObjectName(QString::fromUtf8("PersonnelNum"));
        PersonnelNum->setGeometry(QRect(570, 250, 31, 31));
        PersonnelNum->setFont(font);
        PersonnelNum->setAlignment(Qt::AlignCenter);
        DoctorsNum = new QLabel(centralwidget);
        DoctorsNum->setObjectName(QString::fromUtf8("DoctorsNum"));
        DoctorsNum->setGeometry(QRect(570, 130, 31, 31));
        DoctorsNum->setFont(font);
        DoctorsNum->setAlignment(Qt::AlignCenter);
        nursesNumLbl = new QLabel(centralwidget);
        nursesNumLbl->setObjectName(QString::fromUtf8("nursesNumLbl"));
        nursesNumLbl->setGeometry(QRect(55, 190, 121, 31));
        nursesNumLbl->setFont(font1);
        nursesNumLbl->setAlignment(Qt::AlignCenter);
        NeorologySectionLabel = new QLabel(centralwidget);
        NeorologySectionLabel->setObjectName(QString::fromUtf8("NeorologySectionLabel"));
        NeorologySectionLabel->setGeometry(QRect(260, 30, 181, 20));
        QFont font2;
        font2.setPointSize(11);
        NeorologySectionLabel->setFont(font2);
        NeorologySectionLabel->setAlignment(Qt::AlignCenter);
        neurologySection->setCentralWidget(centralwidget);

        retranslateUi(neurologySection);

        QMetaObject::connectSlotsByName(neurologySection);
    } // setupUi

    void retranslateUi(QMainWindow *neurologySection)
    {
        neurologySection->setWindowTitle(QCoreApplication::translate("neurologySection", "MainWindow", nullptr));
        neurologySectionBackground->setText(QString());
        BedsNum->setText(QCoreApplication::translate("neurologySection", "6", nullptr));
        NursesNum->setText(QCoreApplication::translate("neurologySection", "6", nullptr));
        personnelNumLbl->setText(QCoreApplication::translate("neurologySection", "\330\252\330\271\330\257\330\247\330\257 \332\251\330\247\330\261\332\251\331\206\330\247\331\206", nullptr));
        doctorsNumLbl->setText(QCoreApplication::translate("neurologySection", "\330\252\330\271\330\257\330\247\330\257 \331\276\330\262\330\264\332\251\330\247\331\206", nullptr));
        bedsNumLbl->setText(QCoreApplication::translate("neurologySection", "\330\252\330\271\330\257\330\247\330\257 \330\252\330\256\330\252 \331\207\330\247", nullptr));
        PersonnelNum->setText(QCoreApplication::translate("neurologySection", "5", nullptr));
        DoctorsNum->setText(QCoreApplication::translate("neurologySection", "2", nullptr));
        nursesNumLbl->setText(QCoreApplication::translate("neurologySection", "\330\252\330\271\330\257\330\247\330\257 \331\276\330\261\330\263\330\252\330\247\330\261", nullptr));
        NeorologySectionLabel->setText(QCoreApplication::translate("neurologySection", "\330\247\331\205\332\251\330\247\331\206\330\247\330\252 \330\250\330\256\330\264 \331\205\330\272\330\262 \331\210 \330\247\330\271\330\265\330\247\330\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class neurologySection: public Ui_neurologySection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEUROLOGYSECTION_H
