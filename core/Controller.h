#ifndef CONTROLLER_H_
#define CONTROLLER_H_

class Controller
{
private:
    char* menu[10];
public:
    void printMenu();
    virtual Controller * run(int option)
	{
		return this;
	}
};

#endif