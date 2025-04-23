#include "../include/IGameObject.h"
#include "../include/Plane.h"
#include "../include/Boat.h"

std::shared_ptr<IGameObject> MakeGameObjectFactory(ObjectType type)
{
    if(type == ObjectType::PLANE)
    {
        return std::make_shared<Plane>();
        
    }
    else if(type == ObjectType::BOAT)
    {
        return std::make_shared<Boat>();
    }
    else
    {
        return nullptr;
    }
}