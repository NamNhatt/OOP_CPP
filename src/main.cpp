#include <iostream>

#include "application/FanController.hpp"

using namespace std;

int main()
{
    FanController controller;

    controller.update(25.0f);

    cout << "25 C -> "
         << static_cast<int>(controller.getFanSpeed())
         << "%, Alarm: "
         << controller.isOverTemp()
         << endl;

    controller.update(50.0f);

    cout << "50 C -> "
         << static_cast<int>(controller.getFanSpeed())
         << "%, Alarm: "
         << controller.isOverTemp()
         << endl;

    controller.update(75.0f);

    cout << "75 C -> "
         << static_cast<int>(controller.getFanSpeed())
         << "%, Alarm: "
         << controller.isOverTemp()
         << endl;

    return 0;
}