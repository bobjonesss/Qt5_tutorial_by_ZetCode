#include " "

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ContainersMainWindow w;
    w.show();
    return a.exec();
}
