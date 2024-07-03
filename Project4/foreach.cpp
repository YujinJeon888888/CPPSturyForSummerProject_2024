#include <iostream>
#include <vector>
using namespace std;

int main_foreach() {
	vector<int> fibonacci{
		0,1,1,2,3,5,8,13,21,34,55,89
	};
	//change arr values
	for (int &number : fibonacci) {
		number *= 10;
	}

	//output
	for (const auto number : fibonacci) {
		cout << number << endl;
	}
	int max_number = 0;
	for (const auto& n : fibonacci) {
		max_number = std::max(max_number, n);
	}
	cout << max_number << endl;

	return 0;
}