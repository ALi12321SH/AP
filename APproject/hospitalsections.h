#ifndef HOSPITALSECTIONS_H
#define HOSPITALSECTIONS_H

#include <QMainWindow>

namespace Ui {
class hospitalSections;
}

class hospitalSections : public QMainWindow
{
    Q_OBJECT

public:
    explicit hospitalSections(QWidget *parent = nullptr);
    ~hospitalSections();

private slots:
    void on_dentistrySectionPB_clicked();

    void on_digestionSectionPB_clicked();

    void on_orthopedySectionPB_clicked();

    void on_heartSectionPB_clicked();

    void on_NeurologySectionPB_clicked();

private:
    Ui::hospitalSections *ui;
    QMainWindow*ptr; //used for polymorphism
};

#endif // HOSPITALSECTIONS_H
