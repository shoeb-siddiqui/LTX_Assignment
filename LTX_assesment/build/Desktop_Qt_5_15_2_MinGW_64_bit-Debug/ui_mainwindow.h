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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_9;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *upload_csv_button;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_sort_data;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_write_JSON;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButton_load_db;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        upload_csv_button = new QPushButton(groupBox);
        upload_csv_button->setObjectName(QString::fromUtf8("upload_csv_button"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(upload_csv_button->sizePolicy().hasHeightForWidth());
        upload_csv_button->setSizePolicy(sizePolicy);
        upload_csv_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #4CAF50; /* Adjust green shade as desired */\n"
"  color: white; /* Text color */\n"
"  border: 2px solid #388E3C; /* Green border */\n"
"  border-radius: 5px; /* Rounded corners */\n"
"  padding: 10px 20px;  /* Adjust padding as desired */\n"
"font-family: \"Roboto\", sans-serif; /* Specify the desired font */\n"
"  font-size: 14px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background-color: lime; /* Change hover color to lime */\n"
"}"));

        horizontalLayout->addWidget(upload_csv_button);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pushButton_sort_data = new QPushButton(groupBox);
        pushButton_sort_data->setObjectName(QString::fromUtf8("pushButton_sort_data"));
        sizePolicy.setHeightForWidth(pushButton_sort_data->sizePolicy().hasHeightForWidth());
        pushButton_sort_data->setSizePolicy(sizePolicy);
        pushButton_sort_data->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #4CAF50; /* Adjust green shade as desired */\n"
"  color: white; /* Text color */\n"
"  border: 2px solid #388E3C; /* Green border */\n"
"  border-radius: 5px; /* Rounded corners */\n"
"  padding: 10px 20px;  /* Adjust padding as desired */\n"
"font-family: \"Roboto\", sans-serif; /* Specify the desired font */\n"
"  font-size: 14px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background-color: lime; /* Change hover color to lime */\n"
"}"));

        horizontalLayout_2->addWidget(pushButton_sort_data);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        pushButton_write_JSON = new QPushButton(groupBox);
        pushButton_write_JSON->setObjectName(QString::fromUtf8("pushButton_write_JSON"));
        sizePolicy.setHeightForWidth(pushButton_write_JSON->sizePolicy().hasHeightForWidth());
        pushButton_write_JSON->setSizePolicy(sizePolicy);
        pushButton_write_JSON->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #4CAF50; /* Adjust green shade as desired */\n"
"  color: white; /* Text color */\n"
"  border: 2px solid #388E3C; /* Green border */\n"
"  border-radius: 5px; /* Rounded corners */\n"
"  padding: 10px 20px;  /* Adjust padding as desired */\n"
"font-family: \"Roboto\", sans-serif; /* Specify the desired font */\n"
"  font-size: 14px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background-color: lime; /* Change hover color to lime */\n"
"}"));

        horizontalLayout_3->addWidget(pushButton_write_JSON);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        pushButton_load_db = new QPushButton(groupBox);
        pushButton_load_db->setObjectName(QString::fromUtf8("pushButton_load_db"));
        sizePolicy.setHeightForWidth(pushButton_load_db->sizePolicy().hasHeightForWidth());
        pushButton_load_db->setSizePolicy(sizePolicy);
        pushButton_load_db->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #4CAF50; /* Adjust green shade as desired */\n"
"  color: white; /* Text color */\n"
"  border: 2px solid #388E3C; /* Green border */\n"
"  border-radius: 5px; /* Rounded corners */\n"
"  padding: 10px 20px;  /* Adjust padding as desired */\n"
"font-family: \"Roboto\", sans-serif; /* Specify the desired font */\n"
"  font-size: 14px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background-color: lime; /* Change hover color to lime */\n"
"}"));

        horizontalLayout_4->addWidget(pushButton_load_db);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        horizontalLayout_5->addWidget(groupBox);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer_2);


        gridLayout_3->addLayout(verticalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Menu", nullptr));
        upload_csv_button->setText(QCoreApplication::translate("MainWindow", "Load CSV", nullptr));
        pushButton_sort_data->setText(QCoreApplication::translate("MainWindow", "Sort Data", nullptr));
        pushButton_write_JSON->setText(QCoreApplication::translate("MainWindow", "Write JSON", nullptr));
        pushButton_load_db->setText(QCoreApplication::translate("MainWindow", "Write to Database", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
