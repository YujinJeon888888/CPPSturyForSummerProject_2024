#include <iostream>

int main_�⺻�ڷ���() {

	using namespace std;

	bool bValue=true;

	cout << (bValue ? 1 : 0) << endl;//1

	char chValue = 65; //���������� ���ڿ��� ���ڷ� ǥ��

	cout << chValue << endl;//A

	cout << bValue << endl;//1. �ҵ� ���������δ� ���ڷ� �ٲ㼭 �����Ѵٴ� �� �� �� �ִ�.
	cout << !bValue << endl;//0

	//float, double �� �׸� ��������x
	float fValue = 3.141592f;//f. 3.14159
	double dValue = 3.141592;//3.14159

	cout << fValue << endl;
	cout << dValue << endl;

	auto aValue = 3.141592;
	auto aValue2 = 3.141592f;
	cout << aValue << endl;//�˾Ƽ� ����ȯ.  double �ȴ�.
	cout << sizeof(aValue) << endl;
	cout << aValue2 << endl;//�˾Ƽ� ����ȯ.  float �ȴ�.
	cout << sizeof(aValue2) << endl;

	//�ʱ�ȭ���
	//int a = 123;
	//int a(123);
	//int a{ 123 }; //��ü���⿡�� �����ϴ� �ʱ�ȭ���. �� ������ �ʱ�ȭ���-> ������� �� ����.

	//������ ���� ���ÿ� ������
	int k = 1, l=2, m = 3;
	return 0;

	//���������� ��� �ϴ°� ?
	//	������ : ��� ���������� �� ���� �ø���
	//	����� : ����� ������ ����ϱ� ������ ����
	//			�̷��� ����� �ϱ� ���Ƽ�, �����丵�ϱ� ���Ƽ�.
}