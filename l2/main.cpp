#include <QApplication>
#include "slider.cpp"

int main(int argc, char *argv[]) {
  
  QApplication app(argc, argv);
  
  Slider window;
  
  window.setWindowTitle("QSlider");
  window.show();
  
  return app.exec();
}
