#include <iostream>
#include "logger.hpp"
using namespace std;
int Logger:: counter = 0;
Logger* Logger::logInstance = NULL;
mutex Logger::mix;
Logger::Logger()
{   
    counter++;
    cout<<"New Instance has creared and counter value is "<<counter<<endl;   
}

void Logger::Log(string msg)
{
    cout<<"message is "<< msg<<endl;
}

Logger* Logger::getLogger(){
    mix.lock();
    if(logInstance == NULL)
    {
       if(logInstance == NULL)
       {
           logInstance = new Logger();
       }
       mix.unlock();
    }
    return logInstance ;
}
