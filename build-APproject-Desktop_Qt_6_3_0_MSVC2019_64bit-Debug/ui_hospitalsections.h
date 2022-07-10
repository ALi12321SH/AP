/********************************************************************************
** Form generated from reading UI file 'hospitalsections.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOSPITALSECTIONS_H
#define UI_HOSPITALSECTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hospitalSections
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *hospitalSectionslbl;
    QPushButton *dentistrySectionPB;
    QPushButton *NeurologySectionPB;
    QPushButton *orthopedySectionPB;
    QPushButton *heartSectionPB;
    QPushButton *digestionSectionPB;

    void setupUi(QMainWindow *hospitalSections)
    {
        if (hospitalSections->objectName().isEmpty())
            hospitalSections->setObjectName(QString::fromUtf8("hospitalSections"));
        hospitalSections->resize(750, 450);
        centralwidget = new QWidget(hospitalSections);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 750, 450));
        label->setPixmap(QPixmap(QString::fromUtf8(":/hospitalSectionsBackground.jpg")));
        hospitalSectionslbl = new QLabel(centralwidget);
        hospitalSectionslbl->setObjectName(QString::fromUtf8("hospitalSectionslbl"));
        hospitalSectionslbl->setGeometry(QRect(200, 30, 291, 20));
        hospitalSectionslbl->setAlignment(Qt::AlignCenter);
        dentistrySectionPB = new QPushButton(centralwidget);
        dentistrySectionPB->setObjectName(QString::fromUtf8("dentistrySectionPB"));
        dentistrySectionPB->setGeometry(QRect(200, 210, 281, 24));
        NeurologySectionPB = new QPushButton(centralwidget);
        NeurologySectionPB->setObjectName(QString::fromUtf8("NeurologySectionPB"));
        NeurologySectionPB->setGeometry(QRect(200, 330, 281, 24));
        orthopedySectionPB = new QPushButton(centralwidget);
        orthopedySectionPB->setObjectName(QString::fromUtf8("orthopedySectionPB"));
        orthopedySectionPB->setGeometry(QRect(200, 270, 281, 24));
        heartSectionPB = new QPushButton(centralwidget);
        heartSectionPB->setObjectName(QString::fromUtf8("heartSectionPB"));
        heartSectionPB->setGeometry(QRect(200, 300, 281, 24));
        digestionSectionPB = new QPushButton(centralwidget);
        digestionSectionPB->setObjectName(QString::fromUtf8("digestionSectionPB"));
        digestionSectionPB->setGeometry(QRect(200, 240, 281, 24));
        hospitalSections->setCentralWidget(centralwidget);

        retranslateUi(hospitalSections);

        QMetaObject::connectSlotsByName(hospitalSections);
    } // setupUi

    void retranslateUi(QMainWindow *hospitalSections)
    {
        hospitalSections->setWindowTitle(QCoreApplication::translate("hospitalSections", "\331\205\330\271\330\261\331\201\333\214 \330\250\330\256\330\264 \331\207\330\247\333\214 \330\250\333\214\331\205\330\247\330\261\330\263\330\252\330\247\331\206", nullptr));
        label->setText(QString());
        hospitalSectionslbl->setText(QCoreApplication::translate("hospitalSections", "\330\250\330\261\330\247\333\214 \332\251\330\263\330\250 \330\247\330\267\331\204\330\247\330\271\330\247\330\252 \330\250\333\214\330\264\330\252\330\261 \330\261\331\210\333\214 \330\250\330\256\330\264 \331\205\331\210\330\261\330\257 \331\206\330\270\330\261 \332\251\331\204\333\214\332\251 \332\251\331\206\333\214\330\257", nullptr));
        dentistrySectionPB->setText(QCoreApplication::translate("hospitalSections", "\330\250\330\256\330\264 \330\257\331\206\330\257\330\247\331\206\331\276\330\262\330\264\332\251\333\214", nullptr));
        NeurologySectionPB->setText(QCoreApplication::translate("hospitalSections", "\330\250\330\256\330\264 \331\205\330\272\330\262 \331\210 \330\247\330\271\330\265\330\247\330\250", nullptr));
        orthopedySectionPB->setText(QCoreApplication::translate("hospitalSections", "\330\250\330\256\330\264 \330\247\330\261\330\252\331\210\331\276\330\257\333\214", nullptr));
        heartSectionPB->setText(QCoreApplication::translate("hospitalSections", "\330\250\330\256\330\264 \330\257\330\247\330\256\331\204\333\214 \331\202\331\204\330\250", nullptr));
        digestionSectionPB->setText(QCoreApplication::translate("hospitalSections", "\330\250\330\256\330\264 \332\257\331\210\330\247\330\261\330\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class hospitalSections: public Ui_hospitalSections {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOSPITALSECTIONS_H
