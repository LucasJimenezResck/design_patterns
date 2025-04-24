#pragma once
#include "IGameObject.h"

class Plane : public IGameObject
{
public:
    Plane();
    Plane(int mX, int mY);
    void Update();
    void Render();
    static IGameObject* Create();
private:
    static int objectsCreated;

};