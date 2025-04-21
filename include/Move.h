#pragma once
#include "Command.h"
#include "MacroCommand.h"

class Move : public Command
{
    int x, y;
    inline static MacroCommand* myMacro;
public:
    MacroCommand* getMacroCommand() { return myMacro; }
    Move();
    void execute(Character& c);
    void undo(Character& c);
};