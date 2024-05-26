#include "gps.h"
#include <iostream> // For simulating hardware with standard I/O

void GPS_Init(void)
{
    // Initialize the GPS hardware (mock implementation)
    std::cout << "GPS: Initialized." << std::endl;
}

void GPS_Read(GPSData *data)
{
    // Simulate reading data from a GPS module
    data->latitude = 37.7749; // Example coordinates
    data->longitude = -122.4194;
    data->altitude = 30.0;
    std::cout << "GPS: Latitude=" << data->latitude << ", Longitude=" << data->longitude << ", Altitude=" << data->altitude << std::endl;
}
