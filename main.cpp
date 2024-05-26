// Main Application Entry Point
#include "./lib/sensor/sensor_manager.h"
#include "./lib/data/data_logger.h"
#include "./lib/communication/communication_manager.h"
#include "./lib/hardwareAbstractionLayer/hal.h"

int main(void)
{
    // Initialize hardware abstraction layer
    HAL_Init();

    // Initialize sensor manager
    SensorManager_Init();

    // Initialize data logger
    DataLogger_Init();

    // Initialize communication interfaces
    CommunicationManager_Init();

    while (1)
    {
        // Acquire data from sensors
        SensorData data = SensorManager_ReadData();

        // Log data
        DataLogger_LogData(&data);

        // Handle communication tasks
        CommunicationManager_HandleTasks();

        // Simulate a delay to avoid busy looping
        HAL_Delay(3000);
    }

    return 0;
}
