#include "Miner.h"
#include "MinerStates.h"

Miner::Miner(int id) : BaseGameEntity(id),
                        m_location(HOME), 
                        m_iGoldCarried(0),
                        m_iGoidInBank(0), 
                        m_iFatigure(0), 
                        m_iThirsty(0),
                        m_pCurrentState(EnterMineAndDig::GetInstance())                        
{}

void Miner::ChangeState(State *p_NewState)
{
    assert(m_pCurrentState && p_NewState);
    m_pCurrentState->Exit(this);
    m_pCurrentState = p_NewState;
    m_pCurrentState->Enter(this);
}

void Miner::Update()
{
    assert(m_pCurrentState);
    m_iThirsty++;
    m_pCurrentState->Execute(this);
}

