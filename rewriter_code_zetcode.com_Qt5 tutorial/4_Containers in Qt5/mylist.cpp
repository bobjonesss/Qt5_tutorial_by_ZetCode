#include <QTextStream>
#include <QList>
#include <algorithm>

int main(void) {

    QTextStream out(stdout);

    QList<QString> authors = {"Balzac", "Tolstoy",
        "Gulbranssen", "London"};

    for (int i=0; i < authors.size(); ++i) {

        out << authors.at(i) << "\n"; // endl;
    }

    authors << "Galsworthy" << "Sienkiewicz";

    out << "***********************" <<  "\n"; // endl;

    std::sort(authors.begin(), authors.end());

    out << "Sorted:" <<  "\n"; // endl;
    for (QString author : authors) {

        out << author <<  "\n"; // endl;
    }

    return 0;
}
