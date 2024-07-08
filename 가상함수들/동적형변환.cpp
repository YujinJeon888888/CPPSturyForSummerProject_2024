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

int main_��������ȯ() {
	//�⺻ Ÿ�� ��ȯ
	float f = 3.14f;
	//������ Ÿ�ӿ� üũ
	int a = static_cast<int>(f);//float �� int �� ��ȯ
	std::cout << "a: " << a << std::endl;

	//dynamic cast: �ַ� �������� Ȱ���� Ÿ�Ժ�ȯ�� ���
	//��Ÿ�ӿ� ��ȯ�� �������� üũ .�ַ� ��Ӱ��谡 �ִ� Ŭ���� ���� ��ȯ�� ���ȴ�
	Base* basePtr = new Derived1();
	//��Ÿ�� Ÿ�� üũ
	Derived1* derivedPtr = dynamic_cast<Derived1*>(basePtr);
	//Derived2* derived2Ptr = dynamic_cast<Derived2*> (basePtr);
	if (derivedPtr) {
		derivedPtr->show();//Derived class���
	}
	else {
		std::cout << "type conversion failed" << std::endl;
	}
	////���ܶ��. �ֳĸ� ������� Ŭ������ Ÿ�Ժ�ȯ�Ϸ��� �ϴϱ�
	//if (derived2Ptr) {
	//	derived2Ptr->show();//Derived class���
	//}
	//else {
	//	std::cout << "type conversion failed" << std::endl;
	//}

	//delete derivedPtr;
	//delete derived2Ptr;
	std::cout << "��" << std::endl;
	return 0;
}