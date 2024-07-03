#include <iostream>
#include <array>
using namespace std;

bool IsEven(const int& number) {
	return number % 2 == 0; // 조건이 맞으면 true, 아니면 false
}

bool IsOdd(const int& number) {
	return number % 2 != 0; // 조건이 맞으면 true, 아니면 false
}

void PrintNumbers(const array<int, 10> & my_array, bool (*check_func) (const int&) = IsEven){
	for (auto element : my_array) {
		if (check_func(element)) {
			cout << element<<" ";
		}
	}
	cout << endl;
}

int func() {
	return 5;
}

int goo() {

	return 10;
}
int main_함수포인터() {
	//함수명을 출력하면? 
	cout << func << endl;//메모리가 찍힌다.
	//즉, 함수도 메모리다.
	//변수가 주소만 가지고 뭘 할 수 있었듯이
	//함수도 주소만 가지고 뭘 할 수 있다.

	//리턴형, 함수포인터변수명, 인자
	int (*funcptr)() = func;//함수의 주소를 대입
	//함수포인터가 가르키는 건 func. 따라서 5가 출력
	cout << funcptr() << endl;
	funcptr = goo;
	//함수포인터가 가르키는 건 goo. 따라서 10가 출력
	cout << funcptr() << endl;

	///함수포인터
	array<int, 10> my_array = { 0,1,2,3,4,5,6,7,8,9 };
	//함수는 이름자체가 포인터이기때문에 &안붙여도됨
	PrintNumbers(my_array,IsOdd);
	PrintNumbers(my_array,IsEven);
	PrintNumbers(my_array);



	return 0;
}