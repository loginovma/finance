#include <iostream>
#include "AccountsController.h"

using namespace std;

void AccountsController::printMenu()
{
    this->printList();
    
    for(int i = 0; i < this->menusize; i++) {
        std::cout << this->menu[i] << std::endl;
    }
}

void AccountsController::printList()
{
    cout << "You have following accounts:" << endl;
    ModelNode* current = this->list->getHead();
    
    while(current != 0) {
        cout << current->getNode().ptr()->getNumber() << ' '
             << current->getNode().ptr()->getBankName() << endl;
             
        current = current->next;
    }
    
    cout << endl;
}


const char* AccountsController::getName()
{
    return this->name;
}


Controller * AccountsController::run(int option, ControllerStorage* cstorage)
{
   switch (option) {
            case 1:
                this->createAccount();
                return this;
                break;
            case 2:
                this->deleteAccount();
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

void AccountsController::createAccount()
{
    cout << "Creating Account..." << endl;
}

void AccountsController::deleteAccount()
{
    cout << "Deleting Account..." << endl;
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
   this->menu[2] = "3. Back to main menu";
   
   this->menusize = 3;
}