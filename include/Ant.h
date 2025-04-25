#pragma once
#include "IGameObject.h"

class Ant : public IGameObject
{
public:
    Ant();
    Ant(int mX, int mY);
    void Update();
    void Render();
    static IGameObject* Create();
private:
    static int objectsCreated;
};