#ifndef ORTHOPEDISTDOCTORSINTRO_H
#define ORTHOPEDISTDOCTORSINTRO_H

#include <QMainWindow>

namespace Ui {
class orthopedistDoctorsIntro;
}

class orthopedistDoctorsIntro : public QMainWindow
{
    Q_OBJECT

public:
    explicit orthopedistDoctorsIntro(QWidget *parent = nullptr);
    ~orthopedistDoctorsIntro();

private:
    Ui::orthopedistDoctorsIntro *ui;
};

#endif // ORTHOPEDISTDOCTORSINTRO_H
