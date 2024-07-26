#include <iostream>

template <typename T>
class MyClass {
private:
	T data;
public:
	MyClass(T d)
		: data(d)
	{}
	void show() {
		std::cout << data << std::endl;
	}
	//연산자오버로딩
	bool operator== (const MyClass<T> &other)const {
		return data == other.data;
	}

	bool operator< (const MyClass<T>& other) const {
		return data < other.data;
	}
};

template <typename T>
T getMax(T x, T y) {
	return (x > y) ? x : y;
}

int main() {
	std::cout << getMax(1, 2) << std::endl;

	MyClass<int> obj(10);
	obj.show();
	
	
	MyClass<int> obj1(10);
	MyClass<int> obj2(20);
	MyClass<int> obj3(30);

	//비교예제
	if (obj1 == obj3) {
		std::cout << "obj1 is equal to obj3" << std::endl;
	}
	else {
		std::cout << "obj1 is not equal to obj3" << std::endl;
	}

	if (obj1 < obj2) {
		std::cout << "obj1 is less than obj2" << std::endl;
	}
	else {
		std::cout << "obj1 is not less than obj2" << std::endl;
	}

	

	return 0;
}
