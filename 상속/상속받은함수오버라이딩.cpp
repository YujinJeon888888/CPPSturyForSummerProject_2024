#include <iostream>
using namespace std;

class Base {
protected:
	int m_i;
public:
	Base() {

	}
	Base(int value) 
		: m_i(value)
	{}
	void print() 
	{
		cout << "I'm Base " << endl;
	}
};

class Derived : public Base {
private: 
	double m_d;
public:
	Derived() {
		Base();
	}
	Derived(int value) 
		:Base(value) 
	{}
	
	//오버라이딩
	void print()
	{
		Base::print();
		cout << "I'm Derived" << endl;
	}

};

int main_오버라이딩() {
	Base base;
	base.print();

	Derived derived;
	derived.print();
	
	return 0;
}