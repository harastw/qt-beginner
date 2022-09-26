#include <QHBoxLayout>
#include "slider.hpp"

ColorSlider::ColorSlider(QWidget *parent)
  : QWidget(parent) {

  QHBoxLayout* hbox = new QHBoxLayout(this); // QHBoxLayout - line style
         
  slider = new QSlider(Qt::Horizontal , this); // QSlider - .. slider?
  hbox->addWidget(slider);
 
  label = new QLabel("0", this); // QLabel - output widget
  hbox->addWidget(label);
 
  connect(slider, &QSlider::valueChanged, label, 
    static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

  pixmap = QPixmap("res/imgG.png");
  picLabel = new QLabel(this);
  picLabel->setPixmap(pixmap);

  hbox->addWidget(picLabel); // output image

  tempQString = label->text();
  sliderValue = tempQString.toInt();
}
