#include "../include/MacroCommand.h"

void MacroCommand::execute(Character &c)
{
    for(int i = 0; i < command_queue.size(); i++)
    {
        command_queue[i]->execute(c);
    }
}

void MacroCommand::undo(Character &c)
{
    for(int i = command_queue.size() - 1; i > -1; i--)
    {
        command_queue[i]->undo(c);
    }
}

void MacroCommand::add(Command* mCommand)
{
    command_queue.push_back(mCommand);
}

