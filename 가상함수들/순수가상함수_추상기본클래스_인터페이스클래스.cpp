#include <iostream>
//1. 순수 가상 함수(Pure Virtual Function)
//정의
//순수 가상 함수는 함수 선언에서 = 0으로 정의된 가상 함수입니다. 순수 가상 함수는 해당 함수가 파생 클래스에서 반드시 재정의되어야 함을 나타냅니다.
//순수 가상 함수를 포함하는 클래스는 인스턴스화할 수 없습니다

//2. 추상 기본 클래스(Abstract Base Class)
//정의
//추상 기본 클래스는 하나 이상의 순수 가상 함수를 포함하는 클래스입니다.이 클래스는 직접 인스턴스화될 수 없으며, 파생 클래스에서 구현되어야 합니다.

class Base {
public:
	virtual void show() = 0;//순수 가상 함수
};


class Derived1 : public Base {
public:
	void show() override {
		std::cout << "Derived class implementation" << std::endl;
	}
};
/// <summary>
/// AbstractBase 클래스는 두 개의 순수 가상 함수를 포함하고 있습니다.
/// ConcreteClass는 AbstractBase를 상속받아 모든 순수 가상 함수를 구현합니다.
/// 추상 기본 클래스는 직접 인스턴스화할 수 없고, 이를 상속받은 클래스에서 순수 가상 함수를 모두 구현해야 합니다.
/// </summary>
class AbstractBase {
public:
	int a=0;
	virtual void show() = 0;//순수 가상 함수
	virtual void display() = 0;//순수 가상 함수
};

class ConcreteClass : public AbstractBase {
public: 
	void show() override {
		std::cout << "Show function implementation" << std::endl;
	}
	void display()override {
		std::cout << "Display function implementation" << std::endl;
	}
};

//3. 인터페이스 클래스(Interface Class)
//정의
//인터페이스 클래스는 모든 멤버 함수가 순수 가상 함수로 선언된 클래스입니다.인터페이스 클래스는 클래스가 제공해야 하는 기능의 계약을 정의합니다.

class Interface {
public:
	virtual void method1() = 0;
	virtual void method2() = 0;
};

class Implementation :public Interface {
public:
	void method1() override {
		std::cout << "Method1 implementation" << std::endl;
	}
	void method2() override {
		std::cout << "Method2 implementation" << std::endl;
	}
};



int main_추상() {
	ConcreteClass c;
	c.a;//접근 ㄱㄴ
	c.show();//오버라이딩 결과
	//AbstractBase a;//안된다. 추상메소드를 가진 클래스는 인스턴스화안된다.	
	return 0;
}