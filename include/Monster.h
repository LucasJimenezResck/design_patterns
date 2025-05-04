#pragma once
#include <iostream>
#include <vector>
#include "MonsterVisitor.h"
class MonsterVisitor;
class Monster
{
protected:
    bool isAccepted;
public:
    virtual ~Monster() = default;
    virtual void accept(MonsterVisitor& visitor) = 0;
};