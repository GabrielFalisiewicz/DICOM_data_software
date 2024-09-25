#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "DcmFile.h"
#include <QDir>
#include <QDesktopServices>
#include <QUrl>
#include <QFileDialog>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    DcmFile file("dicom.dcm");

    setStyleSheet("background-color: gray");
    ui->choosefileButton->setStyleSheet("background-color: lightGrey; color: black");
    ui->tabWidget->setStyleSheet("background-color: grey; color: black");
    ui->dicomView1->setStyleSheet("background-color: lightGrey; color: black");
    ui->dicomView2->setStyleSheet("background-color: lightGrey; color: black");
    ui->tagsText->setStyleSheet("background-color: lightGrey; color: black");
    //ui->editTagsView->setStyleSheet("background-color: lightGrey; color: black");

   QObject::connect(ui->choosefileButton, &QPushButton::clicked, this, &MainWindow::onChooseFileButtonClicked);
}



void MainWindow::onChooseFileButtonClicked() {
    QString homePath = QDir::homePath();

    QString filter = "Image Files (*.png *.img *.dcm *.dicom)";
    QString filePath = QFileDialog::getOpenFileName(this, "Choose a file", homePath, filter);

    if (!filePath.isEmpty()) {
        QImage image(filePath);

        if (!image.isNull()) {
            QGraphicsScene* scene = new QGraphicsScene(this);
            scene->addPixmap(QPixmap::fromImage(image));

            ui->dicomView1->setScene(scene);
            ui->dicomView1->show();

            ui->dicomView2->setScene(scene);
            ui->dicomView2->show();
        } else {
            qDebug() << "Failed to load image:" << filePath;
        }
    }
}


MainWindow::~MainWindow()
{
    delete ui;
}
