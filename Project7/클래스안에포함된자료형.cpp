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
	//1��
	Fruit fruit;
	fruit.APPLE;
	//2��
	//:: �����ڴ� Ŭ������ ���� ����� ������ �� ���˴ϴ�. ���� ����� Ŭ������ ��� �ν��Ͻ� ���� �����Ǹ�, Ŭ���� �̸��� ���� ������ �� �ֽ��ϴ�.
	//enum Ÿ�� ����� Ŭ������ �ν��Ͻ��� �����ϰ� �������� ������ �� �ֽ��ϴ�.
	//����, Fruit::APPLE�� ���� Ŭ���� �̸��� ���� �����ϴ� ���� �ùٸ� ����Դϴ�.
	Fruit::APPLE;

	return 0;
}