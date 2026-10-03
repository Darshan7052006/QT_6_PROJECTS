#include "carbookingsystem.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CarBookingSystem w;
    w.show();
    return QApplication::exec();
}
