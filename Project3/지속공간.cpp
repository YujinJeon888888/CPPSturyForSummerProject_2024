#include <iostream>
namespace work1
{
	int a = 1;
	namespace work11 {//��ø�� ���� ���� �� ����. �ִ� 2��
		int a = 11;
	}
}

namespace work2 {
	int a = 2;

	void doSomething() {
		a += 2 ;
	}
}

int main_���Ӱ���() {
	using namespace std;
	cout << work2::a << '\n';
	cout<<work1::a<<'\n';
	work2::doSomething();
	cout << work2::a << '\n';
	cout << work1::work11::a << '\n';
	return 0;
}