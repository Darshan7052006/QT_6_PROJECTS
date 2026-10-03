#include "mainmenu.h"
#include "ui_mainmenu.h"
#include "addcar.h"
#include "bookcar.h"
#include "browsinglist.h"
#include "viewallbookings.h"

mainmenu::mainmenu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::mainmenu)
{
    ui->setupUi(this);
    connect(&bookcarui,
            &bookcar::exittomainmenu,
            this,
            &mainmenu::show);
    connect(&addcarui,
            &addcar::exitcar,
            this,
            &mainmenu::show);
    connect(&browsinglistui,
            &browsinglist::browsetomainmenu,
            this,
            &mainmenu::show);
    connect(&viewallbookingsui,
            &viewallbookings::bookingstomainmenu,
            this,
            &mainmenu::show);
}

mainmenu::~mainmenu()
{
    delete ui;
}

void mainmenu::on_pushButton_3_clicked()
{
    this->hide();
    addcarui.show();
}


void mainmenu::on_pushButton_9_clicked()
{
    this->hide();
    bookcarui.refreshCarList();
    bookcarui.show();
}


void mainmenu::on_pushButton_clicked()
{
    emit logoutrequested();
    this->hide();
}


void mainmenu::on_pushButton_10_clicked()
{
    this->hide();
    viewallbookingsui.show();
}


void mainmenu::on_pushButton_8_clicked()
{
    this->hide();
    browsinglistui.show();
}

