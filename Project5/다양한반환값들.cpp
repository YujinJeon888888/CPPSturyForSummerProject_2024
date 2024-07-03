#include <iostream>
#include <tuple>
using namespace std;

//1.값 복사 리턴: c++은 기본적으로 이 방법. 객체든 아니든
int getValue(int x) {
	int value = x * 2;
	return value;
}
//2. 참조변수로 나타내면 원본과 연결 : return by reference

//3. 여러 개를 리턴받고 싶을 때
//1) 구조체
struct S {
	int a, b, c, d;
};
S getStruct() {
	S myS{ 1,2,3,4 };
	return myS;
}
//2) tuple
std::tuple<int, double> getTuple() {
	int a = 10;
	double d = 3.14; // d를 double로 선언
	return std::make_tuple(a, d);
}

int main_다양반환값() {
	int value = getValue(3);
	//여러 개 리턴받고 싶을 때 : 구조체 가능
	S myS = getStruct();
	myS.a;

	//여러 개 리턴받고 싶을 때: tuple
	//tuple<int, double> myTP = getTuple();
	//cout<< std::get<0>(myTP)<<endl;//a
	//cout<< std::get<1>(myTP)<<endl;//d
	
	/// <summary>
	/// 알아서 추리해서 받아오기
	/// </summary>
	/// <returns></returns>
	auto [i, d] = getTuple();
	cout << i << endl;
	cout << d<< endl;


	return 0;
}