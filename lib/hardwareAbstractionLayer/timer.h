#ifndef TIMER_H
#define TIMER_H

#include <stdint.h>

void Timer_Init(void);
void Timer_Start(uint32_t milliseconds);
void Timer_Stop(void);

#endif // TIMER_H
