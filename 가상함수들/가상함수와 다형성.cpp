//virtual func ���
#include <iostream>

using namespace std;
class A {
public:
	virtual void print() {
		cout << "A" << endl;
	}
};

class B : public A {
public:
	//override��ÿ� virtual Ű���� ���
	//override Ű����: �� Ű���� ���� �����Ͽ��� ����༭ �Ǽ� Ȯ���� �پ��.
	//�̷��� �ؿ��� �� ��ӹ����� �� Ŭ�������� �������̵� �� �ϰ� ���� ��.
	virtual void  print() override final{
		cout << "B"<<endl;
	}
};

class C :public B {
public:
	//�����Ͽ������. final Ű���嶧����
	/*void print() {

	}*/
};
int main_virtual()
{
	B b;
	A *a;

	a = &b;
	a->print();

	A &_a=b;

	_a.print();
	return 0;
}