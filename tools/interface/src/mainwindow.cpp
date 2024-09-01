// mainwindow.cpp
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "DcmFile.h"
#include "qdatetime.h"
#include "qdebug.h"
#include <iostream>
#include <QFileDialog>
#include <DicomTreeModel.h>

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

    }

}

MainWindow::~MainWindow()
{
    delete ui;
    delete file;
}
