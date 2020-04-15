#ifndef fireHydrant_h
#define fireHydrant_h

# include "sideObject.h"

class FireHydrant : public SideObject
{
private:
    
public:
    FireHydrant() {  }
    FireHydrant(int damage, const std::string& name) : SideObject(damage, name) {  }
    ~FireHydrant() {  }
    
    void onCollision(GameObject* pOther) { std::cout<<"on collision called on fire hydrant\n"; }
    
};

#endif /* fireHydrant_h */
