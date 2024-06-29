#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QTextStream>
#include <QStringList>
#include <QDebug>
#include <vector>
#include <algorithm>
#include <QMessageBox>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>
#include <QDebug>
#include "utility.h"
#include <QVBoxLayout>
#include <QTableView>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QElapsedTimer>
#include<QFileDialog>
#include<QTextStream>
#include"log.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    bool parseAndCheck(const QString& csv_data);
    std::vector<flight_data> flightData;
    QString json_data;
private slots:

    void on_pushButton_write_JSON_clicked();

    void on_pushButton_load_db_clicked();


    void on_Load_data_from_csv_clicked();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
