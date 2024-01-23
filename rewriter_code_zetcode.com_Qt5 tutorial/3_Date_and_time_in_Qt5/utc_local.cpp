#include <QTextStream>
#include <QDateTime>

int main(void) {

  QTextStream out(stdout);

  QDateTime cdt = QDateTime::currentDateTime();

  out << "Universal datetime: " << cdt.toUTC().toString() <<  "\n";//endl;
  out << "Local datetime: " << cdt.toLocalTime().toString() <<  "\n";//endl;
}
