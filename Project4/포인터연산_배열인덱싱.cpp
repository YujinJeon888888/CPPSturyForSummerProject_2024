#include <iostream>
using namespace std;

int main_������() {
	int value = 7;
	int* ptr= &value;

	
	cout << ptr << endl;
	
	for (int i = 0; i < 3; i++) {
		cout << ptr++ << endl;//�ּҰ� ������ �Ű���
	}

	long long array[] = { 9,7,5,3,1 };
	long long* Lptr = array;
	for (int i = 0; i < 5; i++) {
		cout << *(Lptr + i) << " " << (Lptr + i) << endl;//�ڵ����� ���� �°� �̵�	
	}


	return 0;
}