#ifndef CARBOOKINGSYSTEM_H
#define CARBOOKINGSYSTEM_H

#include <QMainWindow>
QT_BEGIN_NAMESPACE
namespace Ui {
class CarBookingSystem;
}
QT_END_NAMESPACE

class CarBookingSystem : public QMainWindow
{
    Q_OBJECT

public:
    explicit CarBookingSystem(QWidget *parent = nullptr);
    ~CarBookingSystem() override;

private slots:
    void on_proceedbutton_clicked();

private:
    Ui::CarBookingSystem *ui;
};
#endif // CARBOOKINGSYSTEM_H
