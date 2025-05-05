#include "../include/Goblin.h"
#include "../include/Orc.h"
#include "../include/DrawMonsterVisitor.h"
//Under implementation:
//Visitor

//Fully implemented patterns:
//Command
//Singleton
//Factory using a singleton class
//Extended factory
//Iterator
//Observer (with a little room for expansion)

//Visitor pattern lets the programmer do operations over a group of elements without changing the
//class in which they operate
//In this case it will be implemented to manage the attributes of different types of enemies inside
//a game

//Visitor pattern is great for extensibility because it is closed to modification but open for
//expansion. We don't need to change the class Monster, just the visitor

void drawAllMonsters(const std::vector<Monster*>& mMonsters)
{
    std::cout << std::endl;
    std::cout << "Drawing all Monsters:" << std::endl;
    for(const auto& m : mMonsters)
    {
        m->accept(DrawMonsterVisitor{});
    }
}

int main()
{
    //Test monster creation in main (now not used anymore)
#if 0
    std::vector<Monster*> monsters;

    monsters.push_back(new Goblin);
    monsters.push_back(new Orc);

    for(const auto& e: monsters)
    {
        e->scream();
    }
#endif
    std::vector<Monster*> MonsterList;
    Orc myOrc1;
    Goblin myGoblin1;
    MonsterList.push_back(&myGoblin1);
    MonsterList.push_back(&myOrc1);
    DrawMonsterVisitor dmv;
    myGoblin1.accept(dmv);
    myOrc1.accept(dmv);

    drawAllMonsters(MonsterList);
    
    return 0;
}
