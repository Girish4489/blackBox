#ifndef DATA_LOGGER_H
#define DATA_LOGGER_H

#include "../sensor/sensor_manager.h"

// Initialize the data logger
void DataLogger_Init(void);

// Log sensor data
void DataLogger_LogData(const SensorData *data);

#endif // DATA_LOGGER_H
