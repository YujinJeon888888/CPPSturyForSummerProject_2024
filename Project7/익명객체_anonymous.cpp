#include <iostream>
using namespace std;

class A {
public:
	A() {
		cout << "constructor" << endl;
	}
	~A() {
		cout << "Destructor" << endl;
	}
	void print() {
		cout << "Hello" << endl;
	}
};
int main_�͸�ü() {
	//�Ϲ����ι��
	A a;
	a.print();
	//�͸�ü
	//�������� ��� ������ ����
	A().print();
	A().print();

	return 0;
}