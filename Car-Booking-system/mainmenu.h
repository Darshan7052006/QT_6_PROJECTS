#ifndef MAINMENU_H
#define MAINMENU_H

#include <QWidget>
#include "addcar.h"
#include "bookcar.h"
#include "viewallbookings.h"
#include "browsinglist.h"

namespace Ui {
class mainmenu;
}

class mainmenu : public QWidget
{
    Q_OBJECT

public:
    explicit mainmenu(QWidget *parent = nullptr);
    ~mainmenu();

signals:
    void logoutrequested();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::mainmenu *ui;
    addcar addcarui;
    bookcar bookcarui;
    viewallbookings viewallbookingsui;
    browsinglist browsinglistui;

};

#endif // MAINMENU_H
