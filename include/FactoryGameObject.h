#include "IGameObject.h"
#include "Boat.h"
#include "Plane.h"

//added Singleton implementation to this class so there can be only one Factory
class FactoryGameObject
{
public:
    static std::shared_ptr<IGameObject> CreateObject(ObjectType type);
    static void PrintCounts();
    static FactoryGameObject* getInstance();
    void DestroyFactory();
private:
    FactoryGameObject() {}
    ~FactoryGameObject() {}
    FactoryGameObject(const FactoryGameObject& obj) {}
    static int sPlane;
    static int sBoat;
    static FactoryGameObject* mInstance;
};