#include "Bank.h"

Bank::Bank(const char * name)
{
    this->name = name;
}

const char* Bank::getName()
{
    return this->name;
}

Bank::~Bank()
{
    delete[] this->name;
}
