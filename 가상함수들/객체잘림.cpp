//��ü �߸�(Object Slicing)�� C++���� �Ļ� Ŭ������ ��ü�� �⺻ Ŭ���� Ÿ������ ������ �� �߻��ϴ� �����Դϴ�. �� �������� �Ļ� Ŭ������ �ִ� ��� ������ ��� �Լ��� �߷� �����鼭, �⺻ Ŭ���� �κи� ����˴ϴ�.

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

	printBase(d);// ��ü�߸��߻�

	//���: 
	int num = 3.14f;
	std::cout << num <<std::endl;
	
	///////////////////
	//reference wrapper 
	// reference_wrapper vs &
	// & : �����̳ʶ� ���� �� ��
	// std::reference_wrapper���� �����̳ʶ� ���� �� �� �ִ� ��������
	int a = 10, b = 20, c = 30;
	std::vector<std::reference_wrapper<int>> vec = { a,b,c };

	for (auto& elem : vec) {
		std::cout << elem << " ";
	}

	std::cout << std::endl;

	vec[0].get() = 100;//a �� ���� ����
	std::cout << "a: " << a<<std::endl;
	return 0;
}