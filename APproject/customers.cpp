#include "customers.h"
#include<QFile>
#include <QDialog>
#include<QTextStream>
customers::customers()
{

}

void customers::Readfile(){
    QFile myfile("customers.txt");
    if(!myfile.open(QFile::ReadOnly |QFile::Text))
    {
       return;
    }
     QTextStream  cin(&myfile);
     while (!cin.atEnd())
     {
        QString line = cin.readLine();
        QStringList List = line.split(',');
        name.push_back(List[0]);
        age.push_back(List[1]);
        ncode.push_back(List[2]);
        number.push_back(List[3]);
        email.push_back(List[4]);
        username.push_back(List[5]);
        password.push_back(List[6]);
     }
     myfile.close();
}
void customers::Writefile()
{
    QFile myfile("customers.txt");
    if(!myfile.open(QFile::WriteOnly | QFile::Text))
    {
      return;
    }
    QTextStream cout(&myfile);
    for (int i=0; i< name.size();i++)
    {
        cout <<name[i]<<','
             <<age[i]<<','
             <<ncode[i]<<','
             <<number[i]<<','
             <<email[i]<<','
             <<username[i]<<','
             <<password[i]<<'\n';
    }
    myfile.flush();
    myfile.close();
}
