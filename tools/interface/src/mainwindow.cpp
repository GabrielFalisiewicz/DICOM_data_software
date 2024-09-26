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
    , m_treeModel(nullptr),
    model(nullptr)

{
    ui->setupUi(this);

    QString style = "background-color: qlineargradient("
                    "spread:pad, "
                    "x1:0.124577, y1:0.267, "
                    "x2:0.115385, y2:0.96, "
                    "stop:0 rgba(110, 110, 110, 255), "
                    "stop:1 rgba(255, 255, 255, 255)"
                    ");";

    ui->tabWidget->setStyleSheet(style);

    // ui->setupUi(this);
    // connect(ui->listWidget,SIGNAL(itemClicked(QListWidgetItem*)),this,SLOT(on_file_item_clicked(QListWidgetItem*)));
    // treeView=ui->treeView;
    // imageView=ui->imageViewer;
}

QString filename;



void MainWindow::on_pushButton_clicked()
{
    filename = QFileDialog::getOpenFileName(this);
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
        connect(m_treeModel, &QAbstractItemModel::dataChanged, this, &MainWindow::onDataChanged);
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

        double windowCenter = monoImage.windowCenter();
        double windowWidth = monoImage.windowWidth();
        tf.addReferencePoint(windowCenter - windowWidth / 2, QColor(0, 0, 0));
        tf.addReferencePoint(windowCenter + windowWidth / 2, QColor(255, 255, 255));

        QImage qImage = monoImage.toQImage(tf);


        imageView->setScaledContents(true);  // Make the QLabel resize to fit the image

        // Manually set the size of the image you want to experiment with (e.g., 800x600)
        QSize manualSize(1000, 500);  // Manually set the size of the image
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

void MainWindow::on_pushButton_2_clicked()
{
    //dataset.setTagValue("ImplementationClassUID", "2.16.840.5");
    //dataset.setTagValue(DcmTagKey(0x0002, 0x0012), "2.16.840.10");
    int pos = filename.lastIndexOf('/');
    QString name = filename.mid(pos + 1);
    // qDebug() << name<<"test";
    // DcmFile file(filename);
    // file.write(dataset);
    this->file->write(dataset);
}

void MainWindow::onDataChanged(const QModelIndex &topLeft){
    int topRow = topLeft.row();
    int leftColumn = topLeft.column();
    QModelIndex parent = topLeft.parent();
    QModelIndex ci = model->index(topRow, leftColumn, parent);
    QModelIndex index = model->index(topRow, 0, parent);
    QVariant cx = index.data();
    QVariant data = ci.data();
    QString str = cx.toString();
    str.remove('(').remove(')');
    QStringList parts = str.split(", ");
    parts[0] = "0x" + parts[0];
    parts[1] = "0x" + parts[1];
    bool ok;
    dataset.setTagValue(DcmTagKey(parts[0].toInt(&ok, 16), parts[1].toInt(&ok, 16)), data.toString());
    //qDebug() << parts[0] << parts[1];
    // qDebug() << "topLeft row:" << topRow << "column:" << leftColumn;
    // qDebug() << "ci row:" << ci.row() << "column:" << ci.column();
    // qDebug() << "data:" << data;
    // qDebug() << "index: " << cx;
}

void MainWindow::on_treeView_clicked(const QModelIndex &index)
{

    //const QAbstractItemModel *model = index.model();
    // int row = index.row();
    // int columnCount = model->columnCount();
    // QStringList rowData;
    // for (int col = 0; col < columnCount; ++col) {
    //     QModelIndex currentIndex = model->index(row, col);
    //     QVariant data = currentIndex.data();
    //     rowData << data.toString();
    // }
    // QString rowDataString = rowData.join(", ");
    // qDebug() << rowDataString;

    this->model = index.model();
    //QVariant text = index.data();
    //QString txt = text.toString();
    //qDebug() << txt;
    // QModelIndex tagIndex = index.sibling(index.row(), 0);
    // QString tag = tagIndex.data().toString();
    // qDebug() << tag;
}



