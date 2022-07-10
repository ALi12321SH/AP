#ifndef HEARTSECTION_H
#define HEARTSECTION_H

#include <QMainWindow>

namespace Ui {
class heartSection;
}

class heartSection : public QMainWindow
{
    Q_OBJECT

public:
    explicit heartSection(QWidget *parent = nullptr);
    ~heartSection();
    int getDoctorsNum();
    int getNursesNum();
    int getPersonnelNum();
    int getBedsNum();
    void setDoctorsNum(int _doctorsNum);
    void setNursesNum(int _nursesNum);
    void setPersonnelNum(int _personnelNum);
    void setBedsNum(int _bedsNum);

private:
    Ui::heartSection *ui;
    int doctorsNum;
    int nursesNum;
    int personnelNum;
    int bedsNum;
};

#endif // HEARTSECTION_H
