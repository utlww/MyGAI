#ifndef MINER_STATES_H
#define MINER_STATES_H

#include <cstdlib>
#include <cstdio>

#include "State.h"
#include "CPPUtil.h"

class Miner;

class EnterMineAndDig : public Uncopyable, public State
{
public:
    ~EnterMineAndDig(){}
    static EnterMineAndDig *GetInstance();
    
    virtual void Enter(Miner *);
    virtual void Execute(Miner *);
    virtual void Exit(Miner *);

private:
    // static instance
    static EnterMineAndDig *m_pInstance;

    // disable constructor
    EnterMineAndDig(){}
};
#endif
