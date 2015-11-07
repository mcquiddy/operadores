#include <QCoreApplication>
#include "multiplicar.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    multiplicar * por= new multiplicar();

    return a.exec();
}
