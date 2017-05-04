#include <string.h>
#include "account.h"

Account::Account(const char * number, Bank& bankk)
{
    strcpy(accno, number);
    bank = &bankk;
}

const char * Account::getNumber()
{
    return accno;
}

const char * Account::getBankName()
{
    return bank->getName();
}