#include "browsinglist.h"
#include "ui_browsinglist.h"
#include "QFile"
#include "QTextStream"
#include <QTableWidgetItem>

browsinglist::browsinglist(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::browsinglist)
{
    ui->setupUi(this);
    ui->tableWidget->setColumnWidth(0, 180);
    ui->tableWidget->verticalHeader()->setDefaultSectionSize(50);
    ui->tableWidget->verticalHeader()->setStyleSheet(
        "QHeaderView::section {"
        "background-color: #1e5eff;"
        "color: white;"
        "font-size: 14pt;"
        "font-weight: bold;"
        "}"
        );
    QFile file("carData.txt");
    if(file.open(QIODevice::ReadOnly | QIODevice :: Text)){
        QTextStream in(&file);
        int row = 0;
        while(!in.atEnd()){
            QString line = in.readLine();
            if(line.isEmpty()){
                continue;
            }
            QStringList data = line.split(" ");

            ui->tableWidget->insertRow(row);

            ui->tableWidget->setItem(row, 0, new QTableWidgetItem(data[0]));
            ui->tableWidget->setItem(row, 1, new QTableWidgetItem(data[1]));
            ui->tableWidget->setItem(row, 2, new QTableWidgetItem(data[2]));
            ui->tableWidget->setItem(row, 3, new QTableWidgetItem(data[3]));

            row++;
        }
    }
}

browsinglist::~browsinglist()
{
    delete ui;
}

void browsinglist::on_pushButton_clicked()
{
    emit browsetomainmenu();
    this->hide();
}


