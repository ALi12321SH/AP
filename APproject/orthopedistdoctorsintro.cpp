#include "orthopedistdoctorsintro.h"
#include "ui_orthopedistdoctorsintro.h"

orthopedistDoctorsIntro::orthopedistDoctorsIntro(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::orthopedistDoctorsIntro)
{
    ui->setupUi(this);
    this->setMaximumSize(660,400);
    this->setMinimumSize(660,400);
    this->setStyleSheet("background-color : dimgray;");
    ui->orthopedistGroup->setStyleSheet("background-color: black ; color : lime;");
}

orthopedistDoctorsIntro::~orthopedistDoctorsIntro()
{
    delete ui;
}
