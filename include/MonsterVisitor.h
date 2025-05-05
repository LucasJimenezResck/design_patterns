#pragma once
#include <vector>
class Monster;
class Orc;
class Goblin;

class MonsterVisitor
{
protected:
    //std::vector<Monster*> mMonsters;
public:
    virtual ~MonsterVisitor() = default;
    virtual void visit(const Orc& orc) const = 0;
    virtual void visit(const Goblin& goblin) const = 0;
};