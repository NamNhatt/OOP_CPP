#include "application/FanController.hpp"

FanController::FanController()
    : m_overTemp(false)
{
}

void FanController::update(float temperature)
{
    if (temperature < 30.0f)
    {
        m_fan.setSpeed(0);
        m_overTemp = false;
    }
    else if (temperature <= 70.0f)
    {
        float speed = 20.0f + (temperature - 30.0f) * 2.0f;

        m_fan.setSpeed(static_cast<uint8_t>(speed));
        m_overTemp = false;
    }
    else
    {
        m_fan.setSpeed(100);
        m_overTemp = true;
    }
}

uint8_t FanController::getFanSpeed() const
{
    return m_fan.getSpeed();
}

bool FanController::isOverTemp() const
{
    return m_overTemp;
}