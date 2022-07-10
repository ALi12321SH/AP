#include "neurologydoctorsintro.h"
#include "ui_neurologydoctorsintro.h"

neurologyDoctorsIntro::neurologyDoctorsIntro(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::neurologyDoctorsIntro)
{
    ui->setupUi(this);
    this->setMaximumSize(665,424);
    this->setMinimumSize(665,424);
    this->setStyleSheet("background-color : dimgray;");
    ui->neurologyGroup->setStyleSheet("background-color: black ; color : lime;");
}

neurologyDoctorsIntro::~neurologyDoctorsIntro()
{
    delete ui;
}
