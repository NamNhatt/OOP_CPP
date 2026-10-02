#ifndef FAN_HPP
#define FAN_HPP

#include <cstdint>

using namespace std;

class Fan
{
public:
    Fan();

    void setSpeed(uint8_t speed);
    uint8_t getSpeed() const;

private:
    uint8_t m_speed;
};

#endif // FAN_HPP