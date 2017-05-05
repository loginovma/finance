#ifndef ACCOUNTSCONTROLLER_H_
#define ACCOUNTSCONTROLLER_H_
#include <iostream>
#include "bank.h"
#include "account.h"
#include "Controller.h"

class AccountsController : public Controller
{
    static const int menuSize = 4;
    
    char menu[menuSize][50] = {
        "1. Show all accounts", 
        "2. Create new account",
        "3. Delete account",
        "4. Previous menu" };

public:
    void run();
    void printMenu();

    /*void showAllAccounts();
    void createAccount(const char * number, Bank& bank);
    void deleteAccount(const char * number);*/
};

#endif