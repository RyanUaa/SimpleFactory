
#include "Factory.h"
#include "Operation.h"
#include <iostream>

using namespace std;

int main()
{
	Factory* fac = new ConcreteFactory();
   	Operation* ope = fac->CreateOperation(ADD);
	ope->SetNum(1,2);
	cout<<ope->GetResult()<<endl;
	return 0;
}

