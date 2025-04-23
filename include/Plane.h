#pragma once
#include "IGameObject.h"

class Plane : public IGameObject
{
public:
    Plane();
    void Update();
    void Render();
};