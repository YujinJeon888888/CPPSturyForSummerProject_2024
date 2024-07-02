#include <iostream>
using namespace std;

void doSomething() {
	int a = 1;
	++a;
	cout << a << endl;
}
void doSomethingStatic() {
	static int a = 1;
	++a;
	cout << a << endl;
}

int a = 1;//전역변수 안 쓰는 게 좋다. 이름 지을 때 g 태그 달아주는 게 좋다.
void doSomethingGlobal() {
	++a;
	cout << a << endl;
}


int value = 123;

int main_변수범위() {
	cout << value << endl;//123
	//이 범위 안에서는 value를 쓸 경우  main 안의 value가 쓰인다. (이름 지우기)
	int value = 1;
	cout << ::value << endl;//123. :: 영역 연산자를 통해, 다른 영역의 변수를 가져다 쓰기
	cout << value << endl;//1

	//////////////////////////
	//같은결과.
	doSomething();//2
	doSomething();//2

	//static
	doSomethingStatic();//2
	doSomethingStatic();//3
	doSomethingStatic();//4
	doSomethingStatic();//5

	//전역변수
	doSomethingGlobal();//2
	doSomethingGlobal();//3
	doSomethingGlobal();//4
	doSomethingGlobal();//5


	//전역과 static의 차이는? 
	//static: 단어의 뜻 == a가 os로부터 받은 메모리가 static이라는 뜻
	//로컬변수: 반납할 때 메모리를 os가 다시 받아옴
	//static: 스태틱변수는 초기화를 1번만 한다. 즉, 초기화가 반드시 있어야 함.
	//static의 메모리 할당공간: data영역 == 프로그램이 종료될 때까지 유지된다.
	//static: 클래스내에서 모든 객체가 공유하는 값
	//* vs heap: heap은 동적할당공간이며 프로그램이 종료될 때 해체. 
	//* C++에는 Java의 가비지 컬렉터(Garbage Collector)와 같은 자동 메모리 관리 기능이 기본적으로 없습니다. 이는 프로그래머가 동적으로 할당한 메모리를 명시적으로 해제해야 한다는 것을 의미합니다. 
	//메모리 관점에서 생각하는 게 편하다. 
	//static vs global : static이 지역변수면 다른데에서 접근불가. 글로벌은 접근가능
	//////////////////////////
	//linkage
	//local variable 은 다른 파일과 연결 될 일이 없으니까 링킹이안됨.(그 cpp안에서만 쓰이는 변수니까)
	//global은 다른  cpp에서도 사용가능: external linkage
	//cpp를 include해서 쓰는 경우는 드물다. 
	//그럼 어떻게? 
	//	forward declaration: extern
	//	프로젝트 cpp 어딘가에 그 몸체가 존재한다는 뜻 
	
	/*
	Forward Declaration
Forward declaration은 함수나 클래스의 정의를 실제로 제공하기 전에 해당 함수나 클래스의 존재를 컴파일러에 알리는 방법입니다. 이는 주로 헤더 파일 간의 순환 종속성을 피하거나 구현 파일 간의 의존성을 줄이는 데 사용됩니다.

Forward Declaration 예시:

cpp
코드 복사
// Forward declaration
class MyClass;

void useMyClass(MyClass* ptr);
이러한 forward declaration은 컴파일러에게 MyClass라는 이름의 클래스가 존재함을 알리지만, 실제로 그 클래스의 내용을 알 필요는 없음을 의미합니다.

extern 키워드
extern 키워드는 변수가 다른 파일에서 정의되어 있음을 나타내는 데 사용됩니다. 이는 전역 변수나 함수가 여러 파일에서 참조될 수 있도록 합니다.

Extern 예시:

globals.h:

cpp
코드 복사
#ifndef GLOBALS_H
#define GLOBALS_H

extern int globalVariable;

#endif // GLOBALS_H
globals.cpp:

cpp
코드 복사
#include "globals.h"

int globalVariable = 10;
main.cpp:

cpp
코드 복사
#include <iostream>
#include "globals.h"

int main() {
    std::cout << "Global Variable: " << globalVariable << std::endl;
    return 0;
}
위 예제에서 globals.h는 globalVariable 변수가 다른 파일에서 정의되어 있음을 나타내고, globals.cpp에서는 실제로 그 변수를 정의합니다. 이를 통해 main.cpp에서 globalVariable을 사용할 수 있습니다.
	
	*/
	//extern 해 주면 변수 호출 시 같은 메모리 참조 -> 메모리 절약. //include하면 계속 메모리공간이 새로생김
	

	/// <summary>
	/// extern 키워드는 변수가 다른 파일에 정의되어 있음을 컴파일러에게 알립니다. 이는 해당 변수를 참조하는 모든 파일이 동일한 메모리 위치를 가리키도록 합니다. 결과적으로, 프로그램의 모든 부분이 같은 메모리 공간을 공유하게 되어 메모리 사용이 효율적입니다.
	/// 
	/// 헤더 파일을 #include하는 것은 코드의 재사용성을 높이는 방법이지만, 변수를 헤더 파일에 직접 정의하는 경우 문제를 일으킬 수 있습니다. 헤더 파일이 여러 번 포함되면, 각각의 포함된 위치에서 변수가 새로 정의되므로 메모리 공간이 중복으로 할당됩니다.
	/// </summary>
	/// <returns></returns>

//	예제
//		globals.cpp:
//
//	cpp
//		코드 복사
//		int globalVariable = 10; // 전역 변수 정의
//	main.cpp:
//
//	cpp
//		코드 복사
//#include <iostream>
//
//		// extern 키워드를 사용하여 globals.cpp에 정의된 전역 변수를 선언
//		extern int globalVariable;
//
//	int main() {
//		std::cout << "Global Variable in main.cpp: " << globalVariable << std::endl;
//		globalVariable = 20; // 변수 값 변경
//		std::cout << "Global Variable in main.cpp after change: " << globalVariable << std::endl;
//		return 0;
//	}
	return 0;
}