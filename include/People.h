#pragma once
#include <vector>
#include <unordered_map>
#include <string>

//Unordered map iterator, data types renamed to reduce typing
typedef std::unordered_map<std::string, int> data_map;

class People
{
private:
    data_map name_birthday;
public:
    void addPersonData(std::string name, int date);
    data_map getMap() { return name_birthday; }
};