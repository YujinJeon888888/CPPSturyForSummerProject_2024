#include <iostream>
#include <vector>
using namespace std;
int main() {
	//������ �� �����൵ �ȴ�. �����Ҵ��̱⶧����.
	vector<int> arr = { 1,2,3,4,5 };
	for (auto itr : arr) {
		itr = 1;
		cout << itr << " ";
	}
	cout << endl;

	// ������ �ٲ� �� �ִ�.
	arr.resize(10);
	for (auto itr : arr) {
		cout << itr << " ";
	}
	cout << endl;
	//������ �� �ٲ��.
	for (auto &itr : arr) {
		itr = 1;
	}
	for (auto itr : arr) {
		cout << itr << " ";
	}
	cout << endl;

	//����ũ��
	//vector<int> array2 = { 1,2,3,4,5 };
	//cout << array2.size() << endl;

	//vector<int> array3 = { 1,2,3, };
	//cout << array3.size() << endl;

	//vector<int> array4 = { 1,2,3, };
	//cout << array4.size() << endl;

	return 0;
}