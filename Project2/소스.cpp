#include <iostream>

int main() {
	using namespace std;
	//���ǻ���: �Ҽ������� ��
	double d1(100 - 99.99);//0.001
	double d2(10 - 9.99);//0.001

	cout << "������ ��ǻ��" << endl;
	if (d1 == d2)
		cout << "equal" << endl;
	else
		cout << "not equle" << endl;//�̷��Գ��´�. 
	//���� �̼��ϰ� ���� ���̰� ���� ����.

	cout << "�ڵ�� ����� ����" << endl;
	const double epsilon = 1e-10;//�̷����� �ذ� ���

	if (std::abs(d1 - d2) < epsilon)
		cout << "�뷫 ����" << endl;
	else {
		cout << "�ٸ�" << endl;
	}
	return 0;
}