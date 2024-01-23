#include <QHBoxLayout>
#include "combobox.h"

ComboBoxEx::ComboBoxEx(QWidget *parent)
    : QWidget(parent) {

  QStringList distros = {"Arch", "Xubuntu", "Redhat", "Debian",
      "Mandriva"};

  auto *hbox = new QHBoxLayout(this);

  combo = new QComboBox();
  combo->addItems(distros);

  hbox->addWidget(combo);
  hbox->addSpacing(15);

  label = new QLabel("Arch", this);
  hbox->addWidget(label);


  //// DONT WORKED
  //connect(combo, qOverload<const QString &>(&QComboBox::activated), label, &QLabel::setText);
  //connect(combo, qOverload<int>(&QComboBox::activated),  label, qOverload<int>(&QLabel::setText));
  //connect(combo, qOverload<const QString &>(&QComboBox::activated), label, &QLabel::setText);
  //connect(combo->addItems, qOverload<const QString &>(&QComboBox::activated), label, &QLabel::setText);
  //connect(combo->addItems, qOverload<int>(&QComboBox::currentIndexChanged),  ...);
  //connect(ui->combobox, qOverload<int>(&QComboBox::currentIndexChanged),  ...);
  //connect(combo, qOverload<int>(&QComboBox::activated),   &QLabel::setText);
  //onnect(combo, qOverload<const QString &>(&QComboBox::activated),      );
  //connect(combo, qOverload<const QString &>(&QComboBox::activated),      label, &QLabel::setText);
}


