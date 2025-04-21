#pragma once
#include "Command.h"
#include "MacroCommand.h"

class Move : public Command
{
    int x, y;
public:
    Move();
    void execute(Character& c);
    void undo(Character& c);
};