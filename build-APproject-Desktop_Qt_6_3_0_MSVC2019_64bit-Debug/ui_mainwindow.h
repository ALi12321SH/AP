/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwindow
{
public:
    QWidget *centralwidget;
    QLabel *mainBackground;
    QPushButton *servicesPB;
    QPushButton *registerPB;
    QLabel *welcomeLabel;
    QPushButton *loginPB;
    QPushButton *doctorsPB;

    void setupUi(QMainWindow *mainwindow)
    {
        if (mainwindow->objectName().isEmpty())
            mainwindow->setObjectName(QString::fromUtf8("mainwindow"));
        mainwindow->resize(620, 413);
        centralwidget = new QWidget(mainwindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        mainBackground = new QLabel(centralwidget);
        mainBackground->setObjectName(QString::fromUtf8("mainBackground"));
        mainBackground->setGeometry(QRect(0, 0, 620, 413));
        mainBackground->setPixmap(QPixmap(QString::fromUtf8(":/mainBackground.jpg")));
        servicesPB = new QPushButton(centralwidget);
        servicesPB->setObjectName(QString::fromUtf8("servicesPB"));
        servicesPB->setGeometry(QRect(140, 240, 351, 24));
        registerPB = new QPushButton(centralwidget);
        registerPB->setObjectName(QString::fromUtf8("registerPB"));
        registerPB->setGeometry(QRect(139, 150, 351, 24));
        welcomeLabel = new QLabel(centralwidget);
        welcomeLabel->setObjectName(QString::fromUtf8("welcomeLabel"));
        welcomeLabel->setGeometry(QRect(220, 20, 181, 20));
        loginPB = new QPushButton(centralwidget);
        loginPB->setObjectName(QString::fromUtf8("loginPB"));
        loginPB->setGeometry(QRect(139, 180, 351, 24));
        doctorsPB = new QPushButton(centralwidget);
        doctorsPB->setObjectName(QString::fromUtf8("doctorsPB"));
        doctorsPB->setGeometry(QRect(140, 210, 351, 24));
        mainwindow->setCentralWidget(centralwidget);

        retranslateUi(mainwindow);

        QMetaObject::connectSlotsByName(mainwindow);
    } // setupUi

    void retranslateUi(QMainWindow *mainwindow)
    {
        mainwindow->setWindowTitle(QCoreApplication::translate("mainwindow", "mainwindow", nullptr));
        mainBackground->setText(QString());
        servicesPB->setText(QCoreApplication::translate("mainwindow", "\331\205\330\271\330\261\331\201\333\214 \330\250\330\256\330\264 \331\207\330\247\333\214 \330\250\333\214\331\205\330\247\330\261\330\263\330\252\330\247\331\206", nullptr));
        registerPB->setText(QCoreApplication::translate("mainwindow", "\330\253\330\250\330\252 \331\206\330\247\331\205", nullptr));
        welcomeLabel->setText(QCoreApplication::translate("mainwindow", "\330\250\331\207 \330\263\330\247\331\205\330\247\331\206\331\207 \333\214 \330\250\333\214\331\205\330\247\330\261\330\263\330\252\330\247\331\206 \330\256\331\210\330\264 \330\242\331\205\330\257\333\214\330\257", nullptr));
        loginPB->setText(QCoreApplication::translate("mainwindow", "\331\210\330\261\331\210\330\257", nullptr));
        doctorsPB->setText(QCoreApplication::translate("mainwindow", "\331\276\330\262\330\264\332\251\330\247\331\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainwindow: public Ui_mainwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
