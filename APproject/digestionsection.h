#ifndef DIGESTIONSECTION_H
#define DIGESTIONSECTION_H

#include <QMainWindow>

namespace Ui {
class digestionSection;
}

class digestionSection : public QMainWindow
{
    Q_OBJECT

public:
    explicit digestionSection(QWidget *parent = nullptr);
    ~digestionSection();
    int getDoctorsNum();
    int getNursesNum();
    int getPersonnelNum();
    int getBedsNum();
    void setDoctorsNum(int _doctorsNum);
    void setNursesNum(int _nursesNum);
    void setPersonnelNum(int _personnelNum);
    void setBedsNum(int _bedsNum);

private:
    Ui::digestionSection *ui;
    int doctorsNum;
    int nursesNum;
    int personnelNum;
    int bedsNum;
};

#endif // DIGESTIONSECTION_H
