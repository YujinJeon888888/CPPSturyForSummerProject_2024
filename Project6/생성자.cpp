#include <iostream>
using namespace std;
#include <string>
class Fraction {
private:
	int m_numerator;
	int m_denominator;

public:
	void print() {
		cout << m_numerator << " / " << m_denominator << endl;
	}

public: //������ ���� Ŭ���������� �Լ� ����� �װ� ������.
	//�̷��� ��ü�� ����ʰ� ���ÿ� �����ڰ� ȣ��ȴ�.(���ھ������)
	Fraction() {
		m_numerator = 0;
		m_denominator = 1;
	}
};

class Student {
private:
	int id;
	string name;

public:
	void print() {
		cout << id + " " + name << endl;
	}
public:
	Student(const int& id, const string& name)
	: id(id), name(name) 
	{

		cout << "Constructor " << id << endl;
	}
	~Student() {
		cout << "Destructor " << id << endl;//��ü��ü. ����ó�� ��ü��
	}
};

int main_������() {
	Fraction frac;
	//Fraction frac();������ ȣ�� �̷��� �ȵȴ�. �Լ��� �򰥷��� C++���� ����
	
	frac.print();//����� ������ ������ ����Ʈ������ �����Ǵµ�, �����Ⱚ��.
	//����� �����ڰ� �ִµ� �װ� ���ڰ� �ִ� �����ڸ� ���ھ��� ��ü�����Ϸ� �� �� : ����Ʈ������ ȣ���� �ȵ� -> �����Ͽ���
	//�ϳ��� �����ڸ� ����� ����Ʈ�����ڰ� ������ �� �ȴ�. 
	
	//���: 
	//0. ��ü������ �� ���� //{};�� . ()���� {}�� ��ȣ��. {}�� �� �����ϰ�����(���ڳ��� �� ()�� Ÿ�Ժ�ȯ�Ǵµ� {}�� �� ��)
	//1. Ŭ���������� ������ �ʱⰪ �ֱ�
	//2. ������


	//destructor. �Ҹ��ڴ� �⺻�Ҹ��� �ڵ�ȣ��ǹǷ� ���α׷��Ӱ� ���� ���� �� �ϴ� �� ����
	//�׷��� delete�� ��ü�ϱ� ��ٷο� �� destructor ����.

	//�Ҹ��ڴ� ��ü�� �ı��� �� �ڵ����� ȣ��Ǵ� Ư���� ��� �Լ���, ������ ���� ��Ȳ���� ȣ��˴ϴ�:
	//�������� ��� ��:
	//delete �����ڷ� �޸� ������ ��:
	//
	Student s1{1,"A"};
	Student s2{2,"B"};


	/// <summary>
	/// ��ü ��ü
	/// </summary>
	/// <returns></returns>
	//��ü ���� ���
	//	���� �Ҵ� ��ü(Automatic Storage Duration) :
	//	new�� ������� �ʰ�, �Լ� ������ ���� ������ ����� ��ü�� ���� �޸𸮿� �Ҵ�˴ϴ�.
	//	�̷��� ��ü�� �������� ����� �ڵ����� �����˴ϴ�.
	//�� �Ҵ� ��ü(Dynamic Storage Duration) :
	//	new�� ����Ͽ� �������� ������ ��ü�� �� �޸𸮿� �Ҵ�˴ϴ�.
	//	�̷��� ��ü�� delete�� ����Ͽ� ��������� �����ؾ� �մϴ�.
	
	return 0;
}