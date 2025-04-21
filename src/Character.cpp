#include "../include/Character.h"

Character::Character(std::string mName) : name(mName)
{
    
}

void Character::move(int _x, int _y)
{
    x = _x;
    y = _y;
}