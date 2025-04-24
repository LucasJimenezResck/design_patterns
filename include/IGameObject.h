#pragma once
#include <memory>
#include <iostream>
class IGameObject
{
public:
    virtual ~IGameObject() {}
    virtual void Update() = 0;
    virtual void Render() = 0;
protected:
    int x, y;
};

enum class ObjectType {PLANE, BOAT};


