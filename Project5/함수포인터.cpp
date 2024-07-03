#include <iostream>
#include <array>
using namespace std;

bool IsEven(const int& number) {
	return number % 2 == 0; // ������ ������ true, �ƴϸ� false
}

bool IsOdd(const int& number) {
	return number % 2 != 0; // ������ ������ true, �ƴϸ� false
}

void PrintNumbers(const array<int, 10> & my_array, bool (*check_func) (const int&) = IsEven){
	for (auto element : my_array) {
		if (check_func(element)) {
			cout << element<<" ";
		}
	}
	cout << endl;
}

int func() {
	return 5;
}

int goo() {

	return 10;
}
int main_�Լ�������() {
	//�Լ����� ����ϸ�? 
	cout << func << endl;//�޸𸮰� ������.
	//��, �Լ��� �޸𸮴�.
	//������ �ּҸ� ������ �� �� �� �־�����
	//�Լ��� �ּҸ� ������ �� �� �� �ִ�.

	//������, �Լ������ͺ�����, ����
	int (*funcptr)() = func;//�Լ��� �ּҸ� ����
	//�Լ������Ͱ� ����Ű�� �� func. ���� 5�� ���
	cout << funcptr() << endl;
	funcptr = goo;
	//�Լ������Ͱ� ����Ű�� �� goo. ���� 10�� ���
	cout << funcptr() << endl;

	///�Լ�������
	array<int, 10> my_array = { 0,1,2,3,4,5,6,7,8,9 };
	//�Լ��� �̸���ü�� �������̱⶧���� &�Ⱥٿ�����
	PrintNumbers(my_array,IsOdd);
	PrintNumbers(my_array,IsEven);
	PrintNumbers(my_array);



	return 0;
}