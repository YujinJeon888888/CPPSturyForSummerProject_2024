#include <iostream>
class Mother {
protected:
	int m_i;
public:
	//자식보다 부모생성자가 가장 먼저 호출
	//소멸은 역순 소멸이다. 
	Mother() {
		this->m_i = 0;
	}
	Mother(const int& i) {
		m_i = i;
	}
	const int& getI()const {
		return m_i;
	}
};

class Child : public Mother {
private: 
	int childI=0;
public:
	Child()
		:Mother()
		//: m_i(1023) 이건 왜 안될까? : 
		//초기화 순서
		//상위 클래스 생성자 호출 :
		//	파생 클래스의 생성자가 호출될 때, 먼저 상위 클래스(부모 클래스)의 생성자가 호출됩니다.
		//초기화 목록 처리 :
		//	그 후, 초기화 목록이 처리됩니다.초기화 목록에서 멤버 변수들이 초기화됩니다.
		//생성자 본문 실행 :
		//	초기화 목록이 모두 처리된 후, 생성자 본문이 실행됩니다.

		//초기화 목록에서는 상위 클래스의 멤버 변수를 직접 초기화할 수 없다: 
		//	상위 클래스의 멤버 변수는 상위 클래스의 생성자를 통해서만 초기화될 수 있기 때문이다.
		//	이는 언어 자체의 설계에 따른 규칙입니다.
		
		//생성자 본문에서는 상위 클래스의 멤버 변수에 접근할 수 있다:
		//	상위 클래스의 생성자가 호출된 후이므로, 생성자 본문에서 상위 클래스의 멤버 변수 값을 변경할 수 있다.
	{
		//private면 안 됨
		//m_i = 10;
		
		//1. 일반멤버면 이게 더 명확하므로 이게 더 좋다.
		//this는 정적멤버에 접근불가.
		this->m_i = 10;
		//2. 정적멤버 접근한다면 이게 더 명확
		Mother::m_i = 1024;
	}
	//이것도가능하다
	Child(const int& i)  
	: Mother(i)
	{
	}
};

int main_생성순서() {
	Child child(2);
	std::cout<<child.getI()<<std::endl;
	//8 (Mother의 int까지 포함해서.)
	std::cout << sizeof(Child) << std::endl;
	//4
	std::cout << sizeof(Mother) << std::endl;


	return 0;
}