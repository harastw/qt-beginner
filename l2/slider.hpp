#pragma once

#include <QWidget>
#include <QSlider>
#include <QLabel>
#include <QPixmap>
#include <QPushButton>
#include <iostream>

class ColorSlider : public QWidget {
  Q_OBJECT

public:
  ColorSlider(QWidget *parent = nullptr);
  QSlider *slider;
  QLabel *label, *picLabel;
  QPixmap pixmap;

private:
  QString tempQString;
  int sliderValue;
};
