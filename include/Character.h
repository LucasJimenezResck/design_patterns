#pragma once
#include <string>
#include <iostream>

class Character
{
    int x, y;
    std::string name;
public:
    Character(std::string mName);
    void move(int _x, int _y);
    std::string getName() { return name; }
};