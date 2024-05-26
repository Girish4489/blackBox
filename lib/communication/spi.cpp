#include "spi.h"
#include <iostream> // For simulating hardware with standard I/O

void SPI_Init(void)
{
    // Initialize the SPI hardware (mock implementation)
    std::cout << "SPI: Initialized." << std::endl;
}

void SPI_TransferData(const uint8_t *txData, uint8_t *rxData, uint16_t length)
{
    // Simulate SPI data transfer
    std::cout << "SPI: Transferring data (length=" << length << ")" << std::endl;
    for (uint16_t i = 0; i < length; i++)
    {
        rxData[i] = txData[i]; // Example: Echo back the transmitted data
        std::cout << "SPI: TX=0x" << std::hex << (int)txData[i] << ", RX=0x" << std::hex << (int)rxData[i] << std::endl;
    }
}
