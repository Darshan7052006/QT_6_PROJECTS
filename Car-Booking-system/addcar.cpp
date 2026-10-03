#include "addcar.h"
#include "ui_addcar.h"
#include "QFile"
#include "QMessageBox"
#include "QDebug"

addcar::addcar(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::addcar)
{
    ui->setupUi(this);
    ui->cartypelist->addItem("Mini");
    ui->cartypelist->addItem("Sedan");
    ui->cartypelist->addItem("SUV");
    ui->cartypelist->addItem("Premium");
}

addcar::~addcar()
{
    delete ui;
}

void addcar::on_addbutton_clicked()
{
    QVector<QString> carData;

    carData.append(ui->carnumberlineedit->text());
    carData.append(ui->brandlineedit->text());
    carData.append(ui->farelinedit->text());

    QListWidgetItem *selectedCarType = ui->cartypelist->currentItem();
    carData.append(selectedCarType->text());

    //store the data in a file.

    QFile file("carData.txt");
    if(file.open(QIODevice:: Append | QIODevice :: Text)){
        QTextStream stream(&file);
        for(int i = 0;i<carData.size();i++){
            stream << carData[i] << " ";
        }
        stream << "\n";
    }
    QMessageBox::information(0,"CAR ADDED","Your Car is added successfully");
    ui->carnumberlineedit->clear();
    ui->brandlineedit->clear();
    ui->farelinedit->clear();
    ui->cartypelist->clearSelection();

    emit caradded();
    file.close();
}


void addcar::on_exitbutton_clicked()
{
    emit exitcar();
    this->hide();
}

