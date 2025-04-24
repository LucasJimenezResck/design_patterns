#include "../include/Boat.h"

int Boat::objectsCreated = 0;

Boat::Boat()
{
    x = 0;
    y = 0;
    objectsCreated++;
}

Boat::Boat(int mX, int mY)
{
    x = mX;
    y = mY;
    objectsCreated++;
}
void Boat::Update()
{

}
void Boat::Render()
{
    
}

IGameObject* Boat::Create()
{
    return new Boat;
}