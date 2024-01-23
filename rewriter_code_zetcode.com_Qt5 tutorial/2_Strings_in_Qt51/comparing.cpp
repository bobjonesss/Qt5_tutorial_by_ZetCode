#include <QTextStream>

#define STR_EQUAL 0

int main(void) {

   QTextStream out(stdout);

   QString a { "Rain" };
   QString b { "rain" };
   QString c { "rain\n" };

   if (QString::compare(a, b) == STR_EQUAL) {
     out << "a, b are equal" <<  "\n"; //endl;
   } else {
     out << "a, b are not equal" <<  "\n"; //endl;
   }

   out << "In case insensitive comparison:" <<  "\n"; //endl;

   if (QString::compare(a, b, Qt::CaseInsensitive) == STR_EQUAL) {
     out << "a, b are equal" <<  "\n"; // endl;
   } else {
     out << "a, b are not equal" <<  "\n"; //endl;
   }

   if (QString::compare(b, c) == STR_EQUAL) {
     out << "b, c are equal" <<  "\n"; //endl;
   } else {
     out << "b, c are not equal" <<  "\n"; // endl;
   }

   c.chop(1);

   out << "After removing the new line character" <<  "\n"; //endl;

   if (QString::compare(b, c) == STR_EQUAL) {
     out << "b, c are equal" <<  "\n"; //endl;
   } else {
     out << "b, c are not equal" << "\n"; // endl;
   }

   return 0;
}
