#pragma once
#include "Character.h"
#include <vector>

//Abstract class design pattern "Command"
//Abstract version used in buttons for a videogame for example, with templates for interaction 
class Command
{
public:
    virtual ~Command() {}
    virtual void execute(Character& c) = 0;
    virtual void undo(Character& c) = 0;
};