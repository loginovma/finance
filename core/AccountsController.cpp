#include <iostream>
#include "AccountsController.h"

using namespace std;

void AccountsController::printMenu()
{
    for(int i = 0; i < this->menusize; i++) {
        std::cout << this->menu[i] << std::endl;
    }
}


const char* AccountsController::getName()
{
    return this->name;
}


Controller * AccountsController::run(int option, ControllerStorage* cstorage)
{
   cout << option << endl;
   return this;
}

AccountsController::AccountsController(ModelList* list) {
    this->list = list;
    this->name = "accounts";
    this->loadMenu();
}

void AccountsController::loadMenu()
{
   this->menu[0] = "1. Add new Account";
   this->menu[1] = "2. Delete Account";
   
   this->menusize = 2;
}