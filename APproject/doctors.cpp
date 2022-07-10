#include "doctors.h"
#include "doctorsintroduction.h"
#include "doctorsschedule.h"
#include "ui_doctors.h"

doctors::doctors(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::doctors)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: dimgray;");
    this->setMaximumSize(330,450);
    this->setMinimumSize(330,450);
    ui->doctorsLabel->setStyleSheet("background-color : black ; color : lime;");
    ui->introPB->setStyleSheet("background-color : black ; color : lime;");
    ui->schedulePB->setStyleSheet("background-color : black ; color : lime;");
}

doctors::~doctors()
{
    delete ui;
}

void doctors::on_introPB_clicked()
{
    ptr = new doctorsIntroduction(this);
    ptr->show();
}


void doctors::on_schedulePB_clicked()
{
    ptr = new doctorsSchedule(this);
    ptr->show();
}

