#include "../include/Ant.h"

int Ant::objectsCreated = 0;

Ant::Ant()
{
    x = 0;
    y = 0;
    objectsCreated++;
}

Ant::Ant(int mX, int mY)
{
    x = mX;
    y = mY;
    objectsCreated++;
}
void Ant::Update()
{

}
void Ant::Render()
{
    
}

IGameObject* Ant::Create()
{
    return new Ant;
}