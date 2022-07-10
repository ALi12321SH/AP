#ifndef ORTHOPEDYSECTION_H
#define ORTHOPEDYSECTION_H

#include <QMainWindow>

namespace Ui {
class orthopedySection;
}

class orthopedySection : public QMainWindow
{
    Q_OBJECT

public:
    explicit orthopedySection(QWidget *parent = nullptr);
    ~orthopedySection();
    int getDoctorsNum();
    int getNursesNum();
    int getPersonnelNum();
    int getBedsNum();
    void setDoctorsNum(int _doctorsNum);
    void setNursesNum(int _nursesNum);
    void setPersonnelNum(int _personnelNum);
    void setBedsNum(int _bedsNum);

private:
    Ui::orthopedySection *ui;
    int doctorsNum;
    int nursesNum;
    int personnelNum;
    int bedsNum;
};

#endif // ORTHOPEDYSECTION_H
