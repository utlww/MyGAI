#include "MinerStates.h"

EnterMineAndDig *EnterMineAndDig::m_pInstance = NULL;

EnterMineAndDig *EnterMineAndDig::GetInstance()
{
    if(m_pInstance == NULL)
        m_pInstance = new EnterMineAndDig;
    return m_pInstance;
}

void EnterMineAndDig::Enter(Miner *pMiner)
{
    printf("Bob enter mine, and start to dig ...\n");
}

void EnterMineAndDig::Execute(Miner *pMiner)
{
    //if(pMiner->m_iGoldCarried)
}

void EnterMineAndDig::Exit(Miner *pMiner)
{

}
