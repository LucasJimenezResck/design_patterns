#pragma once
#include "IGameObject.h"

class Boat : public IGameObject
{
public:
    Boat();
    Boat(int mX, int mY);
    void Update();
    void Render();
    static IGameObject* Create();
private:
    static int objectsCreated;
};