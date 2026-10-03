#include "browsecars.h"
#include "ui_browsecars.h"

BrowseCars::BrowseCars(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::BrowseCars)
{
    ui->setupUi(this);
}

BrowseCars::~BrowseCars()
{
    delete ui;
}

void BrowseCars::on_pushButton_clicked()
{

}

