debug:
	g++ debug.cpp model/Bank.cpp core/ModelPointer.cpp core/ModelList.cpp core/ControllerStorage.cpp core/Controller.cpp core/StartController.cpp core/File.cpp -std=c++11 -o debug/program
	
release:
	g++ release.cpp model/Bank.cpp model/Account.cpp core/ModelPointer.cpp core/ModelList.cpp core/ControllerStorage.cpp core/Controller.cpp core/StartController.cpp core/BanksController.cpp core/AccountsController.cpp core/File.cpp -std=c++11 -o finance	