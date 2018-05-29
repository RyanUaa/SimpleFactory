#include "Operation.h"
#include <iostream>
using namespace std;

Operation::Operation(){}

Operation::~Operation(){}

void Operation::SetNum(float num1, float num2)
{
	_num1 = num1;
	_num2 = num2;
}
//////////////////////////////////////////////加法运算
OperationAdd::OperationAdd()
{
	cout<<"OperationAdd:"<<endl;
}

OperationAdd::~OperationAdd(){}

float OperationAdd::GetResult()
{
	return _num1 + _num2;
}

//////////////////////////////////////////////减法运算
OperationSub::OperationSub()
{
	cout<<"OperationSub:"<<endl;
}

OperationSub::~OperationSub(){}

float OperationSub::GetResult()
{
	return _num1 - _num2;
}

//////////////////////////////////////////////乘法运算
OperationMul::OperationMul()
{
	cout<<"OperationMul:"<<endl;
}

OperationMul::~OperationMul(){}

float OperationMul::GetResult()
{
	return _num1 * _num2;
}

//////////////////////////////////////////////除法运算
OperationDiv::OperationDiv()
{
	cout<<"OperationDiv:"<<endl;
}

OperationDiv::~OperationDiv(){}

float OperationDiv::GetResult()
{
	if(_num2 == 0)
	{
		cout<<"the division can not be zero!"<<endl;
			return 0.0;
	}
	return _num1 / _num2;
}
