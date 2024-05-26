#ifndef SENSOR_MANAGER_H
#define SENSOR_MANAGER_H

#ifdef __cplusplus
extern "C"
{
#endif

    // Define the types of sensors you support
    typedef enum
    {
        SENSOR_ACCELEROMETER,
        SENSOR_GYROSCOPE,
        SENSOR_GPS,
        // Add other sensors here
    } SensorType;

    // Struct for holding sensor data
    typedef struct
    {
        SensorType type;
        union
        {
            struct
            {
                float x;
                float y;
                float z;
            } accelerometer;
            struct
            {
                float roll;
                float pitch;
                float yaw;
            } gyroscope;
            struct
            {
                double latitude;
                double longitude;
                double altitude;
            } gps;
            // Add other sensor data structures here
        } data;
    } SensorData;

    // Initialize the sensor manager
    void SensorManager_Init(void);

    // Read data from sensors
    SensorData SensorManager_ReadData(void);

#ifdef __cplusplus
}
#endif

#endif // SENSOR_MANAGER_H
