#include <iostream>
#include "BanksController.h"

using namespace std;

void BanksController::printMenu()
{
    for(int i = 0; i < this->menusize; i++) {
        std::cout << this->menu[i] << std::endl;
    }
}


const char* BanksController::getName()
{
    return this->name;
}


Controller * BanksController::run(int option, ControllerStorage* cstorage)
{
   cout << option << endl;
   return this;
}

BanksController::BanksController(ModelList* list) {
    this->list = list;
    this->name = "banks";
    this->loadMenu();
}

void BanksController::loadMenu()
{
   this->menu[0] = "1. Add new Bank";
   this->menu[1] = "2. Delete Bank";
   
   this->menusize = 2;
}