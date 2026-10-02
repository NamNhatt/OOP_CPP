#include "drivers/Fan.hpp"

Fan::Fan()
    : m_speed(0)
{
}

void Fan::setSpeed(uint8_t speed)
{
    m_speed = speed;
}

uint8_t Fan::getSpeed() const
{
    return m_speed;
}