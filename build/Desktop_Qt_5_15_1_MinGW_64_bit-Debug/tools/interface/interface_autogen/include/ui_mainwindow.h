/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *load;
    QListWidget *listWidget;
    QPushButton *pushButton;
    QWidget *read;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QTreeView *treeView;
    QPushButton *pushButton_2;
    QWidget *edit;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *imageViewer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1286, 619);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(-9, 1, 1271, 561));
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setCursor(QCursor(Qt::PointingHandCursor));
        load = new QWidget();
        load->setObjectName(QString::fromUtf8("load"));
        load->setCursor(QCursor(Qt::PointingHandCursor));
        listWidget = new QListWidget(load);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(30, 40, 751, 191));
        pushButton = new QPushButton(load);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 240, 261, 24));
        tabWidget->addTab(load, QString());
        read = new QWidget();
        read->setObjectName(QString::fromUtf8("read"));
        horizontalLayoutWidget = new QWidget(read);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 0, 1241, 521));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        treeView = new QTreeView(horizontalLayoutWidget);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        horizontalLayout->addWidget(treeView);

        pushButton_2 = new QPushButton(read);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(50, 420, 80, 24));
        tabWidget->addTab(read, QString());
        edit = new QWidget();
        edit->setObjectName(QString::fromUtf8("edit"));
        gridLayoutWidget = new QWidget(edit);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(9, -1, 1261, 531));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        imageViewer = new QLabel(gridLayoutWidget);
        imageViewer->setObjectName(QString::fromUtf8("imageViewer"));

        gridLayout->addWidget(imageViewer, 0, 0, 1, 1);

        tabWidget->addTab(edit, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1286, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "DICOM_data_software", nullptr));
#if QT_CONFIG(tooltip)
        tabWidget->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Load File</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton->setText(QCoreApplication::translate("MainWindow", "add Item", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(load), QCoreApplication::translate("MainWindow", "Load File", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Save tags", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(read), QCoreApplication::translate("MainWindow", "tags", nullptr));
        imageViewer->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(edit), QCoreApplication::translate("MainWindow", "Image Preview", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
