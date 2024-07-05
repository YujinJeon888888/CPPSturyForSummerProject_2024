#include <iostream>
using namespace std;

class Something {
public:
	
	//static int mValue = 1; //static��������� �ʱ�ȭ �� ��.
	//Something::sValue(���������Ƿ� ��ü���������� ���ٰ���), ��ü.sValue ���ٰ���. (��� ��ü�� �����ϴ� ��)
	//�̷��� �������� ��Ÿ�� �ʱ�ȭ ������ ��ġ����, �޸� �ּҴ� ������ Ÿ�ӿ� �����˴ϴ�.
	static int sValue;
	//const�� ���ǰ� �ȴ�.
	//C++������ static const ������(�Ǵ� ������) ��� ������ Ư���� Ŭ���� ���� ���ο��� �ʱ�ȭ�� �� �ֵ��� ����մϴ�. �̴� �����Ϸ��� �̷��� ����� constexpr�� ó���� �� �ֱ� �����Դϴ�. ����� ������� ������, ������ Ÿ�ӿ� �� ���� �� �� �����Ƿ� Ŭ���� ���� ���ο��� �ʱ�ȭ�� �����մϴ�:
	//�̱��濡 ����
	static const int csValue=1;

	static int getValue() {
		return sValue;
		//this�� �� static�ȿ��� �� �ɱ�?
		//��ü�� �����ϱ�. �ڱ��ڽ��� ����Ű�� �������� this �� �� ���°���
	}

	Something() {
		/// <summary>
		/// �Ǳ� �ǳ�, 
		/// 
		/// �����ڿ��� static ��� ������ �ʱ�ȭ�ϴ� ���� �ν��Ͻ� ���� �ø��� ȣ��� �� �־� ���ʿ��� �ʱ�ȭ�� �� ����⸦ �ʷ��� �� �ֽ��ϴ�.
		/// 
		/// ����
		/// 
		/// Ŭ���� �ܺο��� static ��� ������ �ʱ�ȭ�ϴ� ���� �⺻������ ��ȣ�Ǵ� ����Դϴ�. �̴� ���α׷��� ���� �� �� ���� �ʱ�ȭ�Ǹ�, ������̰� �ϰ��� �ʱ�ȭ�� �����մϴ�.
		/// </summary>
		sValue = 1;
	}
};
/// <summary>
/// C++���� static ��� ������ Ŭ���� ���� �ȿ��� ���� �ʱ�ȭ�� �� ���� ������ static ��� ������ Ŭ������ �ν��Ͻ��� ���������� �����ϱ� �����Դϴ�. ��� Ŭ���� �ܺο��� �ʱ�ȭ�ؾ� �մϴ�.
/// static�̴ϱ� �޸𸮿� �������� ����.
/// �޸��Ҵ�������̶���
/// </summary>
int Something::sValue = 1;

int generateID() {
	static int sID = 0;// sID�� �Լ��� ó�� ȣ��� ���� �ʱ�ȭ�ǰ�, ���� ȣ�⿡���� ���� �����մϴ�.
	return ++sID;
}


int main_��() {
	cout << generateID() << endl;//1
	cout << generateID() << endl;//2
	cout << generateID() << endl;//3
	
	Something st1;
	Something st2;
	
	st1.sValue = 2;
	//�����ּ�, ������
	cout << &st1.sValue << " " << st1.sValue << endl;
	cout << &st2.sValue << " " << st2.sValue << endl;
	/// <summary>
	/// �ڹٿ����� Class. ���� static��������ϴµ� C++������ ::�� ����
	/// </summary>
	/// <returns></returns>
	cout << &Something::sValue << endl;
	

	return 0;
}