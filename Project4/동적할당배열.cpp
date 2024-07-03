#include <iostream>
using namespace std;
int main_동적할당배열() {
	int length;
	cout << "크기 입력해라: ";
	cin >> length;

	//동적할당이기 때문에 크기를 동적지정가능
	int* array = new int[length] {11,22,33,44,55,66};//length 가 6이하면 에러난다.

	array[0] = 1;
	array[1] = 2;

	for (int i = 0; i < length; i++) {
		cout << array[i] << " " << &array[i]<<endl;
	}

	return 0;
}