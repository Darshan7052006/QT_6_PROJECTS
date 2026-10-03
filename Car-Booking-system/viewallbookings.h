#ifndef VIEWALLBOOKINGS_H
#define VIEWALLBOOKINGS_H

#include <QDialog>

namespace Ui {
class viewallbookings;
}

class viewallbookings : public QDialog
{
    Q_OBJECT

public:
    explicit viewallbookings(QWidget *parent = nullptr);
    ~viewallbookings();

signals:
    void bookingstomainmenu();
private slots:
    void on_pushButton_clicked();

private:
    Ui::viewallbookings *ui;
};

#endif // VIEWALLBOOKINGS_H
