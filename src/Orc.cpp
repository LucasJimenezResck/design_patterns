#include "../include/Orc.h"

void Orc::accept(MonsterVisitor& visitor)
{
    if(!isAccepted)
    {
    std::cout << "Orc accepts" << std::endl;
    visitor.visit(*this);
    }
    isAccepted = true;
}