#ifndef LOGGER_H
#define LOGGER_H
#include <string>
#include <mutex>

using namespace std;
//singleton class 
class Logger{
    static int counter;
    static Logger* logInstance;
    static mutex mix;
    Logger();// made private constructor so not every user can access any time .. but how we can access 
public:
    //Logger();
    static Logger* getLogger();//return ponier to Logger instance 
    void Log(string msg);

};






#endif // end of logger