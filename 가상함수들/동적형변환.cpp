//static case vs dynamic cast

#include <iostream>
class Base {
public:
	virtual void show() {
		std::cout << "Base class" << std::endl;
	}
};
class Derived1 : public Base {
public:
	void show() override {
		std::cout << "Derived1 class" << std::endl;
	}
};

class Derived2 {
public:
	void show() {
		std::cout << "Derived2 class" << std::endl;
	}
};

int main_동적형변환() {
	//기본 타입 변환
	float f = 3.14f;
	//컴파일 타임에 체크
	int a = static_cast<int>(f);//float 를 int 로 변환
	std::cout << "a: " << a << std::endl;

	//dynamic cast: 주로 다형성을 활용한 타입변환에 사용
	//런타임에 변환이 안전한지 체크 .주로 상속관계가 있는 클래스 간의 변환에 사용된다
	Base* basePtr = new Derived1();
	//런타임 타입 체크
	Derived1* derivedPtr = dynamic_cast<Derived1*>(basePtr);
	//Derived2* derived2Ptr = dynamic_cast<Derived2*> (basePtr);
	if (derivedPtr) {
		derivedPtr->show();//Derived class출력
	}
	else {
		std::cout << "type conversion failed" << std::endl;
	}
	////예외뜬다. 왜냐면 상관없는 클래스로 타입변환하려고 하니까
	//if (derived2Ptr) {
	//	derived2Ptr->show();//Derived class출력
	//}
	//else {
	//	std::cout << "type conversion failed" << std::endl;
	//}

	//delete derivedPtr;
	//delete derived2Ptr;
	std::cout << "끝" << std::endl;
	return 0;
}