#include <iostream>
#include <QMessageBox>
#include <QAbstractButton>
#include "registeration_form.h"
#include "mainwindow.h"

using namespace std;

Registery_form::Registery_form(QWidget *parent) :
    QDialog(parent)
{
//    ui->setupUi(this);
    setWindowTitle("registeration_form");
    vbl = new QVBoxLayout();
    grb = new QGroupBox();
    grb1 = new QGroupBox();
    grl= new QGridLayout();
    grl1 = new QGridLayout();
    lblUser= new QLabel();
    lblPass = new QLabel();
    lblPassrp = new QLabel();
    lblName= new QLabel();
    lblAge = new QLabel();
    lblEmail = new QLabel();
    lblNcode = new QLabel();
    lblNumber = new QLabel;
    ledNumber = new QLineEdit;
    ledUser = new QLineEdit();
    ledPass = new QLineEdit();
    ledPassrp = new QLineEdit();
    ledName = new QLineEdit();
    ledEmail = new QLineEdit();
    ledNcode = new QLineEdit();
    pbn = new QPushButton("save");
    spb = new QSpinBox();
    registerStatus = new QMessageBox(this);
    //grl->setSizeConstraint(QLayout::SetFixedSize);
    lblName->setText("Name :");
    lblName->setStyleSheet("color : aquamarine;");
    grl->addWidget(lblName,0,0);
    grl->addWidget(ledName,0,1,1,2);
    ledName->setPlaceholderText("نام‌‌و‌نام‌خانوادگی");
    ledName->setStyleSheet("background-color : black ; color : lime;");
    lblAge->setText("Age :");
    lblAge->setStyleSheet("color : aquamarine;");
    grl->addWidget(lblAge,0,3);
    grl->addWidget(spb,0,4);
    spb->setPrefix("سن: ");
    spb->setStyleSheet("background-color : black ; color : lime;");
    spb->setMinimum(1);
    spb->setMaximum(99);
    lblNcode->setText("N_code :");
    lblNcode->setStyleSheet("color : aquamarine;");
    grl->addWidget(lblNcode,1,0);
    grl->addWidget(ledNcode,1,1,1,2);
    ledNcode->setPlaceholderText("کدملی");
    ledNcode->setStyleSheet("background-color : black ; color : lime;");
    lblNumber->setText("Number :");
    lblNumber->setStyleSheet("color : aquamarine;");
    grl->addWidget(lblNumber,1,3);
    ledNumber->setPlaceholderText("شماره‌تلفن");
    ledNumber->setStyleSheet("background-color : black ; color : lime;");
    grl->addWidget(ledNumber,1,4,1,2);
    lblEmail->setText("Email :");
    lblEmail->setStyleSheet("color : aquamarine;");
    grl->addWidget(lblEmail,2,0);
    grl->addWidget(ledEmail,2,1,1,2);
    ledEmail->setPlaceholderText("ایمیل");
    ledEmail->setStyleSheet("background-color : black ; color : lime;");
    grb->setLayout(grl);
    vbl->addWidget(grb);
    lblUser->setText("USERNAME :");
    lblUser->setStyleSheet("color : aquamarine;");
    grl1->addWidget(lblUser,0,0);
    ledUser->setPlaceholderText("نام‌کاربری");
    ledUser->setStyleSheet("background-color : black ; color : lime;");
    grl1->addWidget(ledUser,0,1,1,2);
    lblPass->setText("PASSWORD :");
    lblPass->setStyleSheet("color : aquamarine;");
    ledPass->setPlaceholderText("رمز ‌عبور");
    ledPass->setStyleSheet("background-color : black ; color : lime;");
    grl1->addWidget(lblPass,1,0);
    grl1->addWidget(ledPass,1,1,1,2);
    lblPassrp->setText("Again :");
    lblPassrp->setStyleSheet("color : aquamarine;");
    ledPassrp->setPlaceholderText("تکرار رمز ‌عبور");
    ledPassrp->setStyleSheet("background-color : black ; color : lime;");
    grl1->addWidget(lblPassrp,2,0);
    grl1->addWidget(ledPassrp,2,1,1,2);
    ledPass->setEchoMode(QLineEdit::PasswordEchoOnEdit);
    ledPassrp->setEchoMode(QLineEdit::PasswordEchoOnEdit);
    grl1->addWidget(pbn,3,2);
    pbn->setStyleSheet("background-color : black ; color : lime;");
    grb1->setLayout(grl1);
    vbl->addWidget(grb1);
    setLayout(vbl);
    connect(pbn,SIGNAL(clicked()),this,SLOT(on_pushbutton_clicked()));
    connect(pbn,SIGNAL(clicked()),this,SLOT(close()));

}

Registery_form::~Registery_form()
{
    delete grb;
    delete grb1;
    delete grl;
    delete grl1;
    delete lblUser;
    delete lblPass;
    delete lblPassrp;
    delete lblName;
    delete lblAge;
    delete lblEmail;
    delete lblNcode;
    delete lblNumber;
    delete ledNumber;
    delete ledUser;
    delete ledPass;
    delete ledPassrp;
    delete ledName;
    delete ledEmail;
    delete ledNcode;
    delete pbn;
    delete pbn1;
    delete spb;
    delete vbl;
    delete registerStatus;
}

void Registery_form::registeration()
{
    name.push_back(ledName->text());
    age.push_back(QString::number(spb->value()));
    ncode.push_back(ledNcode->text());
    number.push_back(ledNumber->text());
    email.push_back(ledEmail->text());
    username.push_back(ledUser->text());
    password.push_back(ledPass->text());
    Writefile();
}

void Registery_form::on_pushbutton_clicked()
{
    Readfile();
    bool check1 = false;
    bool check2 = false;
    bool check3 = false;
    bool check4 = false;
    bool check5 = false;
    for(int i =0 ; i < ncode.size() ; i++){
        if(ncode[i]==ledNcode->text()){
            check1  = true;
            break;
        }
    }
    for(int i = 0 ; i < email.size() ; i++){
        if(email[i]==ledEmail->text()){
            check2 = true;
            break;
        }
    }
    for(int i = 0 ; i < number.size() ; i++){
        if(number[i]==ledNumber->text()){
            check3 = true;
            break;
        }
    }
    for(int i = 0 ; i < username.size() ; i++){
        if(username[i]==ledUser->text()){
            check4 = true;
            break;
        }
    }
    for(int i = 0 ; i < password.size() ; i++){
        if(password[i]==ledPass->text()){
            check5 = true;
            break;
        }
    }
    if(!check1&&!check2&&!check3&&!check4&&!check5){
        registeration();
        return;
    }
     if(check1){
         QMessageBox msgBox;
        msgBox.setText("این کدملی قبلا ثبت شده است");
        int ret = msgBox.exec();
        return;
     }
    if(check2){
        QMessageBox msgBox;
       msgBox.setText("ایمیل تکراری است");
       int ret = msgBox.exec();
       return;
    }
    if(check3){
        QMessageBox msgBox;
       msgBox.setText("شماره تلفن تکراری است");
       int ret = msgBox.exec();
       return;
    }
    if(check4){
        QMessageBox msgBox;
       msgBox.setText("این نام به فرد دیگری تعلق دارد");
       int ret = msgBox.exec();
       return;
    }
    if(check5){
        QMessageBox msgBox;
       msgBox.setText("رمز عبور تکراری است");
       int ret = msgBox.exec();
       return;
    }
}



