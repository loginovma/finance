#include <string.h>
#include <iostream>
#include "ControllerStorage.h"

Controller* ControllerStorage::getController(const char* name)
{
    for (int i = 0; i < this->MAX; i++) 
    {
        if (this->controllers[i] == 0) {
            break;
        }
        
        if (!strcmp(this->controllers[i]->getName(), name)) {
            return this->controllers[i];
        }
    }
    
    std::cerr << "No controller found" << std::endl;
}

void ControllerStorage::storeController(Controller* controller)
{
    if (this->counter < this->MAX) {
        this->controllers[counter] = controller;
        
        return;
    }
    
    std::cerr << "Storage full" << std::endl;
}

void ControllerStorage::unload()
{
    for (int i = 0; i < this->MAX; i++) 
    {
        if (this->controllers[i] == 0) {
            break;
        }
        
        std::cout << this->controllers[i]->getName() << " unloaded" << std::endl;
        delete this->controllers[i];
    }
}

ControllerStorage::~ControllerStorage()
{
    this->unload();
}