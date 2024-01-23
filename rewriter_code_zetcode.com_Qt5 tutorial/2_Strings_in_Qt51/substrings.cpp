#include <QTextStream>

int main(void) {

   QTextStream out(stdout);

   QString str = { "The night train" };

   out << str.right(5) <<  "\n"; // endl;
   out << str.left(9) <<  "\n"; //endl;
   out << str.mid(4, 5) <<  "\n"; //endl;

   QString str2("The big apple");
   //QStringRef sub(&str2, 0, 7);

   //out << sub.toString() <<  "\n"; //endl;

   return 0;
}
