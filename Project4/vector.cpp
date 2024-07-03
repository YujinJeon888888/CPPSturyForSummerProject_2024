#include <iostream>
#include <vector>
using namespace std;
int main() {
	//사이즈 안 적어줘도 된다. 동적할당이기때문에.
	vector<int> arr = { 1,2,3,4,5 };
	for (auto itr : arr) {
		itr = 1;
		cout << itr << " ";
	}
	cout << endl;

	// 사이즈 바꿀 수 있다.
	arr.resize(10);
	for (auto itr : arr) {
		cout << itr << " ";
	}
	cout << endl;
	//참조할 시 바뀐다.
	for (auto &itr : arr) {
		itr = 1;
	}
	for (auto itr : arr) {
		cout << itr << " ";
	}
	cout << endl;

	//가변크기
	//vector<int> array2 = { 1,2,3,4,5 };
	//cout << array2.size() << endl;

	//vector<int> array3 = { 1,2,3, };
	//cout << array3.size() << endl;

	//vector<int> array4 = { 1,2,3, };
	//cout << array4.size() << endl;

	return 0;
}