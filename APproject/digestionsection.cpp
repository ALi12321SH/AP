#include "digestionsection.h"
#include "ui_digestionsection.h"

digestionSection::digestionSection(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::digestionSection)
{
    ui->setupUi(this);
    this->setMaximumSize(822,522);
    this->setMinimumSize(822,522);
    ui->doctorsNumLbl->setStyleSheet("background-color : black ; color : lime;");
    ui->nursesNumLbl->setStyleSheet("background-color : black ; color : lime;");
    ui->personnelNumLbl->setStyleSheet("background-color : black ; color : lime;");
    ui->bedsNumLbl->setStyleSheet("background-color : black ; color : lime;");
    ui->DoctorsNum->setStyleSheet("background-color : black ; color : lime;");
    ui->NursesNum->setStyleSheet("background-color : black ; color : lime;");
    ui->PersonnelNum->setStyleSheet("background-color : black ; color : lime;");
    ui->BedsNum->setStyleSheet("background-color : black ; color : lime;");
    ui->DigestionSectionLabel->setStyleSheet("background-color : black ; color : lime;");
}

digestionSection::~digestionSection()
{
    delete ui;
}
