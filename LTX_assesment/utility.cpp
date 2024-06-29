#include "utility.h"


#define LINE_ENDING "\n"

#define NO_OF_HEADERS 8
utility::utility()
{


}

 std::vector<flight_data> utility::parse_to_flight_data(QString csv_data)
{
    std::vector<flight_data> result_vec;
    QStringList csv_rows = csv_data.split(LINE_ENDING, Qt::SplitBehaviorFlags::SkipEmptyParts);
    if(csv_rows.size() > 0)    // remove headers
        csv_rows.removeFirst();
    for(const auto &csv_row_str : csv_rows)
    {
        QStringList csv_data = csv_row_str.split(',');

        if(csv_data.size() != NO_OF_HEADERS)
        {
            qDebug("csv data with %d elements found which not correct", static_cast<int>(csv_data.length()));
            continue;
        }

        flight_data data;
        data.time = QTime::fromString(csv_data[0], "h:mm:ss AP");
        data.latitude = csv_data[1].toFloat();
        data.longtiude = csv_data[2].toFloat();
        data.course = csv_data[3].toInt();
        data.kts = csv_data[4].toInt();
        data.mph = csv_data[5].toInt();
        data.altitude = csv_data[6].toInt();
        data.reporting_facility = csv_data[7];
        result_vec.push_back(data);

    }
    return result_vec;

}

 void utility::sort_flightdata_by_time(std::vector<flight_data> &flight_data_vec)
{
    std::sort(flight_data_vec.begin(),flight_data_vec.end(),[](flight_data a, flight_data b){
        return a.time < b.time;

    });


}
QString utility::export_to_json(const std::vector<flight_data>&flight_data_vec)
{
    QString json_data;
    json_data += "[";
    for(const auto &flight_data : flight_data_vec){
        json_data += "\n{";
        json_data += "\"Time\" : \""+flight_data.time.toString(Qt::DateFormat::ISODate) + "\"," + LINE_ENDING;
        json_data += "\"Latitude\" : "+ QString::number(flight_data.latitude) + "," + LINE_ENDING;
        json_data += "\"Longitude\" : "+QString::number(flight_data.longtiude) + "," + LINE_ENDING;
        json_data += "\"Course\" : "+QString::number(flight_data.course) + "," + LINE_ENDING;
        json_data += "\"kts\" : "+QString::number(flight_data.kts) + "," + LINE_ENDING;
        json_data += "\"mph\" : "+QString::number(flight_data.mph) + "," + LINE_ENDING;
        json_data += "\"Altitude\" : "+QString::number(flight_data.altitude) + "," + LINE_ENDING;
        json_data += "\"Reporting Facility\" : \""+flight_data.reporting_facility+ "\""+LINE_ENDING;
        json_data += "},";
    }
    if (flight_data_vec.size() > 0)
    {
        json_data.chop(1);
    }
    json_data +="\n]";
    return json_data;
}
