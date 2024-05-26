#include "sensor_manager.h"

// Include sensor-specific headers here
#include "accelerometer.h"
#include "gyroscope.h"
#include "gps.h"

void SensorManager_Init(void)
{
    // Initialize individual sensors
    Accelerometer_Init();
    Gyroscope_Init();
    GPS_Init();
}

SensorData SensorManager_ReadData(void)
{
    SensorData sensorData;

    // Example: Read data from accelerometer
    sensorData.type = SENSOR_ACCELEROMETER;
    AccelerometerData accelerometerData;
    Accelerometer_Read(&accelerometerData);
    sensorData.data.accelerometer.x = accelerometerData.x;
    sensorData.data.accelerometer.y = accelerometerData.y;
    sensorData.data.accelerometer.z = accelerometerData.z;

    // Example: Read data from gyroscope
    sensorData.type = SENSOR_GYROSCOPE;
    GyroscopeData gyroscopeData;
    Gyroscope_Read(&gyroscopeData);
    sensorData.data.gyroscope.pitch = gyroscopeData.pitch;
    sensorData.data.gyroscope.roll = gyroscopeData.roll;
    sensorData.data.gyroscope.yaw = gyroscopeData.yaw;

    // Example: Read data from GPS
    sensorData.type = SENSOR_GPS;
    GPSData gpsData;
    GPS_Read(&gpsData);
    sensorData.data.gps.altitude = gpsData.altitude;
    sensorData.data.gps.latitude = gpsData.latitude;
    sensorData.data.gps.longitude = gpsData.longitude;

    return sensorData;
}
