#include <QSet>
#include <QList>
#include <QTextStream>
#include <algorithm>

int main(void) {

    QTextStream out(stdout);

    QSet<QString> cols1 = {"yellow", "red", "blue"};
    QSet<QString> cols2 = {"blue", "pink", "orange"};

    out << "There are " << cols1.size() << " values in the set" <<  "\n"; // endl;

    cols1.insert("brown");

    out << "There are " << cols1.size() << " values in the set" <<  "\n"; // endl;

    cols1.unite(cols2);

    out << "There are " << cols1.size() << " values in the set" <<  "\n"; // endl;

    for (QString val : cols1) {
        out << val <<  "\n"; // endl;
    }

    QList<QString> lcols = cols1.values();
    std::sort(lcols.begin(), lcols.end());

    out << "*********************" <<  "\n"; // endl;
    out << "Sorted:" <<  "\n"; // endl;

    for (QString val : lcols) {
        out << val <<  "\n"; // endl;
    }

   return 0;
}
