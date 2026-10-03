#ifndef BROWSINGLIST_H
#define BROWSINGLIST_H

#include <QDialog>

namespace Ui {
class browsinglist;
}

class browsinglist : public QDialog
{
    Q_OBJECT

public:
    explicit browsinglist(QWidget *parent = nullptr);
    ~browsinglist();

signals:
    void browsetomainmenu();

private slots:
    void on_pushButton_clicked();

private:
    Ui::browsinglist *ui;
};

#endif // BROWSINGLIST_H
