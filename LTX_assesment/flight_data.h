#ifndef FLIGHT_DATA_H
#define FLIGHT_DATA_H


#include<QString>
#include<QTime>

struct flight_data
{
    QTime time ;
    float latitude;
    float longtiude;
    int course;
    int kts;
    int mph;
    int altitude;

    QString reporting_facility;

};



#endif // FLIGHT_DATA_H
