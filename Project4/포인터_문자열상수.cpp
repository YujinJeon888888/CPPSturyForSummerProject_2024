#include <iostream>

const char* getName() {
	return "JackJack";
}

int main_문자열상수() {
	using namespace std;
	//반드시 앞에 const가 붙어야지만 기호적 상수처럼 사용할 수 있음
	const char* name = "Jack Jack";
	const char* name2 = "Jack Jack";

	//같은주소찍힌다.
	cout << (uintptr_t)name << endl;
	cout << (uintptr_t)name2 << endl;
	cout << name << endl;


	return 0;
}