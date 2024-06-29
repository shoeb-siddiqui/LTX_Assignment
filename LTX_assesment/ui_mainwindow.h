/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QPushButton *Load_data_from_csv;
    QPushButton *pushButton_write_JSON;
    QPushButton *pushButton_load_db;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\";"));

        verticalLayout->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Load_data_from_csv = new QPushButton(centralwidget);
        Load_data_from_csv->setObjectName(QString::fromUtf8("Load_data_from_csv"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Load_data_from_csv->sizePolicy().hasHeightForWidth());
        Load_data_from_csv->setSizePolicy(sizePolicy);
        Load_data_from_csv->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"    background-color: red; \n"
"    color: black; \n"
"     border: 2px solid #388E3C; \n"
"      border-radius: 5px; \n"
"     padding: 10px 20px; \n"
"      font-size: 14px;\n"
"font: 900 10pt \"Arial Black\";\n"
"    }\n"
"   \n"
"    QPushButton:pressed {\n"
"    background-color: green;\n"
"    }\n"
""));

        horizontalLayout->addWidget(Load_data_from_csv);

        pushButton_write_JSON = new QPushButton(centralwidget);
        pushButton_write_JSON->setObjectName(QString::fromUtf8("pushButton_write_JSON"));
        sizePolicy.setHeightForWidth(pushButton_write_JSON->sizePolicy().hasHeightForWidth());
        pushButton_write_JSON->setSizePolicy(sizePolicy);
        pushButton_write_JSON->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"    background-color: red; \n"
"    color: black; \n"
"     border: 2px solid #388E3C; \n"
"      border-radius: 5px; \n"
"     padding: 10px 20px; \n"
"      font-size: 14px;\n"
"font: 900 10pt \"Arial Black\";\n"
"    }\n"
"   \n"
"    QPushButton:pressed {\n"
"    background-color: green;\n"
"    }\n"
""));

        horizontalLayout->addWidget(pushButton_write_JSON);

        pushButton_load_db = new QPushButton(centralwidget);
        pushButton_load_db->setObjectName(QString::fromUtf8("pushButton_load_db"));
        sizePolicy.setHeightForWidth(pushButton_load_db->sizePolicy().hasHeightForWidth());
        pushButton_load_db->setSizePolicy(sizePolicy);
        pushButton_load_db->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"    background-color: red; \n"
"    color: black; \n"
"     border: 2px solid #388E3C; \n"
"      border-radius: 5px; \n"
"     padding: 10px 20px; \n"
"      font-size: 14px;\n"
"font: 900 10pt \"Arial Black\";\n"
"    }\n"
"   \n"
"    QPushButton:pressed {\n"
"    background-color: green;\n"
"    }\n"
""));

        horizontalLayout->addWidget(pushButton_load_db);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "LTX Assignment", nullptr));
        Load_data_from_csv->setText(QCoreApplication::translate("MainWindow", "Load CSV", nullptr));
        pushButton_write_JSON->setText(QCoreApplication::translate("MainWindow", "Write JSON", nullptr));
        pushButton_load_db->setText(QCoreApplication::translate("MainWindow", "Write to Database", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
