#include <cstdint>
#ifndef CAN_H
#define CAN_H
// Define the structure for CAN message
typedef struct
{
    uint32_t id;
    uint8_t data[8];
    uint8_t length;
} CANMessage;

void CAN_Init(void);
void CAN_SendMessage(const CANMessage *message);
void CAN_ProcessMessages(void);

#endif // CAN_H
