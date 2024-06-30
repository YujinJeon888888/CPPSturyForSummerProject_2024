#include <iostream>

int main_기본자료형() {

	using namespace std;

	bool bValue=true;

	cout << (bValue ? 1 : 0) << endl;//1

	char chValue = 65; //내부적으로 숫자여도 문자로 표현

	cout << chValue << endl;//A

	cout << bValue << endl;//1. 불도 내부적으로는 숫자로 바꿔서 저장한다는 것 알 수 있다.
	cout << !bValue << endl;//0

	//float, double 은 그리 정밀하지x
	float fValue = 3.141592f;//f. 3.14159
	double dValue = 3.141592;//3.14159

	cout << fValue << endl;
	cout << dValue << endl;

	auto aValue = 3.141592;
	auto aValue2 = 3.141592f;
	cout << aValue << endl;//알아서 형변환.  double 된다.
	cout << sizeof(aValue) << endl;
	cout << aValue2 << endl;//알아서 형변환.  float 된다.
	cout << sizeof(aValue2) << endl;

	//초기화방법
	//int a = 123;
	//int a(123);
	//int a{ 123 }; //객체지향에서 권장하는 초기화방법. 더 엄격한 초기화방법-> 오류잡기 더 쉽다.

	//여러개 변수 동시에 선언방법
	int k = 1, l=2, m = 3;
	return 0;

	//변수선언은 어디서 하는가 ?
	//	옛날식 : 모든 변수선언은 맨 위로 올리기
	//	요즘식 : 사용할 변수는 사용하기 직전에 선언
	//			이래야 디버깅 하기 좋아서, 리팩토링하기 좋아서.
}