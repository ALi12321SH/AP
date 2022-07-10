#include "orthopedysection.h"
#include "ui_orthopedysection.h"

orthopedySection::orthopedySection(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::orthopedySection)
{
    ui->setupUi(this);
    this->setMaximumSize(560,700);
    this->setMinimumSize(560,700);
    ui->doctorsNumLbl->setStyleSheet("background-color : black ; color : lime;");
    ui->nursesNumLbl->setStyleSheet("background-color : black ; color : lime;");
    ui->personnelNumLbl->setStyleSheet("background-color : black ; color : lime;");
    ui->bedsNumLbl->setStyleSheet("background-color : black ; color : lime;");
    ui->DoctorsNum->setStyleSheet("background-color : black ; color : lime;");
    ui->NursesNum->setStyleSheet("background-color : black ; color : lime;");
    ui->PersonnelNum->setStyleSheet("background-color : black ; color : lime;");
    ui->BedsNum->setStyleSheet("background-color : black ; color : lime;");
    ui->OrthopedySectionLabel->setStyleSheet("background-color : black ; color : lime;");
}

orthopedySection::~orthopedySection()
{
    delete ui;
}
