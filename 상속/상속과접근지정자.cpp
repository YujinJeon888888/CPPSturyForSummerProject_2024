#include <iostream>
using namespace std;

class Base {
public: 
	int m_public;
protected: // ��ӵ� �ֵ鸸 ���ٰ���
	int m_protected;
private:
	int m_private;
};
//private�� ���ƹ����ٴ� �Ŵ� , ��ӹ����������� ���� �Ұ����ϴٴ� ��( Derived�ȿ����� Base���ٰ���)
class Derived1 : private Base {
public :
	Derived1() {
		m_public;//�ȴ�
		m_protected;//�ȴ�.
		//m_private;//�ȵȴ�.
	}
	
};

class GrandChild : public Derived1 {
public:
	GrandChild() {
		//�ȵȴ�.
		//m_public;
		// �ȵȴ�.
		//m_protected;
	}
};

int main_����������() {
	Base base;

	//����
	base.m_public=1234;
	//�ȵ�
	//base.m_protected;
	//�ȵ�
	//base.m_private;
	
	Derived1 derived;
	//�ȵ�. ����� �� protected�� ��������ϱ�
	//derived.m_public;
	
	return 0;
}