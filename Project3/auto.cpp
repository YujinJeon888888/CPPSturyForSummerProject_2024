#include <iostream>

//리턴형 auto 가능
auto add(int x, int y) { //인자는 auto불가. 
	return x + (double)y;
}

//대안: 템플릿
//템플릿 통해 여러 개 리턴값 내뱉을 수 있음

int main_auto() {
	//auto: 자동 형 지정
	//초기화 필수
	auto a = 123;//int로 자동결정

	auto d = 123.0;//double
	
	auto c = 1 + 2.0;//double

	//이럴 때 편하다. 리턴값 받을 때
	auto result = add(1,2);//result: double

	return 0;
}