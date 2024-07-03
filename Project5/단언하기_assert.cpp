#include <cassert>
using namespace std;
int main_assert() {
	/// <summary>
	/// assert는 사용자를 위한 예외처리라기보다는 코더를 위한 예외처리야?
	//ChatGPT
	//	네, assert는 주로 코더를 위한 예외 처리 도구로 사용됩니다.assert 매크로는 코드의 특정 조건이 항상 참이라고 단언할 때 사용됩니다.이는 개발자가 코드의 논리를 검증하고 디버깅하는 데 도움을 줍니다.
	/// </summary>
	/// <returns></returns>
	int num = 5;
	/// <summary>
	/// 이 표현식이 false인 경우, 프로그램은 즉시 종료되며, 오류 메시지가 표준 오류 스트림에 출력됩니다. 오류 메시지에는 실패한 표현식, 파일 이름, 그리고 실패한 코드 줄 번호가 포함됩니다.
	/// </summary>
	/// <returns></returns>
	//런타임에 체크해주는 기능
	assert(num==5);//이래야 한다고 단언

	//2. static_assert: 컴파일타임에 오류 체크
	//static_assert(num==5);//안된다. 변수니까 컴파일타임에 안됨
	const int i = 2;
	static_assert(i==2);
	//static_assert(i==1, "i should be 2");//즉시 빨간밑줄뜬다. 컴파일타임에 확인했을 때 false이기때문. 오류메세지도뜬다.

	return 0;
}