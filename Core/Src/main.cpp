#include "main.h"
#include "ak09916.hpp"
#include "gpio.h"
#include "i2c.h"
#include "i2c_device.hpp"
#include "main.h"
#include "system_clock.h"
#include "usart.h"
#include <cstdio>

int main()
{
    HAL_Init();
    SystemClock_Config();

    MX_GPIO_Init();
    MX_USART2_UART_Init();
    MX_I2C1_Init();

    using namespace AK09916;
    using namespace Utility;

    auto i2c_device = I2CDevice{&hi2c1, DEV_ADDRESS};

    auto control_1 = CONTROL_1{};

    auto control_2 = CONTROL_2{.mode = std::to_underlying(Mode::CONTINUOUS_1)};

    auto control_3 = CONTROL_3{.srst = true};

    auto ak09916 = AK09916::AK09916{std::move(i2c_device), control_1, control_2, control_3};

    while (true) {
        if (ak09916.is_data_ready()) {
            auto const& [x, y, z] = ak09916.get_magnetic_field_scaled().value();
            printf("magnetic field x: %f, y: %f, z: %f\n\r", x, y, z);
        }
    }

    return 0;
}
