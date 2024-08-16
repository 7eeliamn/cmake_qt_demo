#include <QApplication>
// #include <QMainWindow>
#include "qt_rviz_widget.h"
#include "add.hpp"
#include <iostream>

int main(int argc, char** argv)
{
QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
  // 初始化 Qt 应用程序
  QApplication app(argc, argv);


  
  // QMainWindow* main_window = new QMainWindow();
  // QtRvizWidget* rviz_widget = new QtRvizWidget();
  // main_window->setCentralWidget(rviz_widget);

  // 显示窗口
  // main_window->resize(800, 600);
  // main_window->show();

  QtRvizWidget rviz_widget ;
  rviz_widget.show();
  add a;
  std::cout<< "iiiii : " << a.add_two_numbers(1,2) << std::endl;
  


  return app.exec();
}

