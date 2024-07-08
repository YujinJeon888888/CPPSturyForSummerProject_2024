#include <iostream>

class 부모 {
public:
	virtual void 소개() const {
		std::cout << "나는 부모 클래스입니다." << std::endl;
	}
};

class 자식 :public 부모 {
public:
	int num = 0;
	void 소개() const override {
		std::cout << "나는 자식 클래스입니다." << std::endl;
	}
};

void 클래스소개(const 부모* 객체) {
	객체->소개();
}

int main_부모포인터() {
	부모 부모객체;
	자식 자식객체;

	부모* 부모포인터 = &부모객체;
	부모포인터->소개();// 부모클래스의 메소드 호출

	부모포인터 = &자식객체;//부모시야로 보임
	부모포인터->소개();//자식 클래스의 메서드 호출(다형성)

	클래스소개(&부모객체);//부모 클래스의 메서드 호출
	클래스소개(&자식객체);//자식 클래스의 메서드 호출(다형성)
	return 0;
}
