#include <iostream>
using namespace std;

class Calc {
	int value = 1;
public: 
	void print() {
		//함수안에넣기. 밖에 넣으면 헤더 인클루드 할 때 모두 영향받기 때문
		using namespace std;
		cout << value << endl;
	}
};