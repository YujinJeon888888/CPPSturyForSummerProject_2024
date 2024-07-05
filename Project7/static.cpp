#include <iostream>
using namespace std;

class Something {
public:
	
	//static int mValue = 1; //static멤버변수는 초기화 못 함.
	//Something::sValue(정적변수므로 객체생성전에도 접근가능), 객체.sValue 접근가능. (모든 객체가 공유하는 값)
	//이러한 변수들은 런타임 초기화 과정을 거치지만, 메모리 주소는 컴파일 타임에 결정됩니다.
	static int sValue;
	//const는 정의가 된다.
	//C++에서는 static const 정수형(또는 열거형) 멤버 변수는 특별히 클래스 선언 내부에서 초기화할 수 있도록 허용합니다. 이는 컴파일러가 이러한 상수를 constexpr로 처리할 수 있기 때문입니다. 상수는 변경되지 않으며, 컴파일 타임에 그 값을 알 수 있으므로 클래스 선언 내부에서 초기화가 가능합니다:
	//싱글톤에 쓰임
	static const int csValue=1;

	static int getValue() {
		return sValue;
		//this가 왜 static안에서 안 될까?
		//객체가 없으니까. 자기자신을 가리키는 포인터인 this 를 못 쓰는거임
	}

	Something() {
		/// <summary>
		/// 되긴 되나, 
		/// 
		/// 생성자에서 static 멤버 변수를 초기화하는 것은 인스턴스 생성 시마다 호출될 수 있어 불필요한 초기화나 값 덮어쓰기를 초래할 수 있습니다.
		/// 
		/// 따라서
		/// 
		/// 클래스 외부에서 static 멤버 변수를 초기화하는 것이 기본적으로 선호되는 방법입니다. 이는 프로그램의 시작 시 한 번만 초기화되며, 명시적이고 일관된 초기화를 보장합니다.
		/// </summary>
		sValue = 1;
	}
};
/// <summary>
/// C++에서 static 멤버 변수를 클래스 선언 안에서 직접 초기화할 수 없는 이유는 static 멤버 변수가 클래스의 인스턴스와 독립적으로 존재하기 때문입니다. 대신 클래스 외부에서 초기화해야 합니다.
/// static이니까 메모리에 정적으로 존재.
/// 메모리할당공간차이때문
/// </summary>
int Something::sValue = 1;

int generateID() {
	static int sID = 0;// sID는 함수가 처음 호출될 때만 초기화되고, 이후 호출에서는 값을 유지합니다.
	return ++sID;
}


int main_응() {
	cout << generateID() << endl;//1
	cout << generateID() << endl;//2
	cout << generateID() << endl;//3
	
	Something st1;
	Something st2;
	
	st1.sValue = 2;
	//같은주소, 같은값
	cout << &st1.sValue << " " << st1.sValue << endl;
	cout << &st2.sValue << " " << st2.sValue << endl;
	/// <summary>
	/// 자바에서는 Class. 으로 static멤버접근하는데 C++에서는 ::로 접근
	/// </summary>
	/// <returns></returns>
	cout << &Something::sValue << endl;
	

	return 0;
}