#include <iostream>

int main() {
	using namespace std;
	
	int i;
	
	
	while (true) {
		cout << "정수 입력하세요: ";
		cin >> i;
		if (cin.fail()) {//입력실패시
			cin.clear();//입력상태초기화. 버퍼비우기 역할이 아님. 오류 상태 플래그 초기화: 입력 스트림이 failbit나 badbit 상태에 있을 때, cin.clear()를 호출하면 이러한 오류 상태 플래그를 초기화하여 스트림을 다시 정상적인 상태(goodbit)로 만듭니다.
			cin.ignore(numeric_limits<streamsize>::max(), '\n');//줄바꿈 문자까지 입력 버퍼를 비우겠다는 뜻입니다. 즉, 현재 입력 버퍼에 남아있는 모든 문자를 무시하여 다음 입력을 받을 준비를 합니다
			cout << "다시 입력하세요.\n";
			continue;
		}
		else {
			cout << "정상적으로 입력받았습니다.\n";
			break;
		}
	}
	cout << "결과: " << i << endl;

	return 0;
}