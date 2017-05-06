#ifndef ACCOUNT_H_
#define ACCOUNT_H_
#include "bank.h"

class Account: public Model
{
    private:
	    char accno[20];
    	Bank* bank;
	
    public:
        const char * getNumber();
        const char * getBankName();
	    Account(const char * number, Bank& bank);
}; 

#endif