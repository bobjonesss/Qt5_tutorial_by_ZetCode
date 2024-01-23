#include <QTextStream>
#include <QDate>

int main(void) {

   QTextStream out(stdout);

   QDate cd = QDate::currentDate();

   out << "Today is " << cd.toString(Qt::TextDate) <<  "\n";//endl;
   out << "Today is " << cd.toString(Qt::ISODate) <<  "\n";//endl;
   //out << "Today is " << cd.toString(Qt::SystemLocaleShortDate) <<  "\n";//endl;
   //out << "Today is " << cd.toString(Qt::SystemLocaleLongDate) <<  "\n";//endl;
   //out << "Today is " << cd.toString(Qt::DefaultLocaleShortDate) <<  "\n";//endl;
   //out << "Today is " << cd.toString(Qt::DefaultLocaleLongDate) <<  "\n";//endl;
   //out << "Today is " << cd.toString(Qt::SystemLocaleDate) <<  "\n";//endl;
   //out << "Today is " << cd.toString(Qt::LocaleDate) <<  "\n";//`endl;
}
