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
#include <QtWidgets/QHeaderView>
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
    QTreeView *treeView;
    QWidget *edit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(-9, 1, 811, 561));
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
        treeView = new QTreeView(read);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setGeometry(QRect(50, 30, 711, 481));
        tabWidget->addTab(read, QString());
        edit = new QWidget();
        edit->setObjectName(QString::fromUtf8("edit"));
        tabWidget->addTab(edit, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


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
        tabWidget->setTabText(tabWidget->indexOf(read), QCoreApplication::translate("MainWindow", "Read Tags", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(edit), QCoreApplication::translate("MainWindow", "Edit Tags", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
