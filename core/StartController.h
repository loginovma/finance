#ifndef STARTCONTROLLER_H_
#define STARTCONTROLLER_H_

#include "Controller.h"


class StartController : public Controller
{
public:
    void printMenu();
    const char* getName();
    Controller * run(int option);
    
    StartController(ModelList* list = 0);
};

#endif