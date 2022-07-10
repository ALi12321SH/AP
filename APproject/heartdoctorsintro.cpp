#include "heartdoctorsintro.h"
#include "ui_heartdoctorsintro.h"

heartDoctorsIntro::heartDoctorsIntro(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::heartDoctorsIntro)
{
    ui->setupUi(this);
    this->setMaximumSize(642,434);
    this->setMinimumSize(642,434);
    this->setStyleSheet("background-color : dimgray;");
    ui->heartGroup->setStyleSheet("background-color: black ; color : lime;");
}

heartDoctorsIntro::~heartDoctorsIntro()
{
    delete ui;
}
