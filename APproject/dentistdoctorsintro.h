#ifndef DENTISTDOCTORSINTRO_H
#define DENTISTDOCTORSINTRO_H

#include <QMainWindow>

namespace Ui {
class dentistDoctorsintro;
}

class dentistDoctorsintro : public QMainWindow
{
    Q_OBJECT

public:
    explicit dentistDoctorsintro(QWidget *parent = nullptr);
    ~dentistDoctorsintro();

private:
    Ui::dentistDoctorsintro *ui;
};

#endif // DENTISTDOCTORSINTRO_H
