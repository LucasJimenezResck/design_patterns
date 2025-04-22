#pragma once
#include <iostream>
#include <string>
#include <vector>

//Used for a singleton pattern, only one logger instance is allowed
class Logger
{
public:
    //Since function is accessing a static variable it also has to be a static function
    static Logger* getInstance();
    void printMessages();
    void addMessage(std::string s);
    void destroyLogger();
private:
    Logger();
    virtual ~Logger();
    static Logger* mInstance;
    std::vector<std::string> mMessages;
};