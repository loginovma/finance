#include <iostream>
#include "account.h"
#include "bank.h"

int main(int argc, char ** argv)
{
    Bank sberbank("sberbank");
    
    Account girokonto("1245", sberbank);
    
    std::cout << "Your acc number is " << girokonto.getNumber() << std::endl;
    std::cout << "Your bank is " << girokonto.getBankName() << std::endl;
    
    return 0;
}