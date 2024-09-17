// mainwindow.cpp
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "DcmFile.h"
#include "qdatetime.h"
#include "qdebug.h"
#include <iostream>
#include <QFileDialog>
#include <DicomTreeModel.h>
#include <DcmImage.h>
#include <DcmMonochromeImage.h>
#include "DcmTagPixelData.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,file(nullptr)
    ,dataset()
    , m_treeModel(nullptr)
{
    ui->setupUi(this);
    connect(ui->listWidget,SIGNAL(itemClicked(QListWidgetItem*)),this,SLOT(on_file_item_clicked(QListWidgetItem*)));
    treeView=ui->treeView;
    imageView=ui->imageViewer;
}

void MainWindow::on_pushButton_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this);
    if (!filename.isEmpty()) {
        ui->listWidget->addItem(filename);
    }
}
void MainWindow::on_file_item_clicked(QListWidgetItem* item){

    QString text= item->text();
    qInfo() << text;
    if (file) {
        delete file;
    }

    file = new DcmFile(text);
    dataset = file->read();
    if (file->isError()) {
        qDebug() << "Error reading DICOM file:" << file->errorText();
    } else {
        qDebug() << "SOPClassUID:" << dataset["SOPClassUID"].toString();
        if (m_treeModel) {
            delete m_treeModel;
        }
        m_treeModel = new DicomTreeModel(dataset, this);
        treeView->setModel(m_treeModel);
        DcmTag *tag = dataset.findTag(DcmTagKey::PixelData);
        if (tag) {
            DcmTagPixelData *tagPixelData = dynamic_cast<DcmTagPixelData *>(tag);
            Q_ASSERT(tagPixelData);
            if (!tagPixelData->isEncapsulated()) {
                // The image is uncompressed
                updateImageView();
            }

        }
    }

}
void MainWindow::updateImageView() {
    DcmImage image(dataset);

    if (image.photometricInterpretation().isGrayscale()) {
        DcmMonochromeImage monoImage(image.dataset());

        DcmImageTransferFunction tf;

        // Set up the window center and window width for the transfer function
        double windowCenter = monoImage.windowCenter();
        double windowWidth = monoImage.windowWidth();
        tf.addReferencePoint(windowCenter - windowWidth / 2, QColor(0, 0, 0));
        tf.addReferencePoint(windowCenter + windowWidth / 2, QColor(255, 255, 255));

        // Convert DICOM image to QImage
        QImage qImage = monoImage.toQImage(tf);

        // Set the QLabel to scale its contents to the size of the image
        imageView->setScaledContents(true);  // Make the QLabel resize to fit the image

        // Manually set the size of the image you want to experiment with (e.g., 800x600)
        QSize manualSize(800, 600);  // Manually set the size of the image
        QImage scaledImage = qImage.scaled(manualSize, Qt::KeepAspectRatio, Qt::SmoothTransformation);

        // Set the scaled QImage as the pixmap of the QLabel
        imageView->setPixmap(QPixmap::fromImage(scaledImage));
        imageView->setAlignment(Qt::AlignCenter);

        // Set the size policy to make sure the QLabel can expand to fit the image
        imageView->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

        // Optionally, set the QLabel size manually as well, so the label adjusts to the image size
        imageView->setFixedSize(manualSize);

        qDebug() << "Image displayed with manually set size in imageView: " << manualSize;
    } else {
        qDebug() << "Non-grayscale images not yet supported";
    }
}

MainWindow::~MainWindow()
{
    delete ui;
    delete file;
}

