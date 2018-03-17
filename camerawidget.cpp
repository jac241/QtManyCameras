#include "camerawidget.h"
#include "ui_camerawidget.h"

CameraWidget::CameraWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CameraWidget)
{
    ui->setupUi(this);

    if (QCameraInfo::availableCameras().count() <= 0) {
        qFatal("No cameras detected");
        abort();
    }

    for (auto cameraInfo : QCameraInfo::availableCameras()) {
        auto camera = new QCamera(cameraInfo, this);
        auto viewfinder = new QCameraViewfinder(this);
        viewfinder->setMinimumHeight(480);
        viewfinder->setMinimumWidth(640);

        camera->setViewfinder(viewfinder);
        ui->layout->addWidget(viewfinder);
        camera->start();
    }

    qDebug("Cameras started");
}

CameraWidget::~CameraWidget()
{
    delete ui;
}
