#include <iostream>

const char* getName() {
	return "JackJack";
}

int main_���ڿ����() {
	using namespace std;
	//�ݵ�� �տ� const�� �پ������ ��ȣ�� ���ó�� ����� �� ����
	const char* name = "Jack Jack";
	const char* name2 = "Jack Jack";

	//�����ּ�������.
	cout << (uintptr_t)name << endl;
	cout << (uintptr_t)name2 << endl;
	cout << name << endl;


	return 0;
}