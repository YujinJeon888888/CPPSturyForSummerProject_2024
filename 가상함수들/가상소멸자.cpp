#include <iostream>
using namespace std;
int main_가상소멸자() {
	//상속받은 오버라이딩 한 함수에 virtual : 오버라이딩 했음을 명시
	//	override : 오버라이딩 한 함수의 컴파일 에러 잡아주는 키워드
	//	final: 이 함수까지만 오버라이딩 되고 그 이후엔 안된다고 막음

	//	소멸자에 virtual : 자식 클래스까지 연쇄적으로 delete되어 메모리 누수 막아준다.

	return 0;
}