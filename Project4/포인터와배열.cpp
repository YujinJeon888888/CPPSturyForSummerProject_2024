#include <iostream>

using namespace std;

void printArray(int array[]) {//���������δ� �׳� ��������. int *array�� �����ǹ���
	cout << sizeof(array) << endl;//4
	*array = 100;//100���� �ٲ�
}

struct MyStruct {
	int myArray[5] { 9,7,5,3,1 };
};

void doSomething(MyStruct ms) {
	cout << sizeof(ms.myArray) << endl;
}

void doSomething(MyStruct *ms) {
	cout << sizeof((*ms).myArray) << endl;
}


int main_�迭������() {
	/// <summary>
	/// ��̵� �����ʹ�. �ٵ� ���Ǽ������ �� �� �ִ�
	/// </summary>
	/// <returns></returns>
	
	int array[5]{9,7,5,3,1};

	cout << array << endl;//�ּ�
	cout << array[0] << endl;//��
	cout << &array[0] << endl;//�ּ�


	cout << *array << endl;//array[0]
	
	
	char name[] = "fsdgw";
	cout << *name << endl;//f
	cout << &name << endl;//�ּ�
	cout << &(name[0]) << endl;//fsdgw
	cout << name << endl;//fsdgw

	cout << sizeof(array) << endl;
	int* ptr = array;//�����ʹ� �׻� 4����Ʈ. ��Ƽ���� 4����Ʈ�ΰ� �ƴϴ�.
	cout << sizeof(ptr) << endl;//�����ʹ� �׻� 4����Ʈ

	//�Ķ���ͷ� �ѱ� ��
	printArray(array);
	cout << array[0] << endl;//100
	cout << *array << endl;//100

	cout << *(ptr + 1) << endl;//array[1]
	cout << *ptr + 1 << endl;//array[0]+1

	MyStruct ms;
	cout << ms.myArray[0] << endl;
	doSomething(ms);//20
	doSomething(&ms);//20. ����ü, Ŭ������ �����ͷ� ������ȯ �����ʰ� ����ü ��ü�� ����.
	return 0;
}