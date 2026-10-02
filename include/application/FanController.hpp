#ifndef FAN_CONTROLLER_HPP
#define FAN_CONTROLLER_HPP

#include <cstdint>

#include "drivers/Fan.hpp"

using namespace std;

class FanController
{
public:
    FanController();

    void update(float temperature);

    uint8_t getFanSpeed() const;
    bool isOverTemp() const;

private:
    Fan m_fan;
    bool m_overTemp;
};

#endif // FAN_CONTROLLER_HPP