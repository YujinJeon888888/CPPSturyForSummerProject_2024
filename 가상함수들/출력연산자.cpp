/*
friend Ű����� C++���� Ư�� Ŭ������ �����(private) �� ��ȣ��(protected) ����� ������ �� �ֵ��� �ϴ� Ư���� �����Դϴ�. friend �Լ��� �ش� Ŭ������ ����� �ƴ�����, �ش� Ŭ������ ��� ����� ������ �� �ִ� ������ ���� �˴ϴ�. �̷� ���� ������ ĸ��ȭ�� �����ϸ鼭�� Ư�� �Լ��� Ŭ������ ���� �����Ϳ� ������ �� �ְ� �˴ϴ�.

�� Friend �Լ��� ��� �Լ��� �ƴѰ�?
friend �Լ��� Ŭ������ ��� �Լ��� �ƴϸ�, �̴� ������ ���� ���� �����Դϴ�:

������: friend �Լ��� �ش� Ŭ�����κ��� ���������� ���ǵ˴ϴ�. ��, Ŭ���� �ܺο��� ���ǵǸ�, Ŭ������ ��� �Լ�ó�� Ŭ������ �ν��Ͻ��� �ʿ�� ���� �ʽ��ϴ�.
���� ����: friend �Լ��� �ش� Ŭ������ �����(private) �� ��ȣ��(protected) ����� ������ �� ������, �̴� Ŭ���� ���ο� ���ǵ� ��� �Լ��� �ƴϱ� ������ Ŭ������ ��� ������ ��� �Լ��� ���� �������� ���� ������ �����ϴ�.
�������̵��� �� �Ǵ� ����
friend �Լ��� Ŭ������ ��� �Լ��� �ƴϱ� ������, ��� ���迡�� �������̵��� �Ұ����մϴ�. �������̵��� Ŭ������ ��� �Լ��� �θ� Ŭ�������� �Ļ� Ŭ������ ���� �����ǵ� �� �߻��մϴ�. ������ friend �Լ��� Ŭ������ ��� �Լ��� �ƴϹǷ�, �̸� ������(�������̵�)�� �� �����ϴ�.

�ذ� ���
friend �Լ��� �������̵��� �� �Ǵ� ������ �ذ��ϱ� ���ؼ���, ���� �Լ�(virtual function)�� ����Ͽ� �������� ������ �� �ֽ��ϴ�. �̸� ���� �Ļ� Ŭ�������� �θ� Ŭ������ �Լ��� �������� �� �ֽ��ϴ�.
*/
#include <iostream>
using namespace std;

class Base {
private:
	int value;

	//Friend function declaration
	friend void friendFunction(Base&);
public:
	Base(int v) 
		: value(v) 
	{}
	//virtual function
	virtual void show() {
		cout << "Base value: " << value << endl;
	}
};

//friend function definition
void friendFunction(Base& b) {
	cout << "Friend function accessing Base value: " << b.value << endl;
}

class Derived : public Base {
public:
	Derived(int v):
		Base(v)
	{}

	void show() override {
		cout << "Derived class show function" << endl;
	}
};
int main() {

	Base b(10);
	Derived d(20);

	//Accessing through friend function
	friendFunction(b);
	friendFunction(d);//Allowed, because friend function is not overriden

	//Accessing through virtual function
	Base* basePtr = &d;
	basePtr->show();//Derived class show function
	return 0;
}

/*����
Friend �Լ�:

friendFunction�� Base Ŭ������ value ����� ������ �� �ֽ��ϴ�.
friendFunction�� Base Ŭ������ ��� �Լ��� �ƴϹǷ�, �Ļ� Ŭ���� Derived���� �̸� �������̵��� �� �����ϴ�.
���� �Լ�:

Base Ŭ������ show �Լ��� ���� �Լ��� ����Ǿ� �ֽ��ϴ�.
Derived Ŭ������ show �Լ��� ������(�������̵�)�մϴ�.
�̸� ���� Base Ŭ������ �����Ͱ� ������ Derived ��ü�� ����ų ��, �ùٸ� show �Լ��� ȣ��˴ϴ�.
�̷��� �ϸ� friend �Լ��� ��� �Լ��� �ƴϾ �������̵��� �� ���� ������ �ذ��ϰ�, ���� �Լ��� ���� �������� ������ �� �ֽ��ϴ�.*/