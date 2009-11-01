#include "BaseGameEntity.h"

int BaseGameEntity::m_iNextValidID = 0;

void BaseGameEntity::SetID(int id)
{
    assert(id >= m_iNextValidID && "<BaseGameEntity::SetID>: invalid ID");    
    
    m_ID = id;
    m_iNextValidID = m_ID + 1;
}

