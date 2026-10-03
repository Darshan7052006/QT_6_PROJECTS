#ifndef ADDCAR_H
#define ADDCAR_H

#include <QDialog>

namespace Ui {
class addcar;
}

class addcar : public QDialog
{
    Q_OBJECT

public:
    explicit addcar(QWidget *parent = nullptr);
    ~addcar();

signals:
    void exitcar();
    void caradded();

private slots:
    void on_addbutton_clicked();

    void on_exitbutton_clicked();

private:
    Ui::addcar *ui;
};

#endif // ADDCAR_H
