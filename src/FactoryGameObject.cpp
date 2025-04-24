#include "../include/FactoryGameObject.h"


std::shared_ptr<IGameObject> FactoryGameObject::CreateObject(ObjectType type)
{
    if(type == ObjectType::PLANE)
    {
        return std::make_shared<Plane>();
    }
    else if(type == ObjectType::BOAT)
    {
        return std::make_shared<Boat>();
    }
    
        return nullptr;
    
}