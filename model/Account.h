#ifndef ACCOUNT_H_
#define ACCOUNT_H_
#include "Bank.h"
#include "../core/ModelPointer.h"

class Account: public Model
{
    private:
	    char accno[21];
    	ModelPointer bank;
	
    public:
        const char * getNumber();
        const char * getBankName();
	    Account(const char * number, ModelPointer& bank);
}; 

#endif