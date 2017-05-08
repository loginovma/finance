#ifndef CONTROLLER_H_
#define CONTROLLER_H_

#include "ModelList.h"

class Controller
{
public:
    static const int MENUSIZE = 10;
    
protected:
    ModelList* list;
    const char* name;
    char* menu[MENUSIZE];
    
public:
    virtual const char * getName();
    
    virtual void loadMenu();
    void addList(ModelList& list);
    
    virtual void printMenu();
    virtual void printList();
    virtual Controller * run(int option) = 0;
};

#endif