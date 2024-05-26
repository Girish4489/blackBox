#include <cstdint>
#ifndef HAL_H
#define HAL_H

// Initialize the Hardware Abstraction Layer
void HAL_Init(void);

// Define additional functions as needed
void HAL_Delay(uint32_t milliseconds);
void HAL_ReadTemperature(float *temperature);

#endif // HAL_H
