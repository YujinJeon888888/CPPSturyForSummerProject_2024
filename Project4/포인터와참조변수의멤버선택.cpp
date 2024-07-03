#include <iostream>

using namespace std;

struct Person {
	int age;
	double weight;
};

int main_포인터랑참조변수차이() {
	Person person;

	person.age = 5;
	person.weight = 30;

	//레퍼런스방식
	Person& ref = person;
	ref.age = 15;
	cout << person.age<<"\n";//15
	//포인터방식
	Person* ptr = &person;
	ptr->age = 30;
	cout << person.age << "\n";//30


	

	return 0;
}