#ifndef CUSTOMERS_H
#define CUSTOMERS_H
#include <QVector>


class customers
{
public:
        customers();
protected:
    QVector<QString > name;
    QVector<QString > ncode;
    QVector<QString > number;
    QVector<QString > age;
    QVector<QString > email;
    QVector<QString > password;
    QVector<QString > username;
    void Readfile();
    void Writefile();

};

#endif // CUSTOMERS_H
