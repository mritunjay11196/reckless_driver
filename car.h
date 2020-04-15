#ifndef car_h
#define car_h

#include <string>

class Car
{
private:
    std::string manufacturer;
    float fuel;
    float speed;
    int registrationNumber;
    bool isRunning;
    
public:
    Car(const std::string& manufacturer, float fuel, int reg);
    
    void switchOn();
    void switchOff();
    void accelerate();
    void brake();
    void dashboard();
    void fillFuel(float amount);
    float getFuel();
    float getSpeed();
};



#endif /* car_hpp */
