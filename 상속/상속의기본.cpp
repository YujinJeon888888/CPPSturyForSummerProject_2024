#include <iostream>
using namespace std;

class mother {
protected://�ڱ��ڽ�, �ڽĿ��Ը� �����
	int m_i;
public:
	mother() {
		m_i = 123;
	}
	mother(const int& i) {
		m_i = i;
	}
	int getValue() {
		return m_i;
	}
	void setValue(const int& i) {
		m_i = i;
	}
};
//���

class child : public mother {//derived class
private :
	double m_d;
public:
	child() {
		//child::mother�� mother�����ڰ� ���� ȣ��Ǿ�� �Ѵ�.

		m_d = 3.14;
	}
	//�̸��� ��ġ�µ� �̷��� ��Եɱ�? 
	//�ڱ�Ŭ������ �ִ� �� �켱���� �θ���
	void setValue(const double& d) {
		m_d = d;
	}
	void setValue(const int& i_in,const double& d) {
		//�θ� Ŭ������ �ִ� �� �������� ��
		mother::m_i = i_in;//1. protected
		
		//2. private�� ? Mother::setValue(i_in);
		
		m_d = d;
	}
	double getValue() {
		return m_d;
	}
};

class daughter : public mother {

};

int main_����Ǳ⺻() {
	child child;
	child.setValue(123);
	
	cout << child.getValue() << endl;
	return 0;
}

