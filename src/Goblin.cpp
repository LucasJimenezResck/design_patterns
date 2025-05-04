#include "../include/Goblin.h"

void Goblin::accept(MonsterVisitor& visitor)
{
    if(!isAccepted)
    {
        std::cout << "Goblin accepts" << std::endl;
        visitor.visit(*this);
    }
    isAccepted = true;
}