#include <QTextStream>

int main(void) {

  QTextStream out(stdout);

  QString s1 = "Eagle";
  QString s2 = "Eagle\n";
  QString s3 = "Eagle ";
  QString s4 = "орел";

  out << s1.length() << "\n"; //endl;
  out << s2.length() << "\n"; //endl;
  out << s3.length() << "\n"; //endl;
  out << s4.length() << "\n"; //endl;

  return 0;
}
