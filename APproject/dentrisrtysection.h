#ifndef DENTRISRTYSECTION_H
#define DENTRISRTYSECTION_H

#include <QMainWindow>

namespace Ui {
class dentrisrtySection;
}

class dentrisrtySection : public QMainWindow
{
    Q_OBJECT

public:
    explicit dentrisrtySection(QWidget *parent = nullptr);
    ~dentrisrtySection();
    int getDoctorsNum();
    int getNursesNum();
    int getPersonnelNum();
    int getBedsNum();
    void setDoctorsNum(int _doctorsNum);
    void setNursesNum(int _nursesNum);
    void setPersonnelNum(int _personnelNum);
    void setBedsNum(int _bedsNum);

private:
    Ui::dentrisrtySection *ui;
    int doctorsNum;
    int nursesNum;
    int personnelNum;
    int bedsNum;
};

#endif // DENTRISRTYSECTION_H
