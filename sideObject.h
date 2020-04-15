#ifndef sideObject_h
#define sideObject_h

#include "gameObject.h"

class SideObject : public GameObject
{
private:
    int m_Damage;
    
public:
    SideObject() {  }
    SideObject(int damage, const std::string& name) : m_Damage(damage), GameObject(name) {  }
    ~SideObject() {  } 
    
    void setDamage(int damage) { m_Damage = damage; }
    
};

#endif /* sideObject_h */
