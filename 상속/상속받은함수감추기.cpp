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

	//Base�� ���������ڸ� ���⼭ �ٲ� �� �ִ�.
	//public �Ʒ��� �̷��� �ϴϱ�, Derived �ȿ����� �̰� publuc�� �Ǿ����.
	using Base::m_i;
private:
	using Base::print;
};
int main_����() {
	Base base;
	//���پȵȴ�. private�̴ϱ�
	//base.m_i;
	//���ٵȴ�. public�̴ϱ�
	base.print();
	
	Derived1 derived;
	//���� �ȴ�. Derived �ȿ��� �ۺ� ȭ �ع���.
	derived.m_i;
	//���� �� �ȴ�. Derived �ȿ��� �����̺� ȭ �ع���.
	//derived.print();
	
	return 0;
}