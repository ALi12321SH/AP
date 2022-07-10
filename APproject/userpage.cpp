#include "userpage.h"
#include "ui_userpage.h"

userpage::userpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::userpage)
{
    ui->setupUi(this);
}

userpage::~userpage()
{
    delete ui;
}

void userpage::getUserName(QString str)
{
    Readfile();
    bool check1 = false;

    for(int i =0 ; i < username.size() ; i++){
        if(username[i]==str){
            check1  = true;
            ui->ledname->setText(name[i]);
            ui->ledage->setText(age[i]);
            ui->ledncode->setText(ncode[i]);
            ui->lednumber->setText(number[i]);
            ui->ledemali->setText(email[i]);
            break;
        }
    }
}
