#ifndef NEUROLOGYDOCTORSINTRO_H
#define NEUROLOGYDOCTORSINTRO_H

#include <QMainWindow>

namespace Ui {
class neurologyDoctorsIntro;
}

class neurologyDoctorsIntro : public QMainWindow
{
    Q_OBJECT

public:
    explicit neurologyDoctorsIntro(QWidget *parent = nullptr);
    ~neurologyDoctorsIntro();

private:
    Ui::neurologyDoctorsIntro *ui;
};

#endif // NEUROLOGYDOCTORSINTRO_H
