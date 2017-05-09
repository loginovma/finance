#include "Bank.h"
#include <string.h>

Bank::Bank(const char * name)
{
    this->name = new char[sizeof(name)];
    strcpy(this->name, name);
}

const char* Bank::getName()
{
    return this->name;
}

Bank::~Bank()
{
    delete[] this->name;
}
