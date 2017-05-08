#include <string.h>
#include <iostream>
#include "Controller.h"

const char* Controller::getName()
{
    return this->name;
}

void Controller::addList(ModelList& list)
{
    this->list = &list;
}

void Controller::printMenu()
{

    for(int i = 0; i < this->menusize; i++) {
        std::cout << this->menu[i] << std::endl;
    }
    
    
}

void Controller::printList()
{
    //todo
}
