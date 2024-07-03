#include <iostream>

using namespace std;

void printArray(int array[]) {//내부적으로는 그냥 포인터임. int *array랑 같은의미임
	cout << sizeof(array) << endl;//4
	*array = 100;//100으로 바꿈
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


int main_배열포인터() {
	/// <summary>
	/// 어레이도 포인터다. 근데 편의성기능이 좀 더 있다
	/// </summary>
	/// <returns></returns>
	
	int array[5]{9,7,5,3,1};

	cout << array << endl;//주소
	cout << array[0] << endl;//값
	cout << &array[0] << endl;//주소


	cout << *array << endl;//array[0]
	
	
	char name[] = "fsdgw";
	cout << *name << endl;//f
	cout << &name << endl;//주소
	cout << &(name[0]) << endl;//fsdgw
	cout << name << endl;//fsdgw

	cout << sizeof(array) << endl;
	int* ptr = array;//포인터는 항상 4바이트. 인티저라서 4바이트인게 아니다.
	cout << sizeof(ptr) << endl;//포인터는 항상 4바이트

	//파라미터로 넘길 때
	printArray(array);
	cout << array[0] << endl;//100
	cout << *array << endl;//100

	cout << *(ptr + 1) << endl;//array[1]
	cout << *ptr + 1 << endl;//array[0]+1

	MyStruct ms;
	cout << ms.myArray[0] << endl;
	doSomething(ms);//20
	doSomething(&ms);//20. 구조체, 클래스는 포인터로 강제변환 되지않고 구조체 자체가 간다.
	return 0;
}