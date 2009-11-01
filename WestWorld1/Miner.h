#ifndef _MINER_H
#define _MINER_H
#include "BaseGameEntity.h"

class State;

enum location_type
{
    GOLDMINE = 0,
    BANK,
    HOME,
    SALOON
};

// amout of god a miner must have before he feels comfortable
const int ComfortLevel = 5;
// amout of nuggets miner can carry
const int MaxNuggets  = 3;
// above this level, miner will feel thirsty
const int ThirstyLevel = 5;
// above this level, miner is sleepy
const int TirednessLevel  = 5;


class Miner : public BaseGameEntity
{
public:
    Miner(int id);
    ~Miner(){}

    void Update();

    void ChangeState(State *pNewState);
    
    inline void ChangeLocation(location_type loc){m_location = loc;}

    inline location_type Location(){return m_location;}
    
    location_type GetLocation(){return m_location;}
    void SetLocation(location_type l){m_location = l;}

    int GetGoldCarrried(){return m_iGoldCarried;}
    void SetGoldCarried(int g){m_iGoldCarried = g;}

    int GetGoldInBank(){return m_iGoidInBank;}
    void SetGoldInBank(int g){m_iGoidInBank = g;}

    int GetThirstyLevel(){return m_iThirsty;}
    void SetThirstyLevel(int t){m_iThirsty = t;}

    int GetFatigure(){return m_iFatigure;}
    void SetFatigure(int f){m_iFatigure = f;}

private:
    State *m_pCurrentState;

    location_type m_location;

    int m_iGoldCarried;

    int m_iGoidInBank;

    int m_iThirsty;

    int m_iFatigure;

};
#endif
