#include <iostream>

using namespace std;
class Friend {
public: //public, private, protected
	string name="무명";
	string address="무지역";
	int age=0;

	void print() {
		cout << name << " " << address << " " << age << endl;
	}
};
int main_클래스() {
	/// <summary>
	/// 구조체  vs 클래스
	/// 
	/// 구조체는 멤버변수만 있을 때, 
	/// 클래스는 기능까지 있을 때 쓰는 것이 일반적이다.
	/// </summary>
	/// <returns></returns>

	//자바와의차이점
	//결론
	//자바에서는 클래스의 인스턴스를 생성할 때 new 키워드를 사용해야 하며, 인스턴스가 생성되지 않은 상태에서 멤버 변수나 메소드에 접근하려고 하면 컴파일 오류가 발생합니다. 
	//C++에서는 클래스의 인스턴스가 선언과 동시에 생성되며, 멤버 변수들은 기본 생성자에 의해 초기화됩니다.이는 C++의 객체 지향 프로그래밍에서 흔히 볼 수 있는 동작 방식입니다.따라서 C++에서는 클래스를 선언만 하고도 해당 클래스의 멤버 함수나 멤버 변수에 접근할 수 있습니다.
	Friend frd ;
	frd.print();
	

	return 0;
}