#include <QTextStream>
#include <QTime>

int main(void) {

   QTextStream out(stdout);

   QTime ct = QTime::currentTime();

   out << "The time is " << ct.toString("hh:mm:ss.zzz") <<  "\n";//endl;
   out << "The time is " << ct.toString("h:m:s a") <<  "\n";//endl;
   out << "The time is " << ct.toString("H:m:s A") <<  "\n";//endl;
   out << "The time is " << ct.toString("h:m AP") <<  "\n";//endl;
}
