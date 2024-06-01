//#: 전처리기 (preprocessor)
//매크로 잘 안 씀.
#define MY_NUMBER 9 //매크로상수
#define MY_STRING "Hello World" //매크로상수
#define MAX(a,b) ((a>b)?a:b)//매크로. 
#define LIKE_APPLE//소스.cpp에서만 작동. 다른 파일에서 ifdef, else, endif하면 else로 들어감(존재하지않는다는뜻) 

#include <iostream> // input output stream
#include <cstdio> //printf
//왜 얘만 따옴표? : 표준에 들어있는 건 <>로 표시. 
#include "add.h";//헤더 인클루드

//함수 선언: 컴파일러는 순서대로 읽는다.
//읽는 중에 함수 모르면 모른다 함-> 선언 필요
//컴파일러에게 이 함수가 있다는 것을 미리 알려주는 역할
int MultTwoNumbers(int a, int b);


int mult(int a, int b) {
	return a - b;
}
namespace mySpace1 {
	int math(int a, int b) {
		return a + b;
	}
	//네임스페이스 안에 네임스페이스 만들 수 있다.
	namespace MYSPAC{
		void myFunc() {
			
		}
	}
}

int math(int a, int b) {
	return a * b;
}

//주석을 달 때: 옆보다 위에 다는 게 보기 편하다.
//주석 다는 습관 가지기

//인자: void
//main : operating system이 program시작할 때 main이름 가진 함수를 찾는다. 
int main(void) { 
	//using~: {}괄호 안에 넣는게 좋다.
	using namespace std; //네임스페이스 사용함으로써 std:: 생략 가능해짐
	using namespace mySpace1;
	//::의 왼쪽 : namespace, <<: 연산자
	std::cout << 1 + 2 << std::endl;
	
	/// <summary>
	/// 아래: 변수와의첫만남
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/*
	객체: 메모리에 담김.
	변수: 객체의 이름을 나타냄.
	*/
	int x ;//선언. release모드에서는 0으로 넣는다(기본값)
	//int x(123);//이것도 가능함.
	//★반드시 값을 초기화 해 주어야한다. 
	//초기화 안 할 시 쓰레기 값이 들어간다.
	x = 123;//대입. assignment

	//선언과 정의를 구분하자.
	
	std::cout << x << std::endl;
	//&: 메모리의 주소를 나타냄
	std::cout << &x << std::endl;
	
	//x86옆의 debug: 디버깅에 필요한 정보들이 담김 -> 크기가 뚱뚱해짐
	//x86옆의 release: 판매할 때는 release모드로. 
	
	/// <summary>
	/// 입출력
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	
	// endl: end line
	// << : 흐르는 느낌. output operator
	int num = 1024;
	std::cout << "hi" << std::endl;//std:: 왜 붙는가? = namespace를 나타냄.
	std::cout << "num is: " << num << std::endl;
	// \t: 탭을 의미한다. 자동 줄맞춤.
	// \t: 한 글자로 처리된다.
	//endl :\n
	std::cout << "abc" << "\t"<<"def"<<'\n';
	std::cout << "ab" << "\t"<<"cdef"<<'\0';//'\0': null
	//'\a': audio 의 약자. 소리를 출력해준다. 
	cout << '\a';

	//오른쪽 방향으로 흐르게.
	int input=0;
	cout << "your before input: " << input << '\n';
	cin >> input;
	cout << "your input: " << input << '\n';

	/// <summary>
	/// 함수와의 첫만남
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	
	cout << 1 + 2 << endl;
	cout << 3 + 4 << endl;
	cout << MultTwoNumbers(1, 2)<<": 함수값\n";

	/// <summary>
	/// 식별자 이름 짓기
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	//https://en.cppreference.com/w/cpp/keyword
	//너무 길지 않으면서 의미를 충분히 파악할 수 있게 짓기.
	
	int numApples=0;
	int nApples=0;
	int _apples = 0;//언더바 붙이는 경우도 있음
	
	
	
	//지역범위
	//지역변수가 차지하고 있던 메모리는 그 지역변수가 영역을 벗어날 때 
	//스택 메모리로 반납
	//반납된 메모리는 다음 지역 변수가 사용할 수 있도록 대기
	
	//{} 그냥 블록 넣어도 됨.
	//역할: 영역분리
	//모두 지역변수임.
	{
		int x = 1;
	}

	{
		int x = 2;
	}


	/// <summary>
	/// 연산자와의 첫 만남
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	
	int number = 2;//number is variable, 2 is a literal.
	cout << "hello world" << endl;//"hello world": 리터럴
	cout << 1 + 2 << endl;//1도 리터럴,2도 리터럴. 1+2: 표현식. +: 연산자
	cout << number + 2 << endl;//number, 2: 피연산자. 

	//삼항연산자
	number == 2 ? cout << "2" : cout << "not 2";
	

	/// <summary>
	/// 선언과 정의의 분리
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	
	//정의피킹: 다른 파일에 있을 때 쓰기 좋다.

	/// <summary>
	/// 헤더파일만들기(파일쪼개기)
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>

	add(1, 2);//다른 파일의 함수를 불러옴.: 헤더파일 만들기.


	/*
		<헤더가드>
		
		링킹에러
		delete: 지우는 것 
		remove: 컴파일 할 때 없는 셈 치라는 뜻
		컴파일러: 선언이 있으면 빌드는 함
		링킹에러: 몸체가 없으면 링킹에러.(함수 몸)

		헤더가드: #pragma once


	*/


	/*
		namespace: 이름공간

		어떤 경우 사용하는가: 
		int math(int a,int b){
		
			return a+b;
		}
		int math(int a,int b){

			return a*b;
		}

		다른파일에서 함수 만들었는데 이름이 같은 경우:
		namespace로 감싸면 됨
	*/
	
	//cout<<math(3, 4)<<"\n";
	cout << mySpace1::math(3, 4);
	cout << mySpace1::MYSPAC::myFunc;


	/*
		전처리기
	*/
	
	cout<<MAX(3, 4);

	//존재하면
	#ifdef LIKE_APPLE
	cout << "apple" << endl;
	#endif // DEBUG

	//존재안하면 == #else
	#ifndef LIKE_APPLE
		cout << "ORANGE" << endl;
	#endif // !LIKE_APPLE

		return 0;
}

int MultTwoNumbers(int a, int b) {
	int sum = a * b;
	return sum;
}

//동사명사로 이름짓는게 대다수
//함수에 마우스 갖다 대면 주석이 보인다.
//무슨기능인지 주석.........
void AddNum() {

}