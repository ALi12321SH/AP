#ifndef DIGESTIONDOCTORSINTRO_H
#define DIGESTIONDOCTORSINTRO_H

#include <QMainWindow>

namespace Ui {
class digestionDoctorsIntro;
}

class digestionDoctorsIntro : public QMainWindow
{
    Q_OBJECT

public:
    explicit digestionDoctorsIntro(QWidget *parent = nullptr);
    ~digestionDoctorsIntro();

private:
    Ui::digestionDoctorsIntro *ui;
};

#endif // DIGESTIONDOCTORSINTRO_H
