#include "../include/Move.h"
#include <ctime>
#include <cstdlib>


Move::Move()
{
    if(myMacro == NULL)
        myMacro = new MacroCommand;
    x = 0;
    y = 0;
    myMacro->add(this);
}

void Move::execute(Character& c)
{
    
    int randomx = rand() % 4;
    int randomy = rand() % 4;
    c.move(randomx, randomy);
    x = randomx;
    y = randomy;
    std::cout << c.getName() << " moved (" << x << ", " << y << ")." << std::endl;
}

void Move::undo(Character& c)
{
    
    c.move(-x, -y);
    std::cout << c.getName() << " undid move (" << -x << ", " << -y << ")." << std::endl;
}