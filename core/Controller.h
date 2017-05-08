#ifndef CONTROLLER_H_
#define CONTROLLER_H_

#include "ModelList.h"
#include "ControllerStorage.h"

class ControllerStorage;

class Controller
{
public:
    static const int MAXMENUSIZE = 10;
    int menusize;
    
protected:
    ModelList* list;
    const char* name;
    const char* menu[MAXMENUSIZE];
    
public:
    virtual const char * getName();
    
    virtual void loadMenu() = 0;
    void addList(ModelList& list);
    
    virtual void printMenu();
    virtual void printList();
    virtual Controller * run(int option, ControllerStorage* cstorage) = 0;
};

#endif