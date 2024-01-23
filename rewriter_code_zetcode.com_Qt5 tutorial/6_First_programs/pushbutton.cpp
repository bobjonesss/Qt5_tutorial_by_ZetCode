#include <QApplication>
#include <QWidget>
#include <QPushButton>

class MyButton : public QWidget {

 public:
     MyButton(QWidget *parent = nullptr);
};

MyButton::MyButton(QWidget *parent)
    : QWidget(parent) {

  auto *quitBtn = new QPushButton("Quitz", this);
  quitBtn->setGeometry(50, 20, 85, 40);

  connect(quitBtn, &QPushButton::clicked, qApp, &QApplication::quit);
}

int main(int argc, char *argv[]) {

  QApplication app(argc, argv);

  MyButton window;

  window.resize(250, 150);
  window.setWindowTitle("QPushButton");
  window.show();

  return app.exec();
}
