main:
	g++ main.cpp account.cpp bank.cpp StartController.cpp BanksController.cpp AccountsController.cpp -std=c++11 -o debug/program

debug:
	g++ debug.cpp model/Bank.cpp -o debug/program