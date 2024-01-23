
#include <QTextStream>
#include <QFile>

int main(void) {

  QTextStream out{stdout};

  QString filename = "distros.txt";
  QFile f{filename};

  if (f.open(QIODevice::WriteOnly)) {

    QTextStream out{&f};
    out << "Xubuntu" << "\n";// endl;
    out << "Arch" <<  "\n";// endl;
    out << "Debian" <<  "\n";// endl;
    out << "Redhat" <<  "\n";// endl;
    out << "Slackware" <<  "\n";// endl;

  } else {

    qWarning("Could not open file");
  }

  return 0;
}
