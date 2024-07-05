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
int main_익명객체() {
	//일반적인방법
	A a;
	a.print();
	//익명객체
	//변수명이 없어서 재사용은 못함
	A().print();
	A().print();

	return 0;
}