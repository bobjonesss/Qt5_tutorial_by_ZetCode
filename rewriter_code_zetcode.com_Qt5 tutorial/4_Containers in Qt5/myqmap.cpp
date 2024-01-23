#include <QTextStream>
#include <QMap>

int main(void) {

    QTextStream out(stdout);

    QMap<QString, int> items = { {"coins", 5}, {"books", 3} };

    items.insert("bottles", 7);

    QList<int> values = items.values();

    out << "Values:" <<   "\n"; // endl;

    for (int val : values) {
        out << val <<   "\n"; // endl;
    }

    QList<QString> keys = items.keys();

    out << "Keys:" <<   "\n"; // endl;
    for (QString key : keys) {
        out << key <<   "\n"; // endl;
    }

    QMapIterator<QString, int> it(items);

    out << "Pairs:" <<   "\n"; // endl;

    while (it.hasNext()) {
        it.next();
        out << it.key() << ": " << it.value() <<   "\n"; // endl;
    }

    return 0;
}
