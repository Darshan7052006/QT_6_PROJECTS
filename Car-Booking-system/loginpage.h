#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QDialog>
#include "mainmenu.h"
namespace Ui {
class loginpage;
}

class loginpage : public QDialog
{
    Q_OBJECT

public:
    explicit loginpage(QWidget *parent = nullptr);
    ~loginpage();

private slots:

    void on_pushButton_clicked();
    void handlelogout();

private:
    Ui::loginpage *ui;
    mainmenu mainmenuui;
};

#endif // LOGINPAGE_H
