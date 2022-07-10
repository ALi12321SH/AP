#include "digestiondoctorsintro.h"
#include "ui_digestiondoctorsintro.h"

digestionDoctorsIntro::digestionDoctorsIntro(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::digestionDoctorsIntro)
{
    ui->setupUi(this);
    this->setMaximumSize(646,437);
    this->setMinimumSize(646,437);
    this->setStyleSheet("background-color : dimgray;");
    ui->digestionGroup->setStyleSheet("background-color: black ; color : lime;");
}

digestionDoctorsIntro::~digestionDoctorsIntro()
{
    delete ui;
}
