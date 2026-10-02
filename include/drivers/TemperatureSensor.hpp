#ifndef TEMPERATURE_SENSOR_HPP
#define TEMPERATURE_SENSOR_HPP

class TemperatureSensor
{
public:
    TemperatureSensor();

    void setTemperature(float temperature);
    float getTemperature() const;

private:
    float m_temperature;
};

#endif // TEMPERATURE_SENSOR_HPP