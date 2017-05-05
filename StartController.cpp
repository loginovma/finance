#include <iostream>
#include "StartController.h"

using namespace std;

void StartController::printMenu()
{
    /*Bank sberbank("sberbank");
    
    Account girokonto("1245", sberbank);
    
    std::cout << "Your acc number is " << girokonto.getNumber() << std::endl;
    std::cout << "Your bank is " << girokonto.getBankName() << std::endl;*/
    

        for (int i = 0; i < this->menuSize; i ++) {
            cout << this->menu[i] << endl;
        }
}


Controller * StartController::run(int option)
{
    Controller * banks = new BanksController();
    Controller * accounts = new AccountsController();
            switch (option) {
            case 1:
                return banks;
                break;
            case 2:
                return accounts;
                break;
            default:
                std::cout << "Incorrect" << std::endl;
                return this;
                break;
        }
}