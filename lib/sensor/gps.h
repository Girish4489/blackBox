#ifndef GPS_H
#define GPS_H

typedef struct
{
    double latitude;
    double longitude;
    double altitude;
} GPSData;

void GPS_Init(void);
void GPS_Read(GPSData *data);

#endif // GPS_H
