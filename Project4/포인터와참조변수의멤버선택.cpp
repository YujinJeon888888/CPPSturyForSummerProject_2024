#include <iostream>

using namespace std;

struct Person {
	int age;
	double weight;
};

int main_�����Ͷ�������������() {
	Person person;

	person.age = 5;
	person.weight = 30;

	//���۷������
	Person& ref = person;
	ref.age = 15;
	cout << person.age<<"\n";//15
	//�����͹��
	Person* ptr = &person;
	ptr->age = 30;
	cout << person.age << "\n";//30


	

	return 0;
}