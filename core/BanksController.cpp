#include <iostream>
#include "BanksController.h"

using namespace std;

void BanksController::printMenu()
{
    this->printList();
    
    for(int i = 0; i < this->menusize; i++) {
        std::cout << this->menu[i] << std::endl;
    }
}

void BanksController::printList()
{
    cout << "You have contracts in following banks:" << endl;
    ModelNode* current = this->list->getHead();
    
    while(current != 0) {
        cout << current->getNode().ptr()->getName() << endl;
             
        current = current->next;
    }
    
    cout << endl;
}



const char* BanksController::getName()
{
    return this->name;
}


Controller * BanksController::run(int option, ControllerStorage* cstorage)
{
   switch (option) {
            case 1:
                this->createBank();
                return this;
                break;
            case 2:
                this->deleteBank();
                return this;
                break;
            case 3:
                return cstorage->getController("start");
                break;
            default:
                std::cout << "Incorrect" << std::endl;
                return this;
                break;
        }
}

BanksController::BanksController(ModelList* list) {
    this->list = list;
    this->name = "banks";
    this->loadMenu();
}

void BanksController::createBank()
{
    cout << "Creating bank.." << endl;
}

void BanksController::deleteBank()
{
    cout << "Deleting bank.." << endl;
}

void BanksController::loadMenu()
{
   this->menu[0] = "1. Add new Bank";
   this->menu[1] = "2. Delete Bank";
   this->menu[2] = "3. Back to main menu";
   
   this->menusize = 3;
}