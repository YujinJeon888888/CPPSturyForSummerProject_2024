#include <iostream>
using namespace std;

class Base {
public: 
	int m_public;
protected: // 상속된 애들만 접근가능
	int m_protected;
private:
	int m_private;
};
//private로 막아버린다는 거는 , 상속받은데에서는 접근 불가능하다는 것( Derived안에서만 Base접근가능)
class Derived1 : private Base {
public :
	Derived1() {
		m_public;//된다
		m_protected;//된다.
		//m_private;//안된다.
	}
	
};

class GrandChild : public Derived1 {
public:
	GrandChild() {
		//안된다.
		//m_public;
		// 안된다.
		//m_protected;
	}
};

int main_접근지정자() {
	Base base;

	//ㄱㄴ
	base.m_public=1234;
	//안됨
	//base.m_protected;
	//안됨
	//base.m_private;
	
	Derived1 derived;
	//안됨. 상속할 때 protected로 상속했으니까
	//derived.m_public;
	
	return 0;
}