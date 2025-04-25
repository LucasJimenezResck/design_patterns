#pragma once
#include "IGameObject.h"
#include "Boat.h"
#include "Plane.h"
#include "Ant.h"
#include <map>

//added Singleton implementation to this class so there can be only one Factory
class FactoryGameObject
{
    typedef IGameObject *(*CreateObjectCallback)();
public:
    static void RegisterObject(const std::string& type, CreateObjectCallback cb);
    static void UnregisterObject(const std::string& type);
    static IGameObject* CreateSingleObject(std::string& type);
    
private:
    //Map made easier to type out
    typedef std::map<std::string, CreateObjectCallback> CallBackMap;
    static CallBackMap mObjects;
};