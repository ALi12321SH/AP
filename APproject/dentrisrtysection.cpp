#include "dentrisrtysection.h"
#include "ui_dentrisrtysection.h"

dentrisrtySection::dentrisrtySection(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::dentrisrtySection)
{
    ui->setupUi(this);
    this->setMaximumSize(600,530);
    this->setMinimumSize(600,530);
    ui->doctorsNumLbl->setStyleSheet("background-color : black ; color : lime;");
    ui->nursesNumLbl->setStyleSheet("background-color : black ; color : lime;");
    ui->personnelNumLbl->setStyleSheet("background-color : black ; color : lime;");
    ui->bedsNumLbl->setStyleSheet("background-color : black ; color : lime;");
    ui->DoctorsNum->setStyleSheet("background-color : black ; color : lime;");
    ui->NursesNum->setStyleSheet("background-color : black ; color : lime;");
    ui->PersonnelNum->setStyleSheet("background-color : black ; color : lime;");
    ui->BedsNum->setStyleSheet("background-color : black ; color : lime;");
    ui->DentistrySectionLabel->setStyleSheet("background-color : black ; color : lime;");
}

dentrisrtySection::~dentrisrtySection()
{
    delete ui;
}

int dentrisrtySection::getDoctorsNum(){
    return doctorsNum;
}
int dentrisrtySection::getNursesNum(){
    return nursesNum;
}
int dentrisrtySection::getPersonnelNum(){
    return personnelNum;
}
int dentrisrtySection::getBedsNum(){
    return bedsNum;
}
void dentrisrtySection::setDoctorsNum(int _doctorsNum){
    doctorsNum=_doctorsNum;
}
void dentrisrtySection::setNursesNum(int _nursesNum){
    nursesNum=_nursesNum;
}
void dentrisrtySection::setPersonnelNum(int _personnelNum){
    personnelNum=_personnelNum;
}
void dentrisrtySection::setBedsNum(int _bedsNum){
    bedsNum=_bedsNum;
}
