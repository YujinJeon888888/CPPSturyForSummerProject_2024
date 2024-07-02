#include <iostream>
#include <string>
//데이터타입을 알려주는 기능
#include <typeinfo>
int main_형변환() {
	using namespace std;
	int a = 123.0;//암시적 형변환-> 소수점 이하를 자른다.
	cout << typeid(a).name() << endl;

	float f = 1.0f;
	double d = f;//자동 승진(numeric promotion)

	//numeric conversion
	//큰게 작은거로 넘어갈 때 문제
	int i = 30000;
	char c = i;//i가 더 큼. 안 들어감. 

	//48
	cout << static_cast<int> (c) << endl;

	int testI = 123;
	double testD = 1.23;

	//testI = testD;
	//cout << testI << endl;//1
	
	testD = testI;
	cout << testD << endl;

	string s = "23";
	int sI = 123;
	s = sI;
	cout << s << endl;//{


	//명시적형변환
	int 명시적I = 3;
	double 명시적D = 3.12;

	cout<<(double)명시적I << endl;


	std::string str = "123";
	int num = std::stoi(str); // 명시적 형변환
	std::cout << "문자열에서 숫자형으로 변환: " << num << std::endl; // 결과: 123
	
	//요즘방식 명시적형변환
	static_cast<int> (c);
	return 0;
}