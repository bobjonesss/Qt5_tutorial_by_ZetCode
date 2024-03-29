#include <QTextStream>
#include <QFile>

///#####################define
/// first cd ~/Downloads pwd ls words.txt

int main(void) {

  QTextStream out{stdout};

  QFile f{"words.txt"};

  if (!f.open(QIODevice::ReadOnly)) {

    qWarning("Cannot open file for reading");
    return 1;
  }

  QTextStream in{&f};

  while (!in.atEnd()) {

    QString line = in.readLine();
    out << line << "\n";//endl;
  }

  return 0;
}
