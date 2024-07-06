#include <iostream>
/// <summary>
/// 다중상속 되지만, 다이아구조 상속은 안좋다. 
/// 따라서 피하는 게 좋다.
/// </summary>
class 간식 {
public:
	void print() {
		std::cout << "나는간식" << std::endl;
	};
};

class 빵 {
public:
	void print() {
		std::cout << "나는빵" << std::endl;
	};
};
//다중상속이된다.
class 소라빵 : public 간식, public 빵{
};

int main() {
	소라빵 소라빵;
	//모호해서 오류생김
	//소라빵.print();

	//해결방안
	소라빵.간식::print();
	소라빵.빵::print();
	
	return 0;
}