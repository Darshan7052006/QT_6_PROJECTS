#include "mobilecalculator.h"
#include "ui_mobilecalculator.h"

MobileCalculator::MobileCalculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MobileCalculator)
{
    ui->setupUi(this);
    num1 = 0;
    symbol = " ";
}

MobileCalculator::~MobileCalculator()
{
    delete ui;
}

void MobileCalculator::on_ninebutton_clicked()
{
    QString num1 = ui->outputlineedit->text();
    ui->outputlineedit->setText(num1+"9");
}


void MobileCalculator::on_eightbutton_clicked()
{
    QString num1 = ui->outputlineedit->text();
    ui->outputlineedit->setText(num1+"8");
}


void MobileCalculator::on_sevenbutton_clicked()
{
    QString num1 = ui->outputlineedit->text();
    ui->outputlineedit->setText(num1+"7");
}


void MobileCalculator::on_sixbutton_clicked()
{
    QString num1 = ui->outputlineedit->text();
    ui->outputlineedit->setText(num1+"6");
}


void MobileCalculator::on_fivebutton_clicked()
{
    QString num1 = ui->outputlineedit->text();
    ui->outputlineedit->setText(num1+"5");
}


void MobileCalculator::on_fourbutton_clicked()
{
    QString num1 = ui->outputlineedit->text();
    ui->outputlineedit->setText(num1+"4");
}


void MobileCalculator::on_threebutton_clicked()
{
    QString num1 = ui->outputlineedit->text();
    ui->outputlineedit->setText(num1+"3");
}


void MobileCalculator::on_twobutton_clicked()
{
    QString num1 = ui->outputlineedit->text();
    ui->outputlineedit->setText(num1+"2");
}


void MobileCalculator::on_onebutton_clicked()
{
    QString num1 = ui->outputlineedit->text();
    ui->outputlineedit->setText(num1+"1");
}


void MobileCalculator::on_zerobutton_clicked()
{
    QString num1 = ui->outputlineedit->text();
    ui->outputlineedit->setText(num1+"0");
}


void MobileCalculator::on_clearbutton_clicked()
{
    ui->outputlineedit->setText(" ");
}


void MobileCalculator::on_subtractbutton_clicked()
{
    num1 = ui->outputlineedit->text().toDouble();
    symbol = "-";
    ui->outputlineedit->setText(" ");
}


void MobileCalculator::on_addbutton_clicked()
{
    num1 = ui->outputlineedit->text().toDouble();
    symbol = "+";
    ui->outputlineedit->setText(" ");
}


void MobileCalculator::on_multiplybutton_clicked()
{
    num1 = ui->outputlineedit->text().toDouble();
    symbol = "*";
    ui->outputlineedit->setText(" ");
}


void MobileCalculator::on_dividebutton_clicked()
{
    num1 = ui->outputlineedit->text().toDouble();
    symbol = "/";
    ui->outputlineedit->setText(" ");
}


void MobileCalculator::on_resultbutton_clicked()
{
    double num2 = ui->outputlineedit->text().toDouble();
    double result = 0;
    if(symbol == "+"){
        result = num1 + num2;
    }

    else if(symbol == "-"){
        result = num1 - num2;
    }

    else if(symbol == "*"){
        result = num1 * num2;
    }

    else if(symbol == "/"){
        result = num1 / num2;
    }

    ui->outputlineedit->setText(QString::number(result));
}

