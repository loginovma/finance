#include <iostream>
#include "StartController.h"

void StartController::run()
{
    Bank sberbank("sberbank");
    
    Account girokonto("1245", sberbank);
    
    std::cout << "Your acc number is " << girokonto.getNumber() << std::endl;
    std::cout << "Your bank is " << girokonto.getBankName() << std::endl;
}