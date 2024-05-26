#include <iostream> // Include the header file for uint32_t
#include <thread>   // Include the header file for std::this_thread::sleep_for
#include "hal.h"

// Include headers for specific hardware initialization
#include "gpio.h"
#include "timer.h"
#include "adc.h"

void HAL_Init(void)
{
    // Initialize GPIOs
    GPIO_Init();

    // Initialize Timers
    Timer_Init();

    // Initialize ADCs
    ADC_Init();

    // Add other hardware initializations as needed
}

void HAL_Delay(uint32_t milliseconds)
{
    // Simulate a delay
    std::cout << "HAL: Delaying for " << milliseconds << " milliseconds." << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
}

void HAL_ReadTemperature(float *temperature)
{
    // Simulate reading a temperature sensor
    *temperature = 25.0; // Example fixed temperature
    std::cout << "HAL: Temperature read: " << *temperature << std::endl;
}
