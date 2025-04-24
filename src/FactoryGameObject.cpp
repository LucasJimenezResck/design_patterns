#include "../include/FactoryGameObject.h"

int FactoryGameObject::sPlane= 0;
int FactoryGameObject::sBoat= 0;
FactoryGameObject* FactoryGameObject::mInstance = nullptr;


std::shared_ptr<IGameObject> FactoryGameObject::CreateObject(ObjectType type)
{
    if(type == ObjectType::PLANE)
    {
        sPlane++;
        return std::make_shared<Plane>();
    }
    else if(type == ObjectType::BOAT)
    {
        sBoat++;
        return std::make_shared<Boat>();
    }
    
        return nullptr;
    
}

FactoryGameObject* FactoryGameObject::getInstance()
{
    if(mInstance == nullptr)
        return new FactoryGameObject;
    return mInstance;
}

void FactoryGameObject::DestroyFactory()
{
    delete mInstance;
}

void FactoryGameObject::PrintCounts()
{
    std::cout << "Planes created: " << sPlane << std::endl;
    std::cout << "Boats created: " << sBoat << std::endl;
}