#ifndef STARTCONTROLLER_H_
#define STARTCONTROLLER_H_

#include "Controller.h"


class StartController : public Controller
{
public:
    void loadMenu();
    void printMenu();
    const char* getName();
    Controller * run(int option, ControllerStorage* cstorage);
    
    StartController();
};

#endif