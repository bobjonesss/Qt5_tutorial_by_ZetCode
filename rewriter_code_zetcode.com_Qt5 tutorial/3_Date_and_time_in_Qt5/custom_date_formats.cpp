#include <QTextStream>
#include <QDate>

int main(void) {

   QTextStream out(stdout);

   QDate cd = QDate::currentDate();

   out << "Today is " << cd.toString("yyyy-MM-dd") <<  "\n";//endl;
   out << "Today is " << cd.toString("yy/M/dd") <<  "\n";//endl;
   out << "Today is " << cd.toString("d. M. yyyy") <<  "\n";//endl;
   out << "Today is " << cd.toString("d-MMMM-yyyy") <<  "\n";//endl;
}
