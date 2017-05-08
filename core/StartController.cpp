#include <iostream>
#include "StartController.h"

using namespace std;

void StartController::printMenu()
{
    /*Bank sberbank("sberbank");
    
    Account girokonto("1245", sberbank);
    
    std::cout << "Your acc number is " << girokonto.getNumber() << std::endl;
    std::cout << "Your bank is " << girokonto.getBankName() << std::endl;*/
    

        for (int i = 0; i < this->MENUSIZE; i ++) {
            cout << this->menu[i] << endl;
        }
}

const char* StartController::getName()
{
    return this->name;
}


Controller * StartController::run(int option)
{
   /* Controller * banks = new BanksController();
    Controller * accounts = new AccountsController();*/
            switch (option) {
            case 1:
                std::cout << "1" << std::endl;
                return this;
                /*return banks;*/
                break;
            case 2:
                std::cout << "2" << std::endl;
                return this;
                //return accounts;
                break;
            default:
                std::cout << "Incorrect" << std::endl;
                return this;
                break;
        }
}

StartController::StartController(ModelList* list) {
    this->name = "start";
}