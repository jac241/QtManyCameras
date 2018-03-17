#ifndef CAMERAWIDGET_H
#define CAMERAWIDGET_H

#include <QWidget>
#include <QCameraInfo>
#include <QCamera>
#include <QCameraViewfinder>

namespace Ui {
class CameraWidget;
}

class CameraWidget : public QWidget
{
    Q_OBJECT

public:
    explicit CameraWidget(QWidget *parent = 0);
    ~CameraWidget();

private:
    Ui::CameraWidget *ui;
};

#endif // CAMERAWIDGET_H
