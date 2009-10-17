#ifndef ENTITY_H
#define ENTITY_H

class GameEntity
{
private:
    int m_ID;
    static int m_iNextValidID;

    void SetID(int val);
public:
    GameEntity(int id) { SetID(id); }
    
    virtual ~GameEntity(){};
    
    virtual void Update() =0;

    int ID() const {return m_ID;}
};
#endif