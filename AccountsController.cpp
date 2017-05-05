#include <iostream>
#include "AccountsController.h"

using namespace std;

void AccountsController::run()
{
    cout << "Accounts Menu" << endl;
    cout << "Please select your action" << endl;
    
    for (int i = 0; i < this->menuSize; i ++) {
        cout << menu[i] << endl;
    }
    
    int option = 0;
    
    while (1) {
        std::cin >> option;
        
        if (!option) {
            break;
        }
        
        /*switch (option) {
            case 1:
                this->showAllAccounts();
                break;
            case 2:
                this->createAccount(const char * number, Bank& bank);
                break;
            case 3:
                this->deleteAccount(const char * number);
                break;
            default:
                std::cout << "Incorrect" << std::endl;
                break;
        }*/
        
        
    }
}

void AccountsController::printMenu()
    {
        for (int i = 0; i < this->menuSize; i ++) {
        cout << this->menu[i] << endl;
    }
}
/*
void AccountsController::showAllAccounts() 
{
    cout << "Showing all Accounts" << endl;
}

void AccountsController::showAllAccounts() 
{
    cout << "Showing all Accounts" << endl;
}*/