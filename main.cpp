#include "billingsystem.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CBillingSystem w;
    w.show();

    return a.exec();
}
