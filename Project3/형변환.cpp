#include <iostream>
#include <string>
//������Ÿ���� �˷��ִ� ���
#include <typeinfo>
int main_����ȯ() {
	using namespace std;
	int a = 123.0;//�Ͻ��� ����ȯ-> �Ҽ��� ���ϸ� �ڸ���.
	cout << typeid(a).name() << endl;

	float f = 1.0f;
	double d = f;//�ڵ� ����(numeric promotion)

	//numeric conversion
	//ū�� �����ŷ� �Ѿ �� ����
	int i = 30000;
	char c = i;//i�� �� ŭ. �� ��. 

	//48
	cout << static_cast<int> (c) << endl;

	int testI = 123;
	double testD = 1.23;

	//testI = testD;
	//cout << testI << endl;//1
	
	testD = testI;
	cout << testD << endl;

	string s = "23";
	int sI = 123;
	s = sI;
	cout << s << endl;//{


	//���������ȯ
	int �����I = 3;
	double �����D = 3.12;

	cout<<(double)�����I << endl;


	std::string str = "123";
	int num = std::stoi(str); // ����� ����ȯ
	std::cout << "���ڿ����� ���������� ��ȯ: " << num << std::endl; // ���: 123
	
	//������ ���������ȯ
	static_cast<int> (c);
	return 0;
}