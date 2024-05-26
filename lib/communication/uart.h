#ifndef UART_H
#define UART_H

#include <stdint.h>

void UART_Init(void);
void UART_SendData(const uint8_t *data, uint16_t length);
void UART_ReceiveData(uint8_t *data, uint16_t length);

#endif // UART_H
