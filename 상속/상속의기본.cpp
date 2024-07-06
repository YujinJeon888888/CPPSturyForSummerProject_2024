#include <iostream>
using namespace std;

class mother {
protected://자기자신, 자식에게만 열어둠
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
//상속

class child : public mother {//derived class
private :
	double m_d;
public:
	child() {
		//child::mother면 mother생성자가 먼저 호출되어야 한다.

		m_d = 3.14;
	}
	//이름이 겹치는데 이러면 어떻게될까? 
	//자기클래스에 있는 걸 우선으로 부른다
	void setValue(const double& d) {
		m_d = d;
	}
	void setValue(const int& i_in,const double& d) {
		//부모 클래스에 있는 걸 가져오는 법
		mother::m_i = i_in;//1. protected
		
		//2. private면 ? Mother::setValue(i_in);
		
		m_d = d;
	}
	double getValue() {
		return m_d;
	}
};

class daughter : public mother {

};

int main_상속의기본() {
	child child;
	child.setValue(123);
	
	cout << child.getValue() << endl;
	return 0;
}

