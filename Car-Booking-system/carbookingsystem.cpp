#include "carbookingsystem.h"
#include "ui_carbookingsystem.h"
#include "loginpage.h"


CarBookingSystem::CarBookingSystem(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CarBookingSystem)
{
    ui->setupUi(this);
}

CarBookingSystem::~CarBookingSystem()
{
    delete ui;
}

void CarBookingSystem::on_proceedbutton_clicked()
{
    loginpage *loginpage = new class loginpage(this);
    loginpage->show();
    this->hide();
}

