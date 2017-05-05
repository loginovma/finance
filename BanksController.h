#ifndef BANKSCONTROLLER_H_
#define BANKSCONTROLLER_H_
#include "bank.h"
#include "account.h"

#include "Controller.h"

class BanksController : public Controller
{
private:
    static const int menuSize = 4;
    
    char menu[menuSize][50] = {
        "1. Show all banks", 
        "2. Create new bank",
        "3. Delete bank",
        "4. Previous menu" };

public:
    void run();
	Controller * run(int option);
	void printMenu();
};

#endif