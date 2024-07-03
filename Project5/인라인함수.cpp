#include <iostream>
using namespace std;
//inline으로 바꾸면, 함수 호출자리에 함수 코드가 대입이된다. 
//함수가 호출될 일이 없으니 함수 찾는 시간이 안 듦.
//inline 으로 모두 함수를 바꾼다고 해서 빨라지는 게 아니라
//컴파일러가 판단해서 inline쓴다고 해서 꼭 inline처럼 안 할수도 있고, inline이 아닌데 inline 넣을 수 있음
//컴파일러가 알아서 하는 거임.
inline int min(int x, int y) {
	return x > y ? y : x;
}


int main_인라인() {

	return 0;
}