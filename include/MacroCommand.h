#pragma once
#include "Command.h"


class MacroCommand : public Command
{
    std::vector<Command*> command_queue;
public:
    void execute(Character& c);
    void undo(Character& c);
    void add(Command* mCommand);
};

