#include <initializer_list>
#include <iostream>
using namespace std;

/// <summary>
/// 근데 인덱스로 접근은 안 되잖아. 그럴거면 vector가 낫지않나? 
//ChatGPT
//맞습니다, std::initializer_list는 인덱스로 접근할 수 없기 때문에, 인덱스 접근이 필요한 경우에는 std::vector와 같은 컨테이너를 사용하는 것이 더 나을 수 있습니다.그러나 std::initializer_list는 특정 상황에서 유용하며, 각 도구가 갖는 장점과 용도를 이해하는 것이 중요합니다.
//
//언제 std::initializer_list를 사용할까 ?
//단순 초기화 : 함수나 클래스에서 간단하게 여러 값을 초기화할 때 유용합니다.
//변경되지 않는 리스트 : 값을 추가하거나 제거할 필요가 없는 고정된 리스트를 전달할 때 좋습니다.
//가볍고 빠른 초기화 : 작은 크기의 리스트를 초기화할 때, 오버헤드가 적습니다.
//언제 std::vector를 사용할까 ?
//인덱스 접근이 필요한 경우 : 인덱스로 특정 요소에 접근해야 할 때 유용합니다.
//동적 크기 변경 : 요소를 추가하거나 제거할 필요가 있을 때 좋습니다.
//복잡한 데이터 조작 : 다양한 알고리즘과 연산을 적용해야 할 때 유용합니다.
/// </summary>
/// <returns></returns>
int main_이니셜라이즈드리스트() {
	//initialized_list<int>
	//이터레이터. []로 접근불가
	auto il = { 10,20,30 };
	
	for (int i : il) {
		cout << i << endl;
	}
	return 0;
}