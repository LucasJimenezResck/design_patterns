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
    Orc myOrc1;
    Goblin myGoblin1;
    DrawMonsterVisitor dmv;
    myGoblin1.accept(dmv);
    myOrc1.accept(dmv);

    dmv.drawAllMonsters();
    dmv.drawAllMonsters();
    return 0;
}
