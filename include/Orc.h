#pragma once
#include "Monster.h"
#include "MonsterVisitor.h"


class Orc : public Monster
{
public:
    Orc(){isAccepted = false; std::cout << "Orc created" <<std::endl;}
    virtual void accept(MonsterVisitor& visitor);
};