#ifndef BANKSCONTROLLER_H_
#define BANKSCONTROLLER_H_

#include "../model/Bank.h"
#include "../model/Account.h"

#include "Controller.h"

class BanksController : public Controller
{
private:
    void createBank();
    void deleteBank();

public:
    void loadMenu();
    void printMenu();
    const char* getName();
    Controller * run(int option, ControllerStorage* cstorage);
    
    BanksController(ModelList* list);
};

#endif