#include <QTextStream>
#include <QDateTime>
#include <ctime>

int main(void) {

  QTextStream out(stdout);

  time_t t = time(0);
  out << t <<   "\n";//endl;

  QDateTime dt;
  //dt.setTime_t(t);
  out << dt.toString() <<   "\n";//endl;

  QDateTime cd = QDateTime::currentDateTime();
  //out << cd.toTime_t() <<   "\n";//endl;
}
