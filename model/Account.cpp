#include <string.h>
#include "Account.h"


Account::Account(const char * number, ModelPointer& bank) : bank(bank)
{
    strcpy(this->accno, number);
    this->bank = bank;
}

const char* Account::getBankName()
{
    return bank.ptr()->getName();
}

const char* Account::getNumber()
{
    return this->accno;
}

const char* Account::getName()
{
    return this->getNumber();
}