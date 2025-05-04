#include "../include/DrawMonsterVisitor.h"

void DrawMonsterVisitor::visit(Orc& orc) 
{
    std::cout << "Drawing Orc" << std::endl; 
    mMonsters.push_back(&orc);

}
void DrawMonsterVisitor::visit(Goblin& goblin) 
{
    std::cout << "Drawing Goblin" << std::endl;
    mMonsters.push_back(&goblin);
}
//Implementation can be outside of this class, because the accept goes after the visit
void DrawMonsterVisitor::drawAllMonsters()
{
    std::cout << std::endl;
    std::cout << "Drawing all Monsters:" << std::endl;
    for(auto m : mMonsters)
    {
        m->accept(*this);
    }
}