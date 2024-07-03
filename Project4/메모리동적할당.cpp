#include <iostream>
using namespace std;
int main_정적할당배열() {
	//nothrow: throw x
	int* ptr =  new (std::nothrow) int(7);//heap
	int* ptr2 = ptr;
	cout << ptr << " " << *ptr << endl;

	//할당받은 메모리를 반드시 반납해야한다.
	while (true)
	{	
		int* ptr = new int;
		cout << ptr << endl;

		delete ptr;//이게없으면 메모리 계속 생김: 메모리누수
	}
	
	return 0;
}