#include <iostream>
#include "../Project3/변수범위.cpp"
using namespace std;
int main_constPointer() {
	int vaule = 5;
	const int* ptr = &value;

	value = 6;
	//*ptr = 4;//이건안됨
	
	cout << *ptr << endl;

	//***const가 어디 붙느냐에 따른 차이***
	//, ptr1가 가리키는 값은 변경할 수 없지만, ptr1 자체는 다른 주소를 가리킬 수 있습니다.
	const int *ptr1 = &vaule;
	//ptr2는 항상 동일한 주소를 가리키며, 다른 주소를 가리키도록 변경할 수 없습니다. 그러나 ptr2가 가리키는 값은 변경할 수 있습니다.
	int *const ptr2 = &vaule;
	//ptr3가 가리키는 값도 변경할 수 없고, ptr3 자체도 다른 주소를 가리키도록 변경할 수 없습니다.
	const int *const ptr3 = &vaule;


	return 0;
}