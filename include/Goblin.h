#pragma once
#include "Monster.h"
#include "MonsterVisitor.h"

class Goblin : public Monster
{
public:
    Goblin(){isAccepted = false; std::cout << "Goblin created" <<std::endl;}
    virtual void accept(MonsterVisitor& visitor);
};