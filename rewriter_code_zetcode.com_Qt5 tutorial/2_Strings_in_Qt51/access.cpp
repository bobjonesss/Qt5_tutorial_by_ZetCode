#include <QTextStream>

int main(void) {

   QTextStream out(stdout);

   QString a { "Eagle" };

   out << a[0] << "\n"; //endl;
   out << a[4] << "\n"; //endl;

   out << a.at(0) << "\n"; //endl;

   if (a.at(5).isNull()) {
     out << "Outside the range of the string" << "\n"; //endl;
   }

   return 0;
}
