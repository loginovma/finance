#include <iostream>

#include "account.h"
#include "bank.h"
#include "StartController.h"
#include "BanksController.h"

int main(int argc, char ** argv)
{
    StartController app;
    
    app.run();
    
    int option = 0;
    
    while (1) {
        std::cin >> option;
        
        if (!option) {
            break;
        }
        
        std::cout << option << std::endl;
        
        
    }
    
    return 0;
}