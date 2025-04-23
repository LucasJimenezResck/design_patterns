#pragma once
#include "IGameObject.h"

class Boat : public IGameObject
{
public:
    Boat();
    void Update();
    void Render();
};