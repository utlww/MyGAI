#ifndef ENTITY_NAMES_H
#define ENTITY_NAMES_H

#include <string>

enum Entity
{
    ent_Miner_Bob,
    ent_Elsa
};

inline std::string GetNameOfEntity(Entity e)
{
    switch(e)
    {
        case ent_Miner_Bob:
            return "Bob";
        case ent_Elsa:
            return "Elsa";
        default:
            return "Unkown";
    }
}

#endif
