#pragma once 

#define ADD 0
#define SUB 1
#define MUL 2
#define DIV 3

class Operation;

class Factory
{
	public:
		virtual ~Factory() = 0;

		virtual Operation* CreateOperation(int flag) = 0;

	protected:
		Factory();

	private:

};

class ConcreteFactory:public Factory
{
	public:
		ConcreteFactory();
		~ConcreteFactory();

		Operation* CreateOperation(int flag);

	protected:


	private:

};


