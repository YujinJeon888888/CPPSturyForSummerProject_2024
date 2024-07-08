/*
friend 키워드는 C++에서 특정 클래스의 비공개(private) 및 보호된(protected) 멤버에 접근할 수 있도록 하는 특수한 선언입니다. friend 함수는 해당 클래스의 멤버가 아니지만, 해당 클래스의 모든 멤버에 접근할 수 있는 권한을 갖게 됩니다. 이로 인해 데이터 캡슐화를 유지하면서도 특정 함수가 클래스의 내부 데이터에 접근할 수 있게 됩니다.

왜 Friend 함수는 멤버 함수가 아닌가?
friend 함수는 클래스의 멤버 함수가 아니며, 이는 다음과 같은 이유 때문입니다:

독립성: friend 함수는 해당 클래스로부터 독립적으로 정의됩니다. 즉, 클래스 외부에서 정의되며, 클래스의 멤버 함수처럼 클래스의 인스턴스를 필요로 하지 않습니다.
접근 권한: friend 함수는 해당 클래스의 비공개(private) 및 보호된(protected) 멤버에 접근할 수 있지만, 이는 클래스 내부에 정의된 멤버 함수가 아니기 때문에 클래스의 멤버 변수와 멤버 함수에 대한 직접적인 접근 권한을 가집니다.
오버라이딩이 안 되는 이유
friend 함수는 클래스의 멤버 함수가 아니기 때문에, 상속 관계에서 오버라이딩이 불가능합니다. 오버라이딩은 클래스의 멤버 함수가 부모 클래스에서 파생 클래스에 의해 재정의될 때 발생합니다. 하지만 friend 함수는 클래스의 멤버 함수가 아니므로, 이를 재정의(오버라이딩)할 수 없습니다.

해결 방법
friend 함수가 오버라이딩이 안 되는 문제를 해결하기 위해서는, 가상 함수(virtual function)를 사용하여 다형성을 구현할 수 있습니다. 이를 통해 파생 클래스에서 부모 클래스의 함수를 재정의할 수 있습니다.
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

/*설명
Friend 함수:

friendFunction은 Base 클래스의 value 멤버에 접근할 수 있습니다.
friendFunction은 Base 클래스의 멤버 함수가 아니므로, 파생 클래스 Derived에서 이를 오버라이딩할 수 없습니다.
가상 함수:

Base 클래스의 show 함수는 가상 함수로 선언되어 있습니다.
Derived 클래스는 show 함수를 재정의(오버라이딩)합니다.
이를 통해 Base 클래스의 포인터가 실제로 Derived 객체를 가리킬 때, 올바른 show 함수가 호출됩니다.
이렇게 하면 friend 함수가 멤버 함수가 아니어서 오버라이딩할 수 없는 문제를 해결하고, 가상 함수를 통해 다형성을 구현할 수 있습니다.*/