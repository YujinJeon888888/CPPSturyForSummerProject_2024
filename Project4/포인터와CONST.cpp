#include <iostream>
#include "../Project3/��������.cpp"
using namespace std;
int main_constPointer() {
	int vaule = 5;
	const int* ptr = &value;

	value = 6;
	//*ptr = 4;//�̰Ǿȵ�
	
	cout << *ptr << endl;

	//***const�� ��� �ٴ��Ŀ� ���� ����***
	//, ptr1�� ����Ű�� ���� ������ �� ������, ptr1 ��ü�� �ٸ� �ּҸ� ����ų �� �ֽ��ϴ�.
	const int *ptr1 = &vaule;
	//ptr2�� �׻� ������ �ּҸ� ����Ű��, �ٸ� �ּҸ� ����Ű���� ������ �� �����ϴ�. �׷��� ptr2�� ����Ű�� ���� ������ �� �ֽ��ϴ�.
	int *const ptr2 = &vaule;
	//ptr3�� ����Ű�� ���� ������ �� ����, ptr3 ��ü�� �ٸ� �ּҸ� ����Ű���� ������ �� �����ϴ�.
	const int *const ptr3 = &vaule;


	return 0;
}