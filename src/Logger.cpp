#include "../include/Logger.h"

//Initialize static variable
Logger* Logger::mInstance = nullptr;

Logger::Logger()
{
    std::cout << "Logger created" << std::endl;
    
}

Logger::~Logger()
{
    std::cout << "Logger destroyed" << std::endl;
}

//Critical moment for multi-threaded processes
Logger* Logger::getInstance()
{ 
    //Pointer to single instance
    if(mInstance == nullptr)
        mInstance = new Logger;
    //allocate memory for an instance and return its pointer
    return mInstance;
}

void Logger::addMessage(std::string s)
{
    mMessages.push_back(s);
}

//Critical moment for multi-threaded processes
void Logger::printMessages()
{
    std::cout << "Accessing log" << std::endl;
    for(const auto &element : mMessages)
    {
        std::cout << "\t" << element << std::endl;
    }
}

void Logger::destroyLogger()
{
    //Manually free allocated memory
    delete mInstance;
}