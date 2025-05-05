#include "../include/Orc.h"

void Orc::accept(const MonsterVisitor& visitor)
{

    std::cout << "Orc accepts" << std::endl;
    visitor.visit(*this);
    
    isAccepted = true;
}