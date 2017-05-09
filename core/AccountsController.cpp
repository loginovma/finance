#include <iostream>
#include <string.h>
#include "AccountsController.h"
#include "BanksController.h"

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
                this->createAccount(cstorage);
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

void AccountsController::createAccount(ControllerStorage* cstorage)
{
    cout << "Creating Account..." << endl
         << "Enter Bank name:" << endl;
         
    char bankName[21];

    fscanf(stdin, "%20s", bankName);
    
    BanksController* banksC = (BanksController*) cstorage->getController("banks");
    
    ModelPointer bank;
    if (!banksC->searchBank(bankName, bank)) {
        return;
    }
    
    cout << "Enter account number" << endl;
    
    char accno[21];

    fscanf(stdin, "%20s", accno);
    
    ModelPointer temp = new Account(accno, bank);
    
    this->list->add(temp);
}

void AccountsController::deleteAccount()
{
    cout << "Deleting Account..." << endl
         << "Enter acc nubmer:" << endl;
         
    char input[21];

    fscanf(stdin, "%20s", input);
    
    this->list->del(input);
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
   this->menu[3] = "0. Exit";
   
   this->menusize = 4;
}

bool AccountsController::bankSearch(const char* bankName)
{
    ModelNode* current = this->list->getHead();
    
    while(1) {
        if (!strcmp(current->getNode().ptr()->getBankName(), bankName) ) {
            return true;
        }
        
        if(current->next == 0) {
            break;
        }
        
        current = current->next;
    }
    
    return false;
}