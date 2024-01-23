#ifndef QT5_TUTORIAL_6_FIRST_PROGRAMS_H
#define QT5_TUTORIAL_6_FIRST_PROGRAMS_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Qt5_tutorial_6_First_programs; }
QT_END_NAMESPACE

class Qt5_tutorial_6_First_programs : public QWidget
{
    Q_OBJECT

public:
    Qt5_tutorial_6_First_programs(QWidget *parent = nullptr);
    ~Qt5_tutorial_6_First_programs();

private:
    Ui::Qt5_tutorial_6_First_programs *ui;
};
#endif // QT5_TUTORIAL_6_FIRST_PROGRAMS_H
