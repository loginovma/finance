#ifndef BANK_H_
#define BANK_H_

class Bank: public Model
{
    char* name;
    
public:
    Bank(const char * bankName);
    const char* getName();
    ~Bank();
};


#endif