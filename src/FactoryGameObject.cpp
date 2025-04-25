#include "../include/FactoryGameObject.h"
//Initialize static variable
FactoryGameObject::CallBackMap FactoryGameObject::mObjects;

void FactoryGameObject::RegisterObject(const std::string& type, CreateObjectCallback cb)
{
    mObjects[type] = cb;
}
void FactoryGameObject::UnregisterObject(const std::string& type)
{
    mObjects.erase(type);
}
IGameObject* FactoryGameObject::CreateSingleObject(std::string& type)
{
    CallBackMap::iterator it = mObjects.find(type);
    if(it != mObjects.end())
    {
        return (it->second)();
    }
    return nullptr;
}