#include "DELAYUS.h"
#include "tim.h"

/**
 * @brief 마이크로초(us) 단위의 지연 함수
 * @param us 지연 시간(마이크로초)
 */
extern TIM_HandleTypeDef htim3; // TIM11 핸들러 선언

void delay_us(uint16_t us)
{
    __HAL_TIM_SET_COUNTER(&htim3, 0); // 타이머 초기화
    while (__HAL_TIM_GET_COUNTER(&htim3) < us); // 지정된 us만큼 대기
}
