#include <iostream>
#include "../include/car.h"
#include "../include/truck.h"
#include "../include/motorcycle.h"

using namespace std;

int main(void)
{
    Car coolCar;
    coolCar.startEngine();
    coolCar.drive();
    coolCar.brake();
    coolCar.showParameters();
    return 0;
}
//---------------------------------------------------------------------------
