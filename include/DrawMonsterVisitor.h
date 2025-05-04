#pragma once
#include <iostream>
#include "MonsterVisitor.h"
#include "Goblin.h"
#include "Orc.h"


class DrawMonsterVisitor : public MonsterVisitor
{
public:
    virtual void visit(Orc& orc) override;
    virtual void visit(Goblin& goblin) override;
    //Not sure if function drawAllMonsters can be used like this, or rather
    //should be implemented aside of the classes
    void drawAllMonsters();
};