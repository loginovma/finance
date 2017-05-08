#include <string.h>
#include <iostream>
#include "Controller.h"

const char* Controller::getName()
{
    return this->name;
}

void Controller::loadMenu()
{
   //todo 
}

void Controller::addList(ModelList& list)
{
    this->list = &list;
}

void Controller::printMenu()
{
    //todo
}

void Controller::printList()
{
    //todo
}
