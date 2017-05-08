#ifndef ACCOUNTSCONTROLLER_H_
#define ACCOUNTSCONTROLLER_H_

#include "../model/Bank.h"
#include "../model/Account.h"

#include "Controller.h"

class AccountsController : public Controller
{
public:
    void loadMenu();
    void printMenu();
    const char* getName();
    Controller * run(int option, ControllerStorage* cstorage);
    
    AccountsController(ModelList* list);
};

#endif