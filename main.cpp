#include "car.h"
#include "gameObject.h"
#include "sideObject.h"
#include "fireHydrant.h"
#include <iostream>

class Player : public GameObject
{
    
};

void doCollision(GameObject* pGo)
{
    Player player;
    pGo->onCollision(&player);
    
}

int main()
{
//    Car car("Audi", 10, 1234);
//
//    car.switchOn();
//    car.accelerate();
//    std::cout<<"speed: "<<car.getSpeed()<<std::endl;
//    car.accelerate();
//    car.accelerate();
//    car.accelerate();
//    car.dashboard();
    
    
    FireHydrant fh;
    fh.setName("fireHydrant");
    fh.setDamage(100);
    doCollision(&fh);
    
    
}
