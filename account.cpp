#include <string.h>
#include <iostream>
#include "account.h"

Account::Account(const char * number, Bank& bank)
{
    strcpy(accno, number);
    this->bank = &bank;
    
}

const char * Account::getNumber()
{
    return accno;
}

const char * Account::getBankName()
{
    return bank->getName();
}

