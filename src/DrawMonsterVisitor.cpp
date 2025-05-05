#include "../include/DrawMonsterVisitor.h"

void DrawMonsterVisitor::visit(const Orc& orc) const
{
    std::cout << "Drawing Orc" << std::endl; 
    //mMonsters.push_back(&orc);

}
void DrawMonsterVisitor::visit(const Goblin& goblin) const
{
    std::cout << "Drawing Goblin" << std::endl;
    //mMonsters.push_back(&goblin);
}
//Implementation can be outside of this class, because the accept goes after the visit