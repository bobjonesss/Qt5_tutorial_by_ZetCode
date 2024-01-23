#ifndef FSMAINWINDOW_H
#define FSMAINWINDOW_H

#include <QMainWindow>

class FSMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    FSMainWindow(QWidget *parent = nullptr);
    ~FSMainWindow();
};
#endif // FSMAINWINDOW_H
