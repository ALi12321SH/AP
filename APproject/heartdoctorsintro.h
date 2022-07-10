#ifndef HEARTDOCTORSINTRO_H
#define HEARTDOCTORSINTRO_H

#include <QMainWindow>

namespace Ui {
class heartDoctorsIntro;
}

class heartDoctorsIntro : public QMainWindow
{
    Q_OBJECT

public:
    explicit heartDoctorsIntro(QWidget *parent = nullptr);
    ~heartDoctorsIntro();

private:
    Ui::heartDoctorsIntro *ui;
};

#endif // HEARTDOCTORSINTRO_H
