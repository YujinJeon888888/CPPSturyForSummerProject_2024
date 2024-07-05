#include "클래스_헤더분리.h"
/// <summary>
/// 왜 extern을 사용하는가?
//변수의 중복 정의 방지 :
//
//여러 소스 파일에서 같은 이름의 <전역 변수>를 정의하면, 링크 시점에 중복 정의 에러가 발생합니다.
//extern 키워드를 사용하면 변수가 다른 파일에 정의되어 있음을 알리고, 해당 파일에서는 정의를 생략할 수 있습니다.
//명확한 변수 정의 위치 지정 :
//
//변수의 정의는 하나의 소스 파일에만 위치하고, 다른 파일에서는 선언만 하여 참조합니다.
//이는 코드의 유지보수성과 가독성을 높이는 데 도움이 됩니다.

//extern 키워드는 주로 전역 변수에서 사용되며, 다른 파일에서 정의된 전역 심볼을 참조할 때 필요합니다.
//클래스 멤버 변수나 함수는 해당 클래스의 일부로, 클래스 자체에 대한 정보를 제공하므로 외부에서 참조할 때 extern 키워드를 사용할 필요가 없습니다.
/// </summary>
/// <returns></returns>
int main_클래스헤더분리() {
	using namespace std;
	Calc calc;
	cout << calc.getA() << endl;
	cout << calc.getB() << endl;
	cout << calc.add(2, 3) << endl;
	cout << calc.sub(3, 7) << endl;
	
	return 0;
}