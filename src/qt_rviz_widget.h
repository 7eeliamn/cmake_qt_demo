#ifndef QT_RVIZ_WIDGET_H
#define QT_RVIZ_WIDGET_H

#include <QWidget>

// namespace Ui
// {
//     class QtRvizWidget;
// }

class QtRvizWidget : public QWidget
{
  Q_OBJECT

public:
  QtRvizWidget(QWidget* parent = nullptr);
  virtual ~QtRvizWidget();

private:

};

#endif // QT_RVIZ_WIDGET_HPP

