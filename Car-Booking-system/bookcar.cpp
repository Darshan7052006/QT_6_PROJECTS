#include "bookcar.h"
#include "ui_bookcar.h"
#include "QFile"
#include "QMessageBox"

QVector<QString> getAllTheCarDetails();

bookcar::bookcar(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::bookcar)
{
    ui->setupUi(this);
    // we need to read car data from carData.txt because then only i can display it to the list widget i used to show the available cars for booking.
    refreshCarList();
}

bookcar::~bookcar()
{
    delete ui;
}

void bookcar::refreshCarList()
{
    ui->selectcarlistwidget->clear();

    QVector<QString> carData = getAllTheCarDetails();

    for(int i = 0; i < carData.size(); i++){
        ui->selectcarlistwidget->addItem(carData[i]);
    }
}

QVector<QString> getAllTheCarDetails(){
    QVector<QString> getData;
    QFile file("carData.txt");
    if(file.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream in(&file);
        while(!in.atEnd()){
            QString line = in.readLine();
            getData.append(line);
        }
    }
    file.close();
    return getData;
}
void bookcar::on_bookpushButton_clicked()
{
    QVector<QString> BookcarDetails;
    BookcarDetails.append(ui->namelineedit->text());
    BookcarDetails.append(ui->agelineedit->text());
    BookcarDetails.append(ui->pickpointlineedit->text());
    BookcarDetails.append(ui->destinationlineedit->text());

    bool male = ui->maleradio->isChecked();
    bool female = ui->femaleradio->isChecked();

    if(male){
        BookcarDetails.append("male");
    }

    else{
        BookcarDetails.append("female");
    }

    QListWidgetItem *listwidget = ui->selectcarlistwidget->currentItem();
    BookcarDetails.append(listwidget->text());
    BookcarDetails.append(ui->phonenumberlineedit->text());

    QFile file("BookCarData.txt");
    if(file.open(QIODevice::Append | QIODevice::Text)){
        QTextStream in(&file);
        for(int i = 0; i < BookcarDetails.size();i++){
            in << BookcarDetails[i] << "\n";
        }
        in << "\n";
    }
    file.close();
    QModelIndex currentIndex = ui->selectcarlistwidget->currentIndex();
    int currentRow = currentIndex.row();
    QVector<QString> CarData = getAllTheCarDetails();
    CarData.remove(currentRow);

    QFile file2("carData.txt");
    if(file2.open(QIODevice::WriteOnly | QIODevice::Text)){
        QTextStream in(&file2);
        for(int i = 0; i < CarData.size();i++){
            in << CarData[i] << "\n";
        }
        in << "\n";
    }
        file2.close();
    QMessageBox::information(0,"BOOKING SUCCESSFULL","Your car has been booked and will arrive in 15 minutes at your pickup location");
        ui->namelineedit->clear();
        ui->agelineedit->clear();
        ui->pickpointlineedit->clear();
        ui->destinationlineedit->clear();
        ui->phonenumberlineedit->clear();

        ui->maleradio->setChecked(false);
        ui->femaleradio->setChecked(false);

        ui->selectcarlistwidget->clearSelection();
}


void bookcar::on_exitpushbutton_clicked()
{
    emit exittomainmenu();
    this->hide();
}

