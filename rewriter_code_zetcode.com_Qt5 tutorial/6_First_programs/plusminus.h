/*
#ifndef PLUSMINUS_H
#define PLUSMINUS_H

#endif // PLUSMINUS_H
*/

#pragma once

#include <QWidget>
#include <QApplication>
#include <QPushButton>
#include <QLabel>

class PlusMinus : public QWidget {

  Q_OBJECT

  public:
    PlusMinus(QWidget *parent = nullptr);

  private slots:
    void OnPlus();
    void OnMinus();

  private:
    QLabel *lbl;
};
