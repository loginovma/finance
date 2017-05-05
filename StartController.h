#ifndef STARTCONTROLLER_H_
#define STARTCONTROLLER_H_
#include "bank.h"
#include "account.h"
#include "Controller.h"
#include "BanksController.h"
#include "AccountsController.h"

class StartController : public Controller
{
private:
    static const int menuSize = 3;
    
    char menu[menuSize][50] = {
        "1. Banks menu", 
        "2. Accounts menu",
        "0. Exit" };

public:
    void printMenu();
    Controller * run(int option);

};

#endif