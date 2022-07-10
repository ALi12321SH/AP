#ifndef NEUROLOGYSECTION_H
#define NEUROLOGYSECTION_H

#include <QMainWindow>

namespace Ui {
class neurologySection;
}

class neurologySection : public QMainWindow
{
    Q_OBJECT

public:
    explicit neurologySection(QWidget *parent = nullptr);
    ~neurologySection();
    int getDoctorsNum();
    int getNursesNum();
    int getPersonnelNum();
    int getBedsNum();
    void setDoctorsNum(int _doctorsNum);
    void setNursesNum(int _nursesNum);
    void setPersonnelNum(int _personnelNum);
    void setBedsNum(int _bedsNum);

private:
    Ui::neurologySection *ui;
    int doctorsNum;
    int nursesNum;
    int personnelNum;
    int bedsNum;
};

#endif // NEUROLOGYSECTION_H
