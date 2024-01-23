#include <QVector>
#include <QTextStream>

int main(void) {

    QTextStream out(stdout);

    QVector<int> vals = {1, 2, 3, 4, 5};

    out << "The size of the vector is: " << vals.size() <<  "\n"; // endl;

    out << "The first item is: " << vals.first() << "\n"; // endl;
    out << "The last item is: " << vals.last() <<  "\n"; // endl;

    vals.append(6);
    vals.prepend(0);

    out << "Elements: ";

    for (int val : vals) {

        out << val << " ";
    }

    out <<  "\n"; // endl;

    return 0;
}
