#include "ak09916.hpp"
#include "i2c_device.hpp"

namespace AK09916 {

    AK09916::AK09916(I2CDevice&& i2c_device,
                     CONTROL_1 const control_1,
                     CONTROL_2 const control_2,
                     CONTROL_3 const control_3) noexcept :
        i2c_device_{std::forward<I2CDevice>(i2c_device)}
    {
        this->initialize(control_1, control_2, control_3);
    }

    AK09916::~AK09916() noexcept
    {
        this->deinitialize();
    }

    float AK09916::get_magnetic_field_x_scaled() const noexcept
    {
        return 0.0f;
    }

    float AK09916::get_magnetic_field_y_scaled() const noexcept
    {
        return 0.0f;
    }

    float AK09916::get_magnetic_field_z_scaled() const noexcept
    {
        return 0.0f;
    }

    Vec3D<float> AK09916::get_magnetic_field_scaled() const noexcept
    {
        return Vec3D<float>();
    }

    void AK09916::initialize(CONTROL_1 const control_1, CONTROL_2 const control_2, CONTROL_3 const control_3) noexcept
    {}

    void AK09916::deinitialize() noexcept
    {}

    bool AK09916::is_valid_device_id() const noexcept
    {
        return false;
    }

    bool AK09916::is_company_device_id() const noexcept
    {
        return false;
    }

    std::uint8_t AK09916::get_device_id() const noexcept
    {
        return std::uint8_t();
    }

    std::uint8_t AK09916::get_company_id() const noexcept
    {
        return std::uint8_t();
    }

    std::int16_t AK09916::get_magnetic_field_x_raw() const noexcept
    {
        return std::int16_t();
    }

    std::int16_t AK09916::get_magnetic_field_y_raw() const noexcept
    {
        return std::int16_t();
    }

    std::int16_t AK09916::get_magnetic_field_z_raw() const noexcept
    {
        return std::int16_t();
    }

    Vec3D<std::int16_t> AK09916::get_magnetic_field_raw() const noexcept
    {
        return Vec3D<std::int16_t>();
    }

    WHO_AM_I_1 AK09916::get_who_am_1_register() const noexcept
    {
        return WHO_AM_I_1();
    }

    WHO_AM_I_2 AK09916::get_who_am_2_register() const noexcept
    {
        return WHO_AM_I_2();
    }

    XOUT AK09916::get_xout_registers() const noexcept
    {
        return XOUT();
    }

    YOUT AK09916::get_yout_registers() const noexcept
    {
        return YOUT();
    }

    ZOUT AK09916::get_zout_registers() const noexcept
    {
        return ZOUT();
    }

    OUT AK09916::get_out_registers() const noexcept
    {
        return OUT();
    }

    STATUS_2 AK09916::get_status_2_register() const noexcept
    {
        return STATUS_2();
    }

    CONTROL_1 AK09916::get_control_1_register() const noexcept
    {
        return CONTROL_1();
    }

    void AK09916::set_control_1_register(CONTROL_1 const control_1) const noexcept
    {}

    CONTROL_2 AK09916::get_control_2_register() const noexcept
    {
        return CONTROL_2();
    }

    void AK09916::set_control_2_register(CONTROL_2 const control_2) const noexcept
    {}

    CONTROL_3 AK09916::get_control_3_register() const noexcept
    {
        return CONTROL_3();
    }

    void AK09916::set_control_3_register(CONTROL_3 const control_3) const noexcept
    {}

}; // namespace AK09916