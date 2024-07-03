#include <iostream>
using namespace std;
void print(int x = 0, int y = 10, int z = 100);
//매개변수 기본값
//선언에서 기본값 넣었으면 정의에서는 기본값 안 
// 넣는게 좋다.
//선언에 기본값 정의하는 게 좋다.
// 디폴트를 하나의 매개변수에만 넣는다거나 가능.
void print(int x ,int y , int z ) {
	cout << x <<" " <<y << " "<<z<<endl;
}
int main_매개변수초기화() {
	print();//0
	print(100);//100 10 100
	print(100, 200);//100 200 100
	print(100, 200,300);//100 200 300
	return 0;
}