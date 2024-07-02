#include <iostream>
#include <string>
#include <limits>
int main_STRING() {
	using namespace std;
	/// <summary>
	/// string 
	/// </summary>
	/// <returns></returns>

	//"Hello, World": 12글자지만 크기는 13. (맨 끝: 널)
	//자료형 색이 왜 초록색? : 사용자 정의 자료형
	const string myHello = "Hello, World";
	cout << myHello << endl;

	cout << "Your name: " << endl;
	string name; 
	//cin >> name;//name입력할 때 공백있을 시 버퍼남아서 age입력 스킵된다. 공백을 기준으로 입력 구분하기 때문. 
	std::getline(std::cin, name);//대안
	cout << "Your age: " << endl;
	string age;
	//cin >> age;
	std::getline(std::cin, age);
	cout << name << " " << age << endl;

	cout << "your age? " << endl;
	
	cin >> age;
	//엔터 버퍼에 남는다.
	//해결방법: 
	cin.clear();//버퍼비움 
	cin >> name;
	cout << name;



	return 0;
}