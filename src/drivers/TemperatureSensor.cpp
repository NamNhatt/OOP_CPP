#include "drivers/TemperatureSensor.hpp"

TemperatureSensor::TemperatureSensor()
    : m_temperature(0.0f)
{
}

void TemperatureSensor::setTemperature(float temperature)
{
    m_temperature = temperature;
}

float TemperatureSensor::getTemperature() const
{
    return m_temperature;
}