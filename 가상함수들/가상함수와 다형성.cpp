//virtual func 용법
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
	//override명시용 virtual 키워드 사용
	//override 키워드: 이 키워드 쓰면 컴파일에러 잡아줘서 실수 확률이 줄어듦.
	//이러면 밑에서 또 상속받으면 그 클래스부턴 오버라이드 못 하게 막는 것.
	virtual void  print() override final{
		cout << "B"<<endl;
	}
};

class C :public B {
public:
	//컴파일에러뜬다. final 키워드때문에
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