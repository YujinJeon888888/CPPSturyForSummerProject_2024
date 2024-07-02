#include <iostream>
#include <vector>
int main_typedef() {
	using namespace std;

	//있는 타입에 가명 만들어 준 것임
	//프로그래밍 편의를 위해서
	//유지보수도 편하다.
	typedef double distance_t;

	std::int8_t i(97);

	
	double my_distance;
	distance_t home2work;
	
	typedef vector<pair<string, int>> pairlist_t;
	pairlist_t pairlist;

	return 0;
}