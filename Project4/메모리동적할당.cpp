#include <iostream>
using namespace std;
int main_�����Ҵ�迭() {
	//nothrow: throw x
	int* ptr =  new (std::nothrow) int(7);//heap
	int* ptr2 = ptr;
	cout << ptr << " " << *ptr << endl;

	//�Ҵ���� �޸𸮸� �ݵ�� �ݳ��ؾ��Ѵ�.
	while (true)
	{	
		int* ptr = new int;
		cout << ptr << endl;

		delete ptr;//�̰Ծ����� �޸� ��� ����: �޸𸮴���
	}
	
	return 0;
}