#ifndef BANK_H_
#define BANK_H_

#include "Model.h"

class Bank : public Model
{
    const char* name;
    
public:
    Bank(const char * bankName);
    const char* getName();
    ~Bank();
};


#endif