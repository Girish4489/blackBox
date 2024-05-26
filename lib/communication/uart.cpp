#include "uart.h"
#include <iostream> // For simulating hardware with standard I/O

void UART_Init(void)
{
    // Initialize the UART hardware (mock implementation)
    std::cout << "UART: Initialized." << std::endl;
}

void UART_SendData(const uint8_t *data, uint16_t length)
{
    // Simulate sending data over UART
    std::cout << "UART: Sending data (length=" << length << "): ";
    for (uint16_t i = 0; i < length; i++)
    {
        std::cout << "0x" << std::hex << (int)data[i] << " ";
    }
    std::cout << std::endl;
}

void UART_ReceiveData(uint8_t *data, uint16_t length)
{
    // Simulate receiving data over UART
    std::cout << "UART: Receiving data (length=" << length << ")" << std::endl;
    for (uint16_t i = 0; i < length; i++)
    {
        data[i] = 0x00; // Example: Fill with zeroes
    }
}
