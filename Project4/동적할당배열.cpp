#include <iostream>
using namespace std;
int main_�����Ҵ�迭() {
	int length;
	cout << "ũ�� �Է��ض�: ";
	cin >> length;

	//�����Ҵ��̱� ������ ũ�⸦ ������������
	int* array = new int[length] {11,22,33,44,55,66};//length �� 6���ϸ� ��������.

	array[0] = 1;
	array[1] = 2;

	for (int i = 0; i < length; i++) {
		cout << array[i] << " " << &array[i]<<endl;
	}

	return 0;
}