#include <iostream>
using namespace std;

void doSomething(int &n) {
	n = 10;
	cout << "In doSomething: " << n << endl;
}

void doSomething2(const int& x) {
	
	cout << x << endl;
}

struct something {

	int v1;
	float v2;

};

struct other {
	something st;
};

int main_��������() {
	int value = 5;

	//�̰� ������
	int* ptr = nullptr;
	ptr = &value;

	//�̰� ����. ����ó�� ���� �� �ִ�.
	int& ref = value;// ref�� �ּҰ� value�� �ּҿ� ������
	const int y = 9;
	//int& ref2 = y; �ȵȴ�. ref2�� y�� �ٲ���� �� �ֱ� ����
	
	cout << ref << endl;

	ref = 10;

	cout << value << " " << ref << endl;
	cout << &value << " " << &ref << endl;
	cout << &ptr << endl;

	int value1 = 5;
	int value2 = 10;

	int& ref1 = value1;
	cout << ref1 << endl;;
	ref1 = value2;
	cout << ref1<<endl;

	ref1 = 7;

	//������ ���� ����. ����x
	cout << value1 << endl;
	doSomething(value1);
	cout << value1 << endl;
	ref1 = 39;
	cout << value1 << endl;
	//�Լ����� �� �� �ٲٰ� �ϰ������: �Լ����� �Ű����� ������ const�� �ϱ�.
	doSomething(value1);


	other ot;
	//.�� �ʹ����Ƽ� �����ʴ�. 
	ot.st.v1 = 1.0;

	//���: 
	int& v1 = ot.st.v1;
	v1 = 1;

	/// <summary>
	/// ������ const
	/// </summary>
	/// <returns></returns>
	int x=5;
	const int &refX = x;//const�̸������ٿ�����Ȯ���غ���

	//�Ű������� const�̹Ƿ� ���� �� �ٲ��. 
	doSomething2(x+3);
	
	cout << refX<<endl;

	//refX++; �ȵȴ�. const�ϱ�


	x = 7;
	cout << refX;//7

	//��, refX�� �ٲٴ� �� �ȵ����� x�� �ٲٴ� �� ����. �̷��� refX�� �ٲ�
	return 0;
}