#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

//const: ������ ����
//�Ű������� ���޽� ������ �� ������ ����. �׳� ���°Ͱ� &���°��� ����: ������ �������� ����� ��������. &�� ������ �ѱ�.
void printLength(const array<int, 5>& myArr) {
	cout << myArr.size() << endl;
}
int main_ARR() {
	//ũ�⸦ ����������Ѵ�.
	array<int, 5> myArr = {1,2,3,4,5};
	myArr = {0,1,2,3,4};
	myArr = { 0 };

	//�ϴ� �����Ѵ�.
	//cout << myArr[10] << endl;
	
	//�̸� üũ�ϰ� ��������� ����ó�� �ߵ�. �ӵ��� �� ����
	//cout << myArr.at(10) << endl;
	printLength(myArr);
	cout << myArr.size() << endl;

	for (const auto element : myArr)
	{
		cout << element << " ";
	}
	cout << endl;
	myArr = { 10,1,22,33,4 };
	
	std::sort(myArr.begin(), myArr.end());

	for (const auto element : myArr)
	{
		cout << element << " ";
	}
	cout << endl;

	//��������
	std::sort(myArr.rbegin(), myArr.rend());

	for (const auto element : myArr)
	{
		cout << element << " ";
	}
	cout << endl;

	return 0;
}