#include <iostream>
using namespace std;
//기본 접근지정자 : private: 해당 클래스 안에서만 해당 클래스 멤버 접근가능. 따라서 보이지도 않음. 수정도 안 됨.
//우회적 접근: get, set.
//부분부분 접근지정자 다르게 
//public: 클래스 안의 멤버들을 밖에서도 접근 가능하게. 
//protected: 


class Date {
private: 
	int month;
	int day;
	int year;

public:
	void setDate(const int& month_input, const int& day_input, const int & year_input) {
		month = month_input;
		day = day_input;
		year = year_input;
	}

	void setMonth(const int& month_input) {
		month = month_input;
	}
	int getMonth() {
		return month;
	}
};
/// <summary>
/// 왜 private? 
/// 유지보수 쉬워서. 
/// 고쳐야할 일 생길 때 그 클래스 내에서 해결하면 돼서 편함
/// </summary>
/// <returns></returns>

int main_접근지정자() {
	

	return 0;
}