#include <iostream>
#include "BanksController.h"

using namespace std;

void BanksController::run()
{
    cout << "Hello from BanksController" << endl;
}

void BanksController::printMenu()
    {
        for (int i = 0; i < this->menuSize; i ++) {
        cout << this->menu[i] << endl;
    }
}