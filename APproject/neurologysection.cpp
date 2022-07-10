#include "neurologysection.h"
#include "ui_neurologysection.h"

neurologySection::neurologySection(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::neurologySection)
{
    ui->setupUi(this);
    this->setMaximumSize(700,420);
    this->setMinimumSize(700,420);
    ui->doctorsNumLbl->setStyleSheet("background-color : black ; color : lime;");
    ui->nursesNumLbl->setStyleSheet("background-color : black ; color : lime;");
    ui->personnelNumLbl->setStyleSheet("background-color : black ; color : lime;");
    ui->bedsNumLbl->setStyleSheet("background-color : black ; color : lime;");
    ui->DoctorsNum->setStyleSheet("background-color : black ; color : lime;");
    ui->NursesNum->setStyleSheet("background-color : black ; color : lime;");
    ui->PersonnelNum->setStyleSheet("background-color : black ; color : lime;");
    ui->BedsNum->setStyleSheet("background-color : black ; color : lime;");
    ui->NeorologySectionLabel->setStyleSheet("background-color : black ; color : lime;");
}

neurologySection::~neurologySection()
{
    delete ui;
}
