#ifndef gameObject_h
#define gameObject_h

#include <string>
#include <iostream>

class GameObject
{
private:
    std::string  m_Name;
public:
    GameObject() {  }
    GameObject(const std::string& name) : m_Name(name) {  }
    ~GameObject() {  }
    
    void setName(const std::string& name) { m_Name = name; }
    const std::string getName() { return m_Name; }
    virtual void onCollision(GameObject* pOther) { std::cout<<"on collision called on game object\n"; }
};

#endif /* gameObject_hpp */
