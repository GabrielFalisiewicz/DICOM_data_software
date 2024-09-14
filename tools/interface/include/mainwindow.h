// mainwindow.h

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "DcmFile.h"
#include "DcmDataset.h"
#include <QMainWindow>
#include <QListWidgetItem>
#include <QTreeView>
#include "DicomTreeModel.h"
#include <QLabel>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void on_file_item_clicked(QListWidgetItem* item);
    void updateImageView();


private:
    Ui::MainWindow *ui;
    DcmFile *file;
    DcmDataset dataset;
    DicomTreeModel *m_treeModel;
    QTreeView *treeView;
    QLabel *imageView;
};

#endif // MAINWINDOW_H
