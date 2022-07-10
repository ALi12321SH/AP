#ifndef USERPAGE_H
#define USERPAGE_H

#include <QDialog>
#include "customers.h"


namespace Ui {
class userpage;
}

class userpage : public QDialog , public customers
{
    Q_OBJECT

public:
    explicit userpage(QWidget *parent = nullptr);
    ~userpage();

public slots:
    void getUserName(QString);

private:
    Ui::userpage *ui;
};

#endif // USERPAGE_H
