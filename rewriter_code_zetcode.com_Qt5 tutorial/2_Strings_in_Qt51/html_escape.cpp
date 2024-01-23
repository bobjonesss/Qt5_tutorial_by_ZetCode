#include <QTextStream>
#include <QFile>

int main(void) {

    QTextStream out(stdout);

    QFile file("~/Downloads/1111");

    if (!file.open(QIODevice::ReadOnly)) {

        qWarning("Cannot open file for reading");
        return 1;
    }

    QTextStream in(&file);

    QString allText = in.readAll();
    out << allText.toHtmlEscaped() << "\n"; // endl;

    file.close();

    return 0;
}
