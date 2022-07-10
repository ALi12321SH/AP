#include "heartsection.h"
#include "ui_heartsection.h"

heartSection::heartSection(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::heartSection)
{
    ui->setupUi(this);
    this->setMaximumSize(736,545);
    this->setMinimumSize(736,545);
    ui->doctorsNumLbl->setStyleSheet("background-color : black ; color : lime;");
    ui->nursesNumLbl->setStyleSheet("background-color : black ; color : lime;");
    ui->personnelNumLbl->setStyleSheet("background-color : black ; color : lime;");
    ui->bedsNumLbl->setStyleSheet("background-color : black ; color : lime;");
    ui->DoctorsNum->setStyleSheet("background-color : black ; color : lime;");
    ui->NursesNum->setStyleSheet("background-color : black ; color : lime;");
    ui->PersonnelNum->setStyleSheet("background-color : black ; color : lime;");
    ui->BedsNum->setStyleSheet("background-color : black ; color : lime;");
    ui->HeartSectionLabel->setStyleSheet("background-color : black ; color : lime;");
}

heartSection::~heartSection()
{
    delete ui;
}
