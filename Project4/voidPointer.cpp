#include <iostream>
using namespace std;

int main_보이드포인터() {
	int i = 5;
	float f = 3.0f;
	char c = 'a';
	//. 어떤 타입의 데이터도 가리킬 수 있지만, 포인터를 역참조하여 값을 읽거나 쓸 때는 적절한 타입으로 캐스팅해야 합니다.
	void* ptr = nullptr;

	ptr = &i;
	ptr = &f;
	ptr = &c;

	//void타입이기때문에 연산이 안 된다. int면 +4바이트, char이면 +1바이트 알 수 있는데 void라서 컴퓨터가 모름.
	//cout << ptr + 1 << endl;
	//cout << *ptr << endl; 이것도 모른다. void포인터가 가리키는 데이터의 크기와 타입을 알 수 없기 때문에

	//이렇게 타입을 지정해줘야한다.
	cout << *static_cast<float*>(ptr) << endl;
	


	return 0;
}