#ifndef DOCTORSINTRODUCTION_H
#define DOCTORSINTRODUCTION_H

#include <QMainWindow>

namespace Ui {
class doctorsIntroduction;
}

class doctorsIntroduction : public QMainWindow
{
    Q_OBJECT

public:
    explicit doctorsIntroduction(QWidget *parent = nullptr);
    ~doctorsIntroduction();

private slots:
    void on_dentistDoctorPB_clicked();

    void on_digestionDoctorsPB_clicked();

    void on_orthopedistDoctorsPB_clicked();

    void on_heartDoctorsPB_clicked();

    void on_NeurologyDoctorsPB_clicked();

private:
    Ui::doctorsIntroduction *ui;
    QMainWindow*ptr; //used for polymorphism
};

#endif // DOCTORSINTRODUCTION_H
