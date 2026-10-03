#include "viewallbookings.h"
#include "ui_viewallbookings.h"

viewallbookings::viewallbookings(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::viewallbookings)
{
    ui->setupUi(this);
}

viewallbookings::~viewallbookings()
{
    delete ui;
}

void viewallbookings::on_pushButton_clicked()
{
    emit bookingstomainmenu();
    this->hide();
}

