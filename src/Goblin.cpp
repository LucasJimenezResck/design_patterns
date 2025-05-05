#include "../include/Goblin.h"

void Goblin::accept(const MonsterVisitor& visitor)
{
    
    
        std::cout << "Goblin accepts" << std::endl;
        visitor.visit(*this);
    
    isAccepted = true;
}