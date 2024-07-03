#include <iostream>
#include <tuple>
using namespace std;

//1.�� ���� ����: c++�� �⺻������ �� ���. ��ü�� �ƴϵ�
int getValue(int x) {
	int value = x * 2;
	return value;
}
//2. ���������� ��Ÿ���� ������ ���� : return by reference

//3. ���� ���� ���Ϲް� ���� ��
//1) ����ü
struct S {
	int a, b, c, d;
};
S getStruct() {
	S myS{ 1,2,3,4 };
	return myS;
}
//2) tuple
std::tuple<int, double> getTuple() {
	int a = 10;
	double d = 3.14; // d�� double�� ����
	return std::make_tuple(a, d);
}

int main_�پ��ȯ��() {
	int value = getValue(3);
	//���� �� ���Ϲް� ���� �� : ����ü ����
	S myS = getStruct();
	myS.a;

	//���� �� ���Ϲް� ���� ��: tuple
	//tuple<int, double> myTP = getTuple();
	//cout<< std::get<0>(myTP)<<endl;//a
	//cout<< std::get<1>(myTP)<<endl;//d
	
	/// <summary>
	/// �˾Ƽ� �߸��ؼ� �޾ƿ���
	/// </summary>
	/// <returns></returns>
	auto [i, d] = getTuple();
	cout << i << endl;
	cout << d<< endl;


	return 0;
}