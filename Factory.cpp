#include "Factory.h"
#include "Operation.h"

#include <iostream>
using namespace std;

Factory::Factory(){}

Factory::~Factory(){}

ConcreteFactory::ConcreteFactory()
{
	cout<<"ConcreteFactory:"<<endl;
}

ConcreteFactory::~ConcreteFactory(){}

Operation* ConcreteFactory::CreateOperation(int flag)
	//flag为标志位，0加法，1减法，2乘法，4除法...
{
	Operation * res;
	switch (flag)
	{
		case ADD:
			res = new OperationAdd();
			break;
		case SUB:
			res = new OperationSub();
			break;
		case MUL:
		    res = new OperationMul();
			break;
		case DIV:
			res = new OperationDiv();
			break;

		default:
			cout<<"Please input correct flag!"<<endl;
			break;
	}
	return res;
}
