#include <iostream>
#include "StartController.h"

using namespace std;

void StartController::printMenu()
{
    for(int i = 0; i < this->menusize; i++) {
        std::cout << this->menu[i] << std::endl;
    }
    
    //std::cout << "menu printed" << std::endl;
    
}


const char* StartController::getName()
{
    return this->name;
}


Controller * StartController::run(int option, ControllerStorage* cstorage)
{
     switch (option) {
            case 1:
                return cstorage->getController("banks");
                break;
            case 2:
                return cstorage->getController("accounts");
                break;
            default:
                std::cout << "Incorrect" << std::endl;
                return this;
                break;
        }
}

StartController::StartController() {
    this->name = "start";
    this->loadMenu();
}

void StartController::loadMenu()
{
   this->menu[0] = "1. Banks";
   this->menu[1] = "2. Accounts";
   this->menu[2] = "0. Exit";
   
   this->menusize = 3;
}