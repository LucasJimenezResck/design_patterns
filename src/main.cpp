
#include "../include/Logger.h"


//Use a Logger class which can only have a single instance at a time
int main()
{
    Logger::getInstance()->addMessage("Hello Viki!");
    Logger::getInstance()->addMessage("I love you!");
    Logger::getInstance()->addMessage("Very much!");
    Logger::getInstance()->printMessages();
    //What happens when creating a pointer to the instance and trying to delete it
    Logger* pointer_to_Logger = Logger::getInstance();
    //In this case causes trouble because Destructor was also declared private but
    //Precaution is needed
    //delete pointer_to_Logger;
    
    Logger::getInstance()->destroyLogger();



    return 0;
}