#ifndef SPI_H
#define SPI_H

#include <stdint.h>

void SPI_Init(void);
void SPI_TransferData(const uint8_t *txData, uint8_t *rxData, uint16_t length);

#endif // SPI_H
