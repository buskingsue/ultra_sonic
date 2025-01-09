#ifndef DELAYUS_H
#define DELAYUS_H

#include "stm32f4xx_hal.h"

/**
 * @brief 마이크로초(us) 단위로 지연을 발생시키는 함수
 * @param us 지연 시간(마이크로초)
 */
void delay_us(uint16_t us);

#endif /* DELAYUS_H */
