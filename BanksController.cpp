#include <iostream>
#include "BanksController.h"

using namespace std;

Controller * BanksController::run(int option)
{
    cout << "Hello from BanksController" << endl;

	return this;
}

void BanksController::printMenu()
{
    for (int i = 0; i < this->menuSize; i ++) {
        cout << this->menu[i] << endl;
    }
}