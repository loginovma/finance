main:
	g++ main.cpp account.cpp bank.cpp StartController.cpp BanksController.cpp AccountsController.cpp -std=c++11 -o debug/program

debug:
	g++ debug.cpp model/Bank.cpp core/ModelPointer.cpp core/ModelList.cpp core/ControllerStorage.cpp core/Controller.cpp core/StartController.cpp -std=c++11 -o debug/program
	
release:
	g++ release.cpp model/Bank.cpp core/ModelPointer.cpp core/ModelList.cpp core/ControllerStorage.cpp core/Controller.cpp core/StartController.cpp -std=c++11 -o debug/program	