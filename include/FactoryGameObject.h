#include "IGameObject.h"
#include "Boat.h"
#include "Plane.h"

class FactoryGameObject
{
public:
    static std::shared_ptr<IGameObject> CreateObject(ObjectType type);
private:
    FactoryGameObject() {}
    ~FactoryGameObject() {}
    FactoryGameObject(const FactoryGameObject& obj) {}
};