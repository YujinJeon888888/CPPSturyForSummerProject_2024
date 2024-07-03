#include <iostream>
#include <vector>
///�߿��Ѱ�. ������
//C++������ ���� ����
//C++������ �Լ� ���ڷ� ��ü�� ������ �� �⺻������** ���翡 ���� ����(pass by value)** �� �Ͼ�ϴ�.
//** ������ ���� ����(pass by reference)** �� ����Ϸ��� C++������** ������(reference)** �� ����ؾ� �մϴ�.
//
//Java������ ���� ����
//Java�� ��ü�� �ٷ� �� "�׻�" ������ ���� ���� ����� ����մϴ�.�̴� ��ü ��ü�� �ƴ� * *����(reference) * *�� �Լ��� ���޵Ǿ� ��ü�� �����մϴ�.
//
//���
//C++������ �⺻������ ��ü�� �����Ͽ� �����ϴ� pass by value�� �Ͼ�Ƿ� ���ɻ��� ������ �ʿ��� ���� ������ ���� ������ ����մϴ�.�ݸ� Java�� ��ü�� �ٷ� �� �׻� ������ ���� ������ �ϹǷ� ��ü�� �Լ��� ������ �� ���� ������ �����ϴ�.

using namespace std;
//���� �����, ���ڸ� �� &�� ����. �ٵ� �� �ǵ帮�� ������ const ����

/// <summary>
/// �������� ȣ�⿡���� �Լ� �ȿ��� ���Ӱ� ������ ����  & ����
/// vs
/// ������ ���� ����: ���� ��ü�� �ѱ�. �ּҵ� �Ȱ��� ���簡 �̷�����x
/// </summary>
/// <param name="y"></param>
void addOne(int& y) {
	y++;
	cout << &y << endl;//00B3FC3C
}
//static Ű���带 ����Ͽ� ����� ������ �Լ� ��� �ȿ� �ִ��� �Լ� ȣ���� ������ �Լ��� ��ȯ�� �Ŀ��� ���α׷��� ����� ������ �޸𸮿� ���� �ֽ��ϴ�.
//static ������ ����� ����(scope) �������� ������ �� �ֽ��ϴ�.  ���� ��� �ܿ��� ������ �Ұ��ϳ� �޸𸮿��� ��� ��������
//���ڴ� �Է��� �տ��ΰ� ������� ���� ���� �ڷ� ���°� �Ϲ����̴�.
void getSinCos(const double &degree, double& sinOut, double& cosOut) {
	//degree: ������ �ٲ���x	
	static const double pi = 3.141592; //�̷��� �Լ��ȿ��� �Ź� ���� ���ǵǴ°� �ƴ϶� ������ ��.
	const double radians = degree * pi / 180.0;
	sinOut = sin(radians);
	cosOut = cos(radians);
	
	
}

void foo(int& x) {
	cout << x << endl;
}

void printVector(vector<int> vec) {
	cout << " �Լ� �� �Ű����� �ּ�: " << &vec << endl;
	vec[2] = 1;
	for (int value : vec) {
		cout << value << " ";
	}
	cout << endl;
}

void printRefVector(vector<int> &vec) {
	cout << " �Լ��� �����Ű����� �ּ�: " << &vec << endl;//������ �ּ� ����.

	vec[2] = 1;
	
	for (int value : vec) {
		cout << value << " ";
	}
	cout << endl;
}


int main_�����μ�����() {
	int y = 2;

	cout << y<<" "<<&y<<endl;//2. 00B3FC3C
	addOne(y);
	cout << y<<" "<<&y<<endl;//3. 00B3FC3C
	
	double sin(0.0);
	double cos(0.0);

	getSinCos(30.0, sin, cos);
	cout << sin << " " << cos << endl;

	//�ȵȴ�. �Ű�����: ��������. ���������� ������ �����Ϸ� �õ��� �� �����ϱ�. (6�� ����ε�)
	//foo(6);
	
	vector<int> vector = { 1,2,3,4 };
	cout << " ���� �Ű����� �ּ�: " << &vector << endl;//�Լ� �� �Ű����� �ּҿ� �ٸ���.

	//���� �� �ٲ��.
	printVector(vector);//1,2,1,4
	for (int value : vector) {//1,2,3,4
		cout << value << " ";
	}
	cout << endl;
	//���� �ٲٷ���: ��������������
	printRefVector(vector);//1,2,1,4
	for (int value : vector) {//1,2,1,4
		cout << value << " ";
	}
	cout << endl;
	
	return 0;	
}