#include <QTextStream>
#include <QFileInfo>

int main(int argc, char *argv[]) {

  QTextStream out{stdout};

  if (argc != 2) {

      out << "Usage: file_times file" <<   "\n";//endl;
      return 1;
  }

  QString filename = argv[1];

  QFileInfo fileinfo{filename};

  QString absPath = fileinfo.absoluteFilePath();
  QString baseName = fileinfo.baseName();
  QString compBaseName = fileinfo.completeBaseName();
  QString fileName = fileinfo.fileName();
  QString suffix = fileinfo.suffix();
  QString compSuffix = fileinfo.completeSuffix();

  out << "Absolute file path: " << absPath <<   "\n";//endl;
  out << "Base name: " << baseName <<   "\n";//endl;
  out << "Complete base name: " << compBaseName <<   "\n";//endl;
  out << "File name: " << fileName <<   "\n";//endl;
  out << "Suffix: " << suffix <<   "\n";//endl;
  out << "Whole suffix: " << compSuffix <<   "\n";//endl;

  return 0;
}
