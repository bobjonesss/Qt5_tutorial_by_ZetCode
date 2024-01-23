#include "qt5_tutorial_6_first_programs.h"
#include "ui_qt5_tutorial_6_first_programs.h"

Qt5_tutorial_6_First_programs::Qt5_tutorial_6_First_programs(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Qt5_tutorial_6_First_programs)
{
    ui->setupUi(this);
}

Qt5_tutorial_6_First_programs::~Qt5_tutorial_6_First_programs()
{
    delete ui;
}

