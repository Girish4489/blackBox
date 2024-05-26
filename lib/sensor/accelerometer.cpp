#include "accelerometer.h"
#include <iostream>

void Accelerometer_Init(void)
{
    // Initialize the accelerometer hardware (mock implementation)
    std::cout << "Accelerometer: Initialized." << std::endl;
}

void Accelerometer_Read(AccelerometerData *data)
{
    // Simulate reading data from an accelerometer
    data->x = 0.0f;
    data->y = 0.0f;
    data->z = 9.8f; // Example value for gravity
    std::cout << "Accelerometer: X=" << data->x << ", Y=" << data->y << ", Z=" << data->z << std::endl;
}
