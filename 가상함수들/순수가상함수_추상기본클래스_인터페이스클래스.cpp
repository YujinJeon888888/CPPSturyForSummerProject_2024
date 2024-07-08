#include <iostream>
//1. ���� ���� �Լ�(Pure Virtual Function)
//����
//���� ���� �Լ��� �Լ� ���𿡼� = 0���� ���ǵ� ���� �Լ��Դϴ�. ���� ���� �Լ��� �ش� �Լ��� �Ļ� Ŭ�������� �ݵ�� �����ǵǾ�� ���� ��Ÿ���ϴ�.
//���� ���� �Լ��� �����ϴ� Ŭ������ �ν��Ͻ�ȭ�� �� �����ϴ�

//2. �߻� �⺻ Ŭ����(Abstract Base Class)
//����
//�߻� �⺻ Ŭ������ �ϳ� �̻��� ���� ���� �Լ��� �����ϴ� Ŭ�����Դϴ�.�� Ŭ������ ���� �ν��Ͻ�ȭ�� �� ������, �Ļ� Ŭ�������� �����Ǿ�� �մϴ�.

class Base {
public:
	virtual void show() = 0;//���� ���� �Լ�
};


class Derived1 : public Base {
public:
	void show() override {
		std::cout << "Derived class implementation" << std::endl;
	}
};
/// <summary>
/// AbstractBase Ŭ������ �� ���� ���� ���� �Լ��� �����ϰ� �ֽ��ϴ�.
/// ConcreteClass�� AbstractBase�� ��ӹ޾� ��� ���� ���� �Լ��� �����մϴ�.
/// �߻� �⺻ Ŭ������ ���� �ν��Ͻ�ȭ�� �� ����, �̸� ��ӹ��� Ŭ�������� ���� ���� �Լ��� ��� �����ؾ� �մϴ�.
/// </summary>
class AbstractBase {
public:
	int a=0;
	virtual void show() = 0;//���� ���� �Լ�
	virtual void display() = 0;//���� ���� �Լ�
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

//3. �������̽� Ŭ����(Interface Class)
//����
//�������̽� Ŭ������ ��� ��� �Լ��� ���� ���� �Լ��� ����� Ŭ�����Դϴ�.�������̽� Ŭ������ Ŭ������ �����ؾ� �ϴ� ����� ����� �����մϴ�.

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



int main_�߻�() {
	ConcreteClass c;
	c.a;//���� ����
	c.show();//�������̵� ���
	//AbstractBase a;//�ȵȴ�. �߻�޼ҵ带 ���� Ŭ������ �ν��Ͻ�ȭ�ȵȴ�.	
	return 0;
}