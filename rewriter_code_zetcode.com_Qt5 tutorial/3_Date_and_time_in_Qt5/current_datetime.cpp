#include <QTextStream>
#include <QTime>
#include <QDate>

int main(void) {

   QTextStream out(stdout);

   QDate cd = QDate::currentDate();
   QTime ct = QTime::currentTime();

   out << "Current date is: " << cd.toString() << "\n";// endl;
   out << "Current time is: " << ct.toString() <<  "\n";//endl;
}
