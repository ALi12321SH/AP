#include "dentistdoctorsintro.h"
#include "ui_dentistdoctorsintro.h"

dentistDoctorsintro::dentistDoctorsintro(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::dentistDoctorsintro)
{
    ui->setupUi(this);
    this->setMaximumSize(716,702);
    this->setMinimumSize(716,702);
    this->setStyleSheet("background-color : dimgray;");
    ui->dentistsGroup->setStyleSheet("background-color: black ; color : lime;");
}

dentistDoctorsintro::~dentistDoctorsintro()
{
    delete ui;
}
