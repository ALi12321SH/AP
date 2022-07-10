#include "dialog_login.h"
#include "ui_dialog_login.h"

Dialog_Login::Dialog_Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_Login)
{
    ui->setupUi(this);
    this->setWindowTitle("Login");
    ui->lblUser->setStyleSheet("color : aquamarine;");
    ui->lblPass->setStyleSheet("color : aquamarine;");
    ui->ledUser->setStyleSheet("background-color : black ; color : lime;");
    ui->ledPass->setStyleSheet("background-color : black ; color : lime;");
    ui->okPB->setStyleSheet("background-color : black ; color : lime;");
    ui->forgetPassPB->setStyleSheet("QPushButton { background-color: black ; color : red; }");
}

Dialog_Login::~Dialog_Login()
{
    delete ui;
}


void Dialog_Login::on_okPB_clicked()
{
    if(ui->ledPass!=nullptr&& ui->ledUser!=nullptr)
    {
        Readfile();
        bool check = false;
        for(int i = 0 ; i < name.size() ; i++){
            if(ui->ledUser->text() == username [i] && ui->ledPass->text() == password[i]){
                check = true;
                break;
            }
        }
        if(!check){
            int ret;
            QMessageBox msgBox;
            msgBox.setText("رمز یا نام کاربری اشتباه است!!!");
            ui->ledUser->clear();
            ui->ledPass->clear();
            ret = msgBox.exec();
        }
        else{
            userpage* USER = new userpage();
            USER->show();
            connect(this, SIGNAL(sendUserName(QString)), USER, SLOT(getUserName(QString)));
            emit sendUserName(ui->ledUser->text());
            close();
        }
    }
}

