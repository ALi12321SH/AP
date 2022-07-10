#include "mainwindow.h"
#include "dialog_login.h"
#include "doctors.h"
#include "registeration_form.h"
#include "hospitalsections.h"
#include "ui_mainwindow.h"
#include "learningsection.h"

#include <QMessageBox>
mainwindow::mainwindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mainwindow)
{

    ui->setupUi(this);
    this->setMaximumSize(620,413);
    this->setMinimumSize(620,413);
    this->setStyleSheet("background-color: dimgray;");
    ui->welcomeLabel->setStyleSheet("background-color : black ; color : lime;");
    ui->registerPB->setStyleSheet("background-color : black ; color : lime;");
    ui->loginPB->setStyleSheet("background-color : black ; color : lime;");
    ui->doctorsPB->setStyleSheet("background-color : black ; color : lime;");
    ui->servicesPB->setStyleSheet("background-color : black ; color : lime;");



}



mainwindow::~mainwindow()
{
    delete ui;
}





void mainwindow::on_loginPB_clicked()
{
    Dialog_Login*loginPage = new Dialog_Login(this);
    loginPage->show();
}

void mainwindow::on_registerPB_clicked()
{
    Registery_form*registerPage = new Registery_form(this);
    registerPage->show();
}

void mainwindow::on_doctorsPB_clicked()
{
    ptr = new doctors();
    ptr -> show();
}


void mainwindow::on_servicesPB_clicked()
{
    ptr = new hospitalSections(this);
    ptr->show();
}

