/********************************************************************************
** Form generated from reading UI file 'userpage.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERPAGE_H
#define UI_USERPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_userpage
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *ledname;
    QLabel *name;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *ledage;
    QLabel *age;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *ledncode;
    QLabel *ncode;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *lednumber;
    QLabel *number;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *ledemali;
    QLabel *email;

    void setupUi(QDialog *userpage)
    {
        if (userpage->objectName().isEmpty())
            userpage->setObjectName(QString::fromUtf8("userpage"));
        userpage->resize(1036, 667);
        verticalLayout = new QVBoxLayout(userpage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        ledname = new QLineEdit(userpage);
        ledname->setObjectName(QString::fromUtf8("ledname"));

        horizontalLayout_2->addWidget(ledname);

        name = new QLabel(userpage);
        name->setObjectName(QString::fromUtf8("name"));

        horizontalLayout_2->addWidget(name);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        ledage = new QLineEdit(userpage);
        ledage->setObjectName(QString::fromUtf8("ledage"));

        horizontalLayout_3->addWidget(ledage);

        age = new QLabel(userpage);
        age->setObjectName(QString::fromUtf8("age"));

        horizontalLayout_3->addWidget(age);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        ledncode = new QLineEdit(userpage);
        ledncode->setObjectName(QString::fromUtf8("ledncode"));

        horizontalLayout_4->addWidget(ledncode);

        ncode = new QLabel(userpage);
        ncode->setObjectName(QString::fromUtf8("ncode"));

        horizontalLayout_4->addWidget(ncode);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        lednumber = new QLineEdit(userpage);
        lednumber->setObjectName(QString::fromUtf8("lednumber"));

        horizontalLayout_5->addWidget(lednumber);

        number = new QLabel(userpage);
        number->setObjectName(QString::fromUtf8("number"));

        horizontalLayout_5->addWidget(number);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        ledemali = new QLineEdit(userpage);
        ledemali->setObjectName(QString::fromUtf8("ledemali"));

        horizontalLayout_6->addWidget(ledemali);

        email = new QLabel(userpage);
        email->setObjectName(QString::fromUtf8("email"));

        horizontalLayout_6->addWidget(email);


        verticalLayout->addLayout(horizontalLayout_6);


        retranslateUi(userpage);

        QMetaObject::connectSlotsByName(userpage);
    } // setupUi

    void retranslateUi(QDialog *userpage)
    {
        userpage->setWindowTitle(QCoreApplication::translate("userpage", "Dialog", nullptr));
        name->setText(QCoreApplication::translate("userpage", "\331\206\330\247\331\205 :", nullptr));
        age->setText(QCoreApplication::translate("userpage", "\330\263\331\206 :", nullptr));
        ncode->setText(QCoreApplication::translate("userpage", "\332\251\330\257\331\205\331\204\333\214 :", nullptr));
        number->setText(QCoreApplication::translate("userpage", "\330\252\331\204\331\201\331\206 :", nullptr));
        email->setText(QCoreApplication::translate("userpage", "\330\247\333\214\331\205\333\214\331\204 :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userpage: public Ui_userpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERPAGE_H
