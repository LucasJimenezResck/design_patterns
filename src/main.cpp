#include "../include/Goblin.h"
#include "../include/Orc.h"
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

int main()
{
    //Test monster creation in main
    std::vector<Monster*> monsters;

    monsters.push_back(new Goblin);
    monsters.push_back(new Orc);

    for(const auto& e: monsters)
    {
        e->scream();
    }
    return 0;
}
