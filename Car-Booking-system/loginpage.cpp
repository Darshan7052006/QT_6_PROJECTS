#include "loginpage.h"
#include "ui_loginpage.h"
#include "QMessageBox"

loginpage::loginpage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::loginpage)
{
    ui->setupUi(this);
    connect(&mainmenuui,
            &mainmenu::logoutrequested,
            this,
            &loginpage::handlelogout);
}

loginpage::~loginpage()
{
    delete ui;
}


void loginpage::on_pushButton_clicked()
{
    QString username = ui->usernamelineedit->text();
    QString password = ui->passwordlineedit->text();
    if(username == "admin"){
        if(password == "admin123"){
            QMessageBox::information(this,"LOGIN SUCCESSFULL","YOU HAVE SUCCESSFULLY LOGGED IN TO YOUR ACCOUNT");
            mainmenuui.show();
        }
        else{
            QMessageBox::information(this,"LOGIN FAILED","PLEASE RECHECK THE INFORMATION!!");
        }
    }
}

void loginpage::handlelogout()
{
    ui->usernamelineedit->clear();
    ui->passwordlineedit->clear();

    this->show();
}

