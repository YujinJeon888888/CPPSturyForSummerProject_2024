#include <iostream>
using namespace std;
class Mother {	
	int age;
	string name;

public:
	//자신을 리턴
	Mother& getMother() {
		//this는 해당 멤버 함수가 호출된 객체의 포인터를 가리킵니다.
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

	Mother mother{30,"신짱구"};
	//이렇게가능
	mother.getMother().getMother().printMother();
	mother.doSomething().printMother();

	return 0;
}