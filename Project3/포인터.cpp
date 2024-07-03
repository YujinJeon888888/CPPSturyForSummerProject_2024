#include <iostream>
using namespace std;

struct Something {
	int a, b, c, d;
};

int main_pointer() {
	
	int x = 5;

	cout << x << endl;
	cout << &x << endl;//0056FE04
	cout << (int)&x << endl;// 10025668. os방식 때문이래

	//포인터
	cout << *(&x) << endl;
	//포인터는 메모리 주소를 담는 변수.
	int *ptr_x = &x;
	cout << ptr_x << endl;//0056FE04
	cout << &x << endl;//0056FE04
	cout << *ptr_x << endl;//5
	cout << x << endl;//5
	cout << typeid(ptr_x).name() << endl;

	Something ss;
	Something* ptr_s;
	cout << sizeof(Something) << endl;//16
	cout << sizeof(ptr_s) << endl;//4

	/// <summary>
	/// 널 포인터
	/// </summary>
	/// <returns></returns>
	
	double* ptr = 0;//c-style
	double* dPtr = nullptr;//c++ style

	if (dPtr != nullptr) {
		//do something
	}
	else {
		//do nothing 
		cout << dPtr << endl;
		//cout << *dPtr << endl;//런타임에러
	}
	return 0;
}