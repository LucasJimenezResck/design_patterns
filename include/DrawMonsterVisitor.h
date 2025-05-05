#pragma once
#include <iostream>
#include "MonsterVisitor.h"
#include "Goblin.h"
#include "Orc.h"


class DrawMonsterVisitor : public MonsterVisitor
{
public:
    virtual void visit(const Orc& orc) const override;
    virtual void visit(const Goblin& goblin) const override;
    //Not sure if function drawAllMonsters can be used like this, or rather
    //should be implemented aside of the classes
    
};