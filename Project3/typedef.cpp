#include <iostream>
#include <vector>
int main_typedef() {
	using namespace std;

	//�ִ� Ÿ�Կ� ���� ����� �� ����
	//���α׷��� ���Ǹ� ���ؼ�
	//���������� ���ϴ�.
	typedef double distance_t;

	std::int8_t i(97);

	
	double my_distance;
	distance_t home2work;
	
	typedef vector<pair<string, int>> pairlist_t;
	pairlist_t pairlist;

	return 0;
}