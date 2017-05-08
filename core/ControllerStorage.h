#ifndef CONTROLLERSTORAGE_H_
#define CONTROLLERSTORAGE_H_

#include "Controller.h"
#include "ModelList.h"

class Controller;

class ControllerStorage
{
private:
    static const int MAX = 10;
    int counter = 0;
    Controller* controllers[MAX];
    void unload();
    
public:
    void storeController(Controller* controller);
    Controller* getController(const char* name);
    
    ~ControllerStorage();
};


#endif