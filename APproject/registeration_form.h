#ifndef REGISTERATION_FORM_H
#define REGISTERATION_FORM_H

#include <QMessageBox>
#include<QString>
#include <QDialog>
#include <QWidget>
#include<QGridLayout>
#include<QLabel>
#include<QPushButton>
#include<QLineEdit>
#include<QString>
#include<QSpinBox>
#include<QGroupBox>
#include<QVBoxLayout>
#include<QFile>
#include"customers.h"

namespace Ui {
class Registery_form;
}

class Registery_form : public QDialog, public customers
{
    Q_OBJECT

public:
    explicit Registery_form(QWidget *parent = nullptr);
    ~Registery_form();

public slots:
    void registeration();
    void on_pushbutton_clicked();


private:
//    Ui::Registery_form *ui;
    QGroupBox *grb;
    QGroupBox *grb1;
    QGridLayout *grl;
    QGridLayout *grl1;
    QLabel *lblUser;
    QLabel *lblPass;
    QLabel *lblPassrp;
    QLabel *lblName;
    QLabel *lblAge;
    QLabel *lblEmail;
    QLabel *lblNcode;
    QLabel *lblNumber;
    QLineEdit *ledNumber;
    QLineEdit *ledUser;
    QLineEdit *ledPass;
    QLineEdit *ledPassrp;
    QLineEdit *ledName;
    QLineEdit *ledEmail;
    QLineEdit *ledNcode;
    QPushButton *pbn;
    QPushButton *pbn1;
    QSpinBox *spb;
    QVBoxLayout *vbl;
    QMessageBox *registerStatus;

};

#endif // REGISTERATION_FORM_H
