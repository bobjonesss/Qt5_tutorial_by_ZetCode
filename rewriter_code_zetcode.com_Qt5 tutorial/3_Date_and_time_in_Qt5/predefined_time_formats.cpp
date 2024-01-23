#include <QTextStream>
#include <QTime>

int main(void) {

   QTextStream out(stdout);

   QTime ct = QTime::currentTime();

   //https://doc-snapshots.qt.io/qt6-dev/qt.html#DateFormat-enum

   // Qt6 is Qt::TextDate.

   out << "The time is " << ct.toString(Qt::TextDate) <<  "\n";//endl;
   out << "The time is " << ct.toString(Qt::ISODate) <<  "\n";//endl;
   out << "The time is " << ct.toString(Qt::ISODateWithMs) <<  "\n";//endl;
   out << "The time is " << ct.toString(Qt::RFC2822Date) <<  "\n";//endl;

   //out << "The time is " << ct.toString(Qt::SystemLocaleShortDate) <<  "\n";//endl;
   //out << "The time is " << ct.toString(Qt::SystemLocaleLongDate) <<  "\n";//endl;
   //out << "The time is " << ct.toString(Qt::DefaultLocaleShortDate) <<  "\n";//endl;
   //out << "The time is " << ct.toString(Qt::DefaultLocaleLongDate) <<  "\n";//ndl;
   //out << "The time is " << ct.toString(Qt::SystemLocaleDate) <<  "\n";//endl;
   //out << "The time is " << ct.toString(Qt::LocaleDate) <<  "\n";//endl;
}
