#include <iostream>
using namespace std;

struct Person {
	double height;
	int age;
	//�⺻��
	string name = "����";

	void print() {
		cout << age << " " << height << " " << name << endl;
	}
};

void PrintPerson(Person person) {
	cout << person.height<<" "<<person.age<<" "<<person.name << endl;
}

Person GetPerson(Person ps) {
	return ps;
}

int main_����ü() {
	
	Person me = {158.2, 23, "������"};
	Person mom;
	mom.age = 2;
	mom.height = 1;
	mom.name = "d";
	Person dad;

	PrintPerson(me);
	me.print();

	dad = GetPerson(me);
	dad.print();

	Person clone;
	clone.print();


	cout << sizeof(Person) << endl;
	return 0;
}