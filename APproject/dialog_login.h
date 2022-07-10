#ifndef DIALOG_LOGIN_H
#define DIALOG_LOGIN_H

#include <QDialog>
#include <QWidget>
#include <QMessageBox>
#include "customers.h"
#include "userpage.h"

namespace Ui {
class Dialog_Login;
}

class Dialog_Login : public QDialog,public customers
{
    Q_OBJECT

public:
    explicit Dialog_Login(QWidget *parent = nullptr);
    ~Dialog_Login();
signals:
    void sendUserName(QString);

private slots:


    void on_okPB_clicked();

private:
    Ui::Dialog_Login *ui;

};

#endif // DIALOG_LOGIN_H
