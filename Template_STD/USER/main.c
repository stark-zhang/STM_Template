#include "stm32f4xx.h"
#include "delay.h"
#include "led.h"

/***********************************************************************************************************************************
--------------------------------------------------------------------------------------------------------------------------------------------------------------
Template_STD
--------------------------------------------------------------------------------------------------------------------------------------------------------------
|   该测试模板是为使用STM32F4ZGTx单片机的的标准库开发
--------------------------------------------------------------------------------------------------------------------------------------------------------------
|   模板以跑马灯实验为基础，没有使用位带操作
--------------------------------------------------------------------------------------------------------------------------------------------------------------
|   version     3.0.1
|   date          2017.03.11
--------------------------------------------------------------------------------------------------------------------------------------------------------------
***********************************************************************************************************************************/
int main(void)
{
    delay_init(168);
    LED_Init();
    
    while (1) {
        delay_ms (300);
        ON (GPIOF,GPIO_Pin_9);
        OFF (GPIOF,GPIO_Pin_10);
        delay_ms (300);
        ON (GPIOF,GPIO_Pin_10);
        OFF (GPIOF,GPIO_Pin_9);
    }
}
