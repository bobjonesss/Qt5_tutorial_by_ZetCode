#include <QtCore>
#include <iostream>
#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::cout << "Qt version: " << qVersion() << std::endl;


    return a.exec();
}
