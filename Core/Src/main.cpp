#include "main.h"
#include "gpio.h"
#include "i2c.h"
#include "main.h"
#include "system_clock.h"
#include "usart.h"

int main()
{
    HAL_Init();
    SystemClock_Config();

    MX_GPIO_Init();
    MX_USART2_UART_Init();
    MX_I2C1_Init();

    while (true) {
    }

    return 0;
}
