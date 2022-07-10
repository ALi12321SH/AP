#include "hospitalsections.h"
#include "ui_hospitalsections.h"
#include "dentrisrtysection.h"
#include "digestionsection.h"
#include "heartsection.h"
#include "neurologysection.h"
#include "orthopedysection.h"

hospitalSections::hospitalSections(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::hospitalSections)
{
    ui->setupUi(this);
    ptr=new QMainWindow(this);
    this->setMaximumSize(750,450);
    this->setMinimumSize(750,450);
    ui->NeurologySectionPB->setStyleSheet("background-color : black ; color : lime;");
    ui->dentistrySectionPB->setStyleSheet("background-color : black ; color : lime;");
    ui->digestionSectionPB->setStyleSheet("background-color : black ; color : lime;");
    ui->heartSectionPB->setStyleSheet("background-color : black ; color : lime;");
    ui->orthopedySectionPB->setStyleSheet("background-color : black ; color : lime;");
    ui->hospitalSectionslbl->setStyleSheet("background-color : black ; color : lime;");
}

hospitalSections::~hospitalSections()
{
    delete ui;
}

void hospitalSections::on_dentistrySectionPB_clicked()
{
    ptr = new dentrisrtySection(this);
    ptr->show();
}


void hospitalSections::on_digestionSectionPB_clicked()
{
    ptr = new digestionSection(this);
    ptr->show();
}


void hospitalSections::on_orthopedySectionPB_clicked()
{
    ptr = new orthopedySection(this);
    ptr->show();
}


void hospitalSections::on_heartSectionPB_clicked()
{
    ptr = new heartSection(this);
    ptr->show();
}


void hospitalSections::on_NeurologySectionPB_clicked()
{
    ptr = new neurologySection(this);
    ptr->show();
}

