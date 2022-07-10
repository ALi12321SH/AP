#include "doctorsintroduction.h"
#include <QLabel>
#include <QPixmap>
#include <QPicture>
#include "dentistdoctorsintro.h"
#include "digestiondoctorsintro.h"
#include "orthopedistdoctorsintro.h"
#include "heartdoctorsintro.h"
#include "neurologydoctorsintro.h"
#include "ui_doctorsintroduction.h"

#define address1 ":/doctor1.jpg"
doctorsIntroduction::doctorsIntroduction(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::doctorsIntroduction)
{
    ui->setupUi(this);
    ptr=new QMainWindow();
    this->setMaximumSize(680,361);
    this->setMinimumSize(680,361);
    ui->dentistDoctorPB->setStyleSheet("background-color : black ; color : lime;");
    ui->digestionDoctorsPB->setStyleSheet("background-color : black ; color : lime;");
    ui->NeurologyDoctorsPB->setStyleSheet("background-color : black ; color : lime;");
    ui->heartDoctorsPB->setStyleSheet("background-color : black ; color : lime;");
    ui->orthopedistDoctorsPB->setStyleSheet("background-color : black ; color : lime;");
    ui->doctorsIntroductionlbl->setStyleSheet("background-color : black ; color : lime;");
}

doctorsIntroduction::~doctorsIntroduction()
{
    delete ui;
}

void doctorsIntroduction::on_dentistDoctorPB_clicked()
{
    ptr = new dentistDoctorsintro(this);
    ptr->show();
}


void doctorsIntroduction::on_digestionDoctorsPB_clicked()
{
    ptr = new digestionDoctorsIntro(this);
    ptr->show();
}


void doctorsIntroduction::on_orthopedistDoctorsPB_clicked()
{
    ptr = new orthopedistDoctorsIntro(this);
    ptr->show();
}


void doctorsIntroduction::on_heartDoctorsPB_clicked()
{
    ptr = new heartDoctorsIntro(this);
    ptr->show();
}


void doctorsIntroduction::on_NeurologyDoctorsPB_clicked()
{
    ptr = new neurologyDoctorsIntro(this);
    ptr->show();
}

