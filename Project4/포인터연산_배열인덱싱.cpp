#include <iostream>
using namespace std;

int main_포포포() {
	int value = 7;
	int* ptr= &value;

	
	cout << ptr << endl;
	
	for (int i = 0; i < 3; i++) {
		cout << ptr++ << endl;//주소가 옆으로 옮겨짐
	}

	long long array[] = { 9,7,5,3,1 };
	long long* Lptr = array;
	for (int i = 0; i < 5; i++) {
		cout << *(Lptr + i) << " " << (Lptr + i) << endl;//자동으로 형에 맞게 이동	
	}


	return 0;
}