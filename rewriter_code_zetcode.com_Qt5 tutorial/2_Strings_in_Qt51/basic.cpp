#include <QTextStream>

int main(void) {

   QTextStream out(stdout);

   QString a { "love" };

   a.append(" chess");
   a.prepend("I ");

   out << a << "\n"; //<< endl;
   out << "The a string has " << a.count()
       << " characters" << "\n"; //<< endl;

   out << a.toUpper() << "\n"; //<< endl;
   out << a.toLower() << "\n"; // << endl;

   return 0;
}
