#include "../include/motorcycle.h"

void Motorcycle::setup()
{
    engineStarted = false;
}
Motorcycle::Motorcycle() /*konstruktor klasy Motorcycle*/
{
    enginePower = 20;
    engineDisplacement = 500;
}
Motorcycle::Motorcycle(Motorcycle& copy)
{
    enginePower = copy.enginePower;
    engineDisplacement = copy.engineDisplacement;
}
Motorcycle::Motorcycle(unsigned int power, unsigned int displacement)
{
    engineDisplacement = displacement;
    enginePower = power;
}