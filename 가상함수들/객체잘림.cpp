//객체 잘림(Object Slicing)은 C++에서 파생 클래스의 객체를 기본 클래스 타입으로 복사할 때 발생하는 문제입니다. 이 과정에서 파생 클래스에 있는 멤버 변수와 멤버 함수가 잘려 나가면서, 기본 클래스 부분만 복사됩니다.

#include <iostream>
#include <vector>
#include <functional>
class Base {
public:
	int baseValue;
	virtual void show() {
		std::cout << "Base value: " << baseValue << std::endl;
	}
};

class Derived1 :public Base {
public:
	int derivedValue;
	void show() override {
		std::cout << "Base value: " << baseValue << ", Derived value: " << derivedValue << std::endl;
	}
};

void printBase(Base b) {
	b.show();
}

int main_wrapper() {
	Derived1 d;
	d.baseValue = 1;
	d.derivedValue = 2;

	printBase(d);// 객체잘림발생

	//비슷: 
	int num = 3.14f;
	std::cout << num <<std::endl;
	
	///////////////////
	//reference wrapper 
	// reference_wrapper vs &
	// & : 컨테이너랑 같이 못 씀
	// std::reference_wrapper쓰면 컨테이너랑 같이 쓸 수 있는 참조변수
	int a = 10, b = 20, c = 30;
	std::vector<std::reference_wrapper<int>> vec = { a,b,c };

	for (auto& elem : vec) {
		std::cout << elem << " ";
	}

	std::cout << std::endl;

	vec[0].get() = 100;//a 의 값을 변경
	std::cout << "a: " << a<<std::endl;
	return 0;
}