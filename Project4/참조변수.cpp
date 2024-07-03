#include <iostream>
using namespace std;

void doSomething(int &n) {
	n = 10;
	cout << "In doSomething: " << n << endl;
}

void doSomething2(const int& x) {
	
	cout << x << endl;
}

struct something {

	int v1;
	float v2;

};

struct other {
	something st;
};

int main_참조변수() {
	int value = 5;

	//이건 포인터
	int* ptr = nullptr;
	ptr = &value;

	//이건 참조. 별명처럼 쓰일 수 있다.
	int& ref = value;// ref의 주소가 value의 주소와 같아짐
	const int y = 9;
	//int& ref2 = y; 안된다. ref2가 y를 바꿔버릴 수 있기 때문
	
	cout << ref << endl;

	ref = 10;

	cout << value << " " << ref << endl;
	cout << &value << " " << &ref << endl;
	cout << &ptr << endl;

	int value1 = 5;
	int value2 = 10;

	int& ref1 = value1;
	cout << ref1 << endl;;
	ref1 = value2;
	cout << ref1<<endl;

	ref1 = 7;

	//참조에 의한 전달. 복사x
	cout << value1 << endl;
	doSomething(value1);
	cout << value1 << endl;
	ref1 = 39;
	cout << value1 << endl;
	//함수에서 값 못 바꾸게 하고싶으면: 함수에서 매개변수 선언을 const로 하기.
	doSomething(value1);


	other ot;
	//.이 너무많아서 좋지않다. 
	ot.st.v1 = 1.0;

	//대안: 
	int& v1 = ot.st.v1;
	v1 = 1;

	/// <summary>
	/// 참조와 const
	/// </summary>
	/// <returns></returns>
	int x=5;
	const int &refX = x;//const이리저리붙여보며확인해보기

	//매개변수가 const이므로 값이 안 바뀐다. 
	doSomething2(x+3);
	
	cout << refX<<endl;

	//refX++; 안된다. const니까


	x = 7;
	cout << refX;//7

	//즉, refX를 바꾸는 건 안되지만 x를 바꾸는 건 가능. 이러면 refX도 바뀜
	return 0;
}