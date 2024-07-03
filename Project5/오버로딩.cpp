#include <iostream>
using namespace std; 
/// <summary>
/// 인자가 다르면 오버로딩.(개수든, 순서든, 타입이든)
/// </summary>
/// <param name="x"></param>
/// <param name="y"></param>
/// <returns></returns
/// 반환형이 다른 경우는 오버로딩을 구성하는 요소가 아닙니다. 따라서 반환형이 다른 함수를 같은 이름으로 정의하는 것은 허용되지 않습니다.
auto add(int x, int y) {
	return x + y;
}
auto add(double x, double y) {
	return x + y;
}
auto add(float x, float y) {
	return x + y;
}

void _print(char value) {

}
void _print(int value) {

}

int main_오버로딩() {
	cout << add(3, 4) << endl;
	
	_print(0);
	_print('a');
	
	
	
	return 0;
}