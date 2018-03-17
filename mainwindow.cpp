#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    cameraWidget(new CameraWidget(this))
{
    ui->setupUi(this);
    setCentralWidget(this->cameraWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}
