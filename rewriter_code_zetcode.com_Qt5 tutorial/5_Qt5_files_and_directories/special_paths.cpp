#include <QTextStream>
#include <QDir>

int main(void) {

  QTextStream out{stdout};
 out <<  "\n";//
  out <<  "\n";//
  out << "Current path:" << QDir::currentPath() <<  "\n";//endl;
  out << "Home path:" << QDir::homePath() << "\n";// endl;
  out << "Temporary path:" << QDir::tempPath() <<  "\n";//endl;
  out << "Rooth path:" << QDir::rootPath() <<  "\n";//endl;
 out <<  "\n";//
  out <<  "\n";//
  return 0;
}
