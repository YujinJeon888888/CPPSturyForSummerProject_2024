#include <iostream>


class Fruit {
public:
	enum FruitType {
		APPLE, BANANA, CHERRY
	};
private:
	FruitType m_type;
};
int main_nested() {
	//1번
	Fruit fruit;
	fruit.APPLE;
	//2번
	//:: 연산자는 클래스의 정적 멤버에 접근할 때 사용됩니다. 정적 멤버는 클래스의 모든 인스턴스 간에 공유되며, 클래스 이름을 통해 접근할 수 있습니다.
	//enum 타입 멤버는 클래스의 인스턴스와 무관하게 정적으로 접근할 수 있습니다.
	//따라서, Fruit::APPLE과 같이 클래스 이름을 통해 접근하는 것이 올바른 방식입니다.
	Fruit::APPLE;

	return 0;
}