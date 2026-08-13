#ifndef MOBILECALCULATOR_H
#define MOBILECALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MobileCalculator;
}
QT_END_NAMESPACE

class MobileCalculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit MobileCalculator(QWidget *parent = nullptr);
    ~MobileCalculator() override;

private slots:
    void on_ninebutton_clicked();

    void on_eightbutton_clicked();

    void on_sevenbutton_clicked();

    void on_sixbutton_clicked();

    void on_fivebutton_clicked();

    void on_fourbutton_clicked();

    void on_threebutton_clicked();

    void on_twobutton_clicked();

    void on_onebutton_clicked();

    void on_zerobutton_clicked();

    void on_clearbutton_clicked();

    void on_subtractbutton_clicked();

    void on_addbutton_clicked();

    void on_multiplybutton_clicked();

    void on_dividebutton_clicked();

    void on_resultbutton_clicked();

private:
    Ui::MobileCalculator *ui;
    double num1;
    QString symbol;
};
#endif // MOBILECALCULATOR_H
