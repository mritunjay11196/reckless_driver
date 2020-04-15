#include "car.h"
#include <iostream>


Car::Car(const std::string& manufacturer, float fuel, int reg)
{
    this->manufacturer = manufacturer;
    this->fuel = fuel;
    registrationNumber = reg;
    speed = 0;
}

void Car::switchOn()
{
    isRunning = true;
}

void Car::switchOff()
{
    isRunning = false;
}

void Car::accelerate()
{
    if(!isRunning)
        return;
    speed++;
    fuel -= .05f;
}

void Car::brake()
{
    speed = 0;
}

void Car::dashboard()
{
    std::cout<<"speed: "<<speed<<std::endl;
    std::cout<<"fuel: "<<fuel<<std::endl;
}

void Car::fillFuel(float amount)
{
    fuel += amount;
}

float Car::getFuel()
{
    return fuel;
}

float Car::getSpeed()
{
    return speed;
}

