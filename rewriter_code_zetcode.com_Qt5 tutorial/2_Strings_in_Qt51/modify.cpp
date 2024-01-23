#include <QTextStream>

int main(void) {

   QTextStream out(stdout);

   QString str { "Lovely" };
   str.append(" season");

   out << str <<  "\n"; // endl;

   str.remove(10, 3);
   out << str <<  "\n"; //endl;

   str.replace(7, 3, "girl");
   out << str <<  "\n"; //endl;

   str.clear();

   if (str.isEmpty()) {
     out << "The string is empty" <<  "\n"; //endl;
   }

   return 0;
}
