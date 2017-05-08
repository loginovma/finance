#include <iostream>
#include "model/Bank.h"
#include "model/Account.h"
#include "core/ModelPointer.h"
#include "core/ModelList.h"
#include "core/ControllerStorage.h"
#include "core/Controller.h"
#include "core/StartController.h"
#include "core/BanksController.h"
#include "core/AccountsController.h"

using namespace std;

int main(int argc, char ** argv)
{
    cout << "Welcome to personal finance" << endl;
	cout << "Please choose your option from the menu:" << endl << endl;
	
	//loading models
	
	ModelPointer sberbank( new Bank("Sberbank") );
    ModelPointer alfa = new Bank("alfabank");
    
    ModelPointer salary = new Account("40810000000001234567", sberbank);
    
    ModelList banks;
    banks.add(sberbank);
    banks.add(alfa);
    
    ModelList accounts;
    accounts.add(salary);
	
	//creating and filling controller storage
	ControllerStorage* cstorage = new ControllerStorage();
	
	StartController* startC = new StartController();
	cstorage->storeController(startC);
	
	BanksController* banksC = new BanksController(&banks);
	cstorage->storeController(banksC);
	
	AccountsController* accountsC = new AccountsController(&accounts);
	cstorage->storeController(accountsC);
	
	
	//main program cycle
	int option = 0;
	Controller* controller = cstorage->getController("start");
	
	cout << cstorage->getController("start")->getName() << endl;
    
    while (1) {
        controller->printMenu();
        cin >> option;
        
        if (!option) {
            break;
        }
        
        controller = controller->run(option, cstorage);
    }

	cout << endl << "Goodbye" << endl;
	
	
	//deleting controller storage
	delete cstorage;
	return 0;
}