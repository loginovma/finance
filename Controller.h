#ifndef CONTROLLER_H_
#define CONTROLLER_H_

#include <iostream>

using namespace std;

class Controller
{
public:
    virtual void printMenu(){}
    virtual Controller * run(int option)
	{
		return this;
	}
};

#endif