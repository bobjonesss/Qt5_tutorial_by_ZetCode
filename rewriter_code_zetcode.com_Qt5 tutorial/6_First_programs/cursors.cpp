#include <QApplication>
#include <QWidget>
#include <QFrame>
#include <QGridLayout>

class Cursors : public QWidget {

 public:
     Cursors(QWidget *parent = nullptr);
};

Cursors::Cursors(QWidget *parent)
    : QWidget(parent) {

  auto *frame1 = new QFrame(this);
  frame1->setFrameStyle(QFrame::Box);
  frame1->setCursor(Qt::SizeAllCursor);

  auto *frame2 = new QFrame(this);
  frame2->setFrameStyle(QFrame::Box);
  frame2->setCursor(Qt::WaitCursor);

  auto *frame3 = new QFrame(this);
  frame3->setFrameStyle(QFrame::Box);
  frame3->setCursor(Qt::PointingHandCursor);

  auto *frame4 = new QFrame(this);
  frame4->setFrameStyle(QFrame::Box);
  frame4->setCursor(Qt::IBeamCursor);

  auto *grid = new QGridLayout(this);
  grid->addWidget(frame1, 0, 0);
  grid->addWidget(frame2, 0, 1);
  grid->addWidget(frame3, 0, 2);
  grid->addWidget(frame4, 0, 3);

  setLayout(grid);
}

int main(int argc, char *argv[]) {

  QApplication app(argc, argv);

  Cursors window;

  window.resize(450, 250);
  window.setWindowTitle("Cursors");
  window.show();

  return app.exec();
}
