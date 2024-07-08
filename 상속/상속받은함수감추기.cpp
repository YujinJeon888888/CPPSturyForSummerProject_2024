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

class Derived1 : public Base {
private:
	double m_d;
public:
	Derived1() {
		Base();
	}
	Derived1(int value)
		:Base(value)
	{}

	//Base의 접근지정자를 여기서 바꿀 수 있다.
	//public 아래서 이렇게 하니까, Derived 안에서는 이게 publuc이 되어버림.
	using Base::m_i;
private:
	using Base::print;
};
int main_감춰() {
	Base base;
	//접근안된다. private이니까
	//base.m_i;
	//접근된다. public이니까
	base.print();
	
	Derived1 derived;
	//접근 된다. Derived 안에서 퍼블릭 화 해버림.
	derived.m_i;
	//접근 안 된다. Derived 안에서 프라이빗 화 해버림.
	//derived.print();
	
	return 0;
}