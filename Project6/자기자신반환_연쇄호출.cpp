#include <iostream>
using namespace std;
class Mother {	
	int age;
	string name;

public:
	//�ڽ��� ����
	Mother& getMother() {
		//this�� �ش� ��� �Լ��� ȣ��� ��ü�� �����͸� ����ŵ�ϴ�.
		return *this;
	}

	void printMother() {
		cout << this->age <<" " << this->name << "\n";
	}

	Mother& doSomething() {
		age++;
		return *this;
	}

	Mother(const int &age, const string &name) {
		this->age = age;
		this->name = name;
	}
};
int main_this() {

	Mother mother{30,"��¯��"};
	//�̷��԰���
	mother.getMother().getMother().printMother();
	mother.doSomething().printMother();

	return 0;
}