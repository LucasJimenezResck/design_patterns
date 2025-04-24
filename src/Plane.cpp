#include "../include/Plane.h"

int Plane::objectsCreated = 0;

Plane::Plane()
{
    x = 0;
    y = 0;
    objectsCreated++;
}

Plane::Plane(int mX, int mY)
{
    x = mX;
    y = mY;
    objectsCreated++;
}

IGameObject* Plane::Create()
{
    return new Plane;
}

void Plane::Update()
{

}
void Plane::Render()
{
    
}