#include "communication_manager.h"

// Include headers for specific communication protocols
#include "can.h"
#include "uart.h"
#include "spi.h"

void CommunicationManager_Init(void)
{
    // Initialize communication interfaces
    CAN_Init();
    UART_Init();
    SPI_Init();
}

void CommunicationManager_HandleTasks(void)
{
    // Handle incoming and outgoing communication
    // Example: Process CAN messages
    CAN_ProcessMessages();

    // Example: Send data over UART
    // UART communication tasks can be added here
    // SPI communication tasks can be added here
}
