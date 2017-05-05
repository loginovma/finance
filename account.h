#ifndef ACCOUNT_H_
#define ACCOUNT_H_
#include "bank.h"

class Account
{
    private:
	    char accno[30];
    	Bank* bank;
	
    public:
        const char * getNumber();
        const char * getBankName();
	    Account(const char * number, Bank& bank);
}; 

#endif