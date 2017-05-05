#include <iostream>

#include "account.h"
#include "bank.h"
#include "Controller.h"
#include "StartController.h"

int main(int argc, char ** argv)
{
    cout << "Welcome to personal finance" << endl;
    cout << "Please choose your option from the menu:" << endl;

    StartController *app = new StartController();
    Controller * controller = app;

    int option = 0;
    
    while (1) {
        controller->printMenu();
        std::cin >> option;
        
        if (!option) {
            break;
        }
        
        controller = controller->run(option);
    }
    
    return 0;
}