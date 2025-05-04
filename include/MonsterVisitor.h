#pragma once
#include <vector>
class Monster;
class Orc;
class Goblin;

class MonsterVisitor
{
protected:
    std::vector<Monster*> mMonsters;
public:
    virtual ~MonsterVisitor() = default;
    virtual void visit(Orc& orc) = 0;
    virtual void visit(Goblin& goblin) = 0;
};