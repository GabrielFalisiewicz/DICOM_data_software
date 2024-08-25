#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "DcmFile.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    DcmFile file("dicom.dcm");
}

MainWindow::~MainWindow()
{
    delete ui;
}
