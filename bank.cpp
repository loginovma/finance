#include <string.h>
#include "bank.h"

Bank::Bank(const char * bankName) 
{
    strcpy(name, bankName);
}

const char* Bank::getName()
{
    return name;
}
