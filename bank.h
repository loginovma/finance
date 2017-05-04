#ifndef BANK_H_
#define BANK_H_

class Bank
{
    char name[50];
    
public:
    Bank(const char * bankName);
    const char* getName();
};


#endif