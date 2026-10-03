#ifndef BROWSECARS_H
#define BROWSECARS_H

#include <QDialog>

namespace Ui {
class BrowseCars;
}

class BrowseCars : public QDialog
{
    Q_OBJECT

public:
    explicit BrowseCars(QWidget *parent = nullptr);
    ~BrowseCars();

private slots:
    void on_pushButton_clicked();

private:
    Ui::BrowseCars *ui;
};

#endif // BROWSECARS_H
