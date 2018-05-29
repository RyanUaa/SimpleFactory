#pragma once

#define ADD 0
#define SUB 1
#define MUL 2
#define DIV 3

class Operation
{
	public:
		virtual ~Operation() = 0;
		virtual float GetResult() = 0;
		Operation();
		void SetNum(float num1, float num2);
		float _num1 = 0;
		float _num2 = 0;
	protected:
	private:
};

class OperationAdd:public Operation
{
	public:
		OperationAdd();
		~OperationAdd();
		float GetResult();
};
class OperationSub:public Operation
{
	public:
		OperationSub();
		~OperationSub();
		float GetResult();
};
class OperationMul:public Operation
{
	public:
		OperationMul();
		~OperationMul();
		float GetResult();
};
class OperationDiv:public Operation
{
	public:
		OperationDiv();
		~OperationDiv();
		float GetResult();
};
