#include <QTextStream>
#include <QDateTime>

int main(void) {

   QTextStream out(stdout);
   QDateTime cdt = QDateTime::currentDateTime();

   out << "The current datetime is " << cdt.toString() <<  "\n";//endl;
   out << "The current date is " << cdt.date().toString() <<  "\n";//endl;
   out << "The current time is " << cdt.time().toString() <<  "\n";//endl;
}
