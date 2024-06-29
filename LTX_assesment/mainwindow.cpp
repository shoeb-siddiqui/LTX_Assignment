#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::parseAndCheck(const QString& csv_data)
{

    flightData = utility::parse_to_flight_data(csv_data);


    if (!flightData.empty()) {
        return true;
    } else {
        QMessageBox::warning(nullptr, "Error", "Failed to parse CSV data");
        return false;
    }
}

void MainWindow::on_pushButton_write_JSON_clicked()
{
    if (flightData.empty()) {
        QMessageBox::warning(nullptr, "Error", "No flight data available to export");
        return;
    }


     json_data = utility::export_to_json(flightData);

    QString filePath = QFileDialog::getSaveFileName(this, tr("Save JSON File"), QString(), tr("JSON Files (*.json)"));
    if (filePath.isEmpty()) {
        QMessageBox::warning(nullptr, "Error", "No file selected");
        return;
    }

    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly)) {
        QMessageBox::warning(nullptr, "Error", "Failed to open file for writing");
        return;
    }

    QTextStream out(&file);
    out << json_data;
    file.close();


    QMessageBox::information(nullptr, "Data Status", "Flight data exported to JSON file");


}

void delayInms(qint64 timeInms)
{
    QElapsedTimer timer;
    timer.start();
    qint64 startTime = timer.elapsed();

    while( timer.elapsed() - startTime < timeInms )
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}



void MainWindow::on_pushButton_load_db_clicked()
{

    QString dbName = QFileDialog::getSaveFileName(this, tr("Save DB File"), "", tr("SQLite Database Files (*.db)"));
    if (dbName.isEmpty()) {

        return;
    }

    if (!QFileInfo::exists(dbName)) {
        QFile file(dbName);
        if (!file.open(QIODevice::WriteOnly)) {
            LOGD <<  "Failed to create database file";
            QMessageBox::critical(this, tr("Error"), tr("Failed to create database file!"));
            return;
        }
        QMessageBox::information(this, tr("Data Status"), tr("Database file created!"));
        file.close();
    } else {
        QMessageBox::warning(this, tr("Warning"), tr("The selected file already exists. Please choose a different location."));
        return;
    }
    QMessageBox Msg_Buffer_DB;
    Msg_Buffer_DB.setWindowTitle("Data Status");
    Msg_Buffer_DB.setText("      Please wait!!\nUploading the data...");
    Msg_Buffer_DB.setStyleSheet("color: black; background-color: white;"); // Set text color to black and background color to white
    Msg_Buffer_DB.setStandardButtons(0);
    Msg_Buffer_DB.show();
    delayInms(200);


    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(dbName);
    if (!db.open()) {
        LOGD <<  "Database connection failed";
        return;
    }


    QSqlQuery Creating_table(db);
    Creating_table.exec("CREATE TABLE IF NOT EXISTS Data ("
               "Time TEXT PRIMARY KEY,"
               "Latitude REAL,"
               "Longitude REAL,"
               "Course INTEGER,"
               "Kts INTEGER,"
               "Mph INTEGER,"
               "Altitude INTEGER,"
               "Reporting_facility TEXT)");

    QJsonParseError parseError;
    QJsonDocument jsonDoc = QJsonDocument::fromJson(json_data.toUtf8(), &parseError);
    if (parseError.error != QJsonParseError::NoError) {
        LOGD <<  "JSON parse error:" << parseError.errorString();
        return;
    }

    if (!jsonDoc.isArray()) {
        LOGD <<  "JSON data is not an array";
        return;
    }

    QJsonArray jsonArray = jsonDoc.array();
    for (const auto& item : jsonArray) {
        if (!item.isObject()) {
            LOGD <<  "JSON array Invalid!";
            continue;
        }

        QJsonObject obj = item.toObject();
        QString Time = obj["Time"].toString();
        double Latitude = obj["Latitude"].toDouble();
        double Longitude = obj["Longitude"].toDouble();
        int Course = obj["Course"].toInt();
        int Kts = obj["kts"].toInt();
        int Mph = obj["mph"].toInt();
        int Altitude = obj["Altitude"].toInt();
        QString Reporting_facility = obj["Reporting Facility"].toString();

        QString insertQuery = QString("INSERT INTO Data VALUES ('%1', %2, %3, %4, %5, %6, %7, '%8')")
                                  .arg(Time).arg(Latitude).arg(Longitude).arg(Course).arg(Kts).arg(Mph).arg(Altitude).arg(Reporting_facility);
        if (!Creating_table.exec(insertQuery)) {
            LOGD <<  "Failed to insert data:" << Creating_table.lastError().text();
        }
    }

    QSqlQuery Selecting_from_db("SELECT * FROM Data");
    QStandardItemModel *model = new QStandardItemModel(this);
    model->setColumnCount(8);


    QStringList headers;
    headers << "TIME" << "LATITUDE" << "LONGITUDE" << "COURSE" << "KTS" << "MPH" << "ALTITUDE" << "REPORTING FACILITY";
    model->setHorizontalHeaderLabels(headers);

    int row = 0;

    while (Selecting_from_db.next()) {
        for (int col = 0; col < 8; ++col) {
            QString value = Selecting_from_db.value(col).toString();
            model->setItem(row, col, new QStandardItem(value));
        }
        ++row;
    }

    db.close();



    QTableView *tableView = ui->tableView;
    QHeaderView *header = tableView->horizontalHeader();
    header->setSectionResizeMode(QHeaderView::Stretch);
    tableView->setModel(model);
    QMessageBox::information(this,"Data Upload","Successfully data uloaded");

}
void MainWindow::on_Load_data_from_csv_clicked()
{
    QString filePath = QFileDialog::getOpenFileName(this, tr("Open CSV File"), QString(), tr("CSV Files (*.csv)"));
    if (filePath.isEmpty()) {
        QMessageBox::warning(nullptr, "Error", "No file selected");
        return;
    }

    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::warning(nullptr, "Error", "Failed to open file");
        return;
    }

    QString csv_data = QString::fromUtf8(file.readAll());
    file.close();


    flightData = utility::parse_to_flight_data(csv_data);


    if (flightData.empty()) {
        QMessageBox::warning(nullptr, "Error", "No flight data available to sort");
        return;
    }else{
        utility::sort_flightdata_by_time(flightData);


        QMessageBox::information(nullptr, "Data Status", "Flight data uploaded & sorted by time");

    }


}

