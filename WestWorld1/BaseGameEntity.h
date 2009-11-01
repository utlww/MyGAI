#ifndef ENTITY_H
#define ENTITY_H

#include <cassert>
//
// class for game entity
//

class BaseGameEntity
{
private:
    int m_ID;
    static int m_iNextValidID;
    
    void SetID(int val);
public:
    BaseGameEntity(){ SetID(m_iNextValidID); }
    BaseGameEntity(int id) { SetID(id); }
    
    virtual ~BaseGameEntity(){};
    
    virtual void Update() =0;

    int ID() const {return m_ID;}
};
#endif
