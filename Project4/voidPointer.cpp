#include <iostream>
using namespace std;

int main_���̵�������() {
	int i = 5;
	float f = 3.0f;
	char c = 'a';
	//. � Ÿ���� �����͵� ����ų �� ������, �����͸� �������Ͽ� ���� �аų� �� ���� ������ Ÿ������ ĳ�����ؾ� �մϴ�.
	void* ptr = nullptr;

	ptr = &i;
	ptr = &f;
	ptr = &c;

	//voidŸ���̱⶧���� ������ �� �ȴ�. int�� +4����Ʈ, char�̸� +1����Ʈ �� �� �ִµ� void�� ��ǻ�Ͱ� ��.
	//cout << ptr + 1 << endl;
	//cout << *ptr << endl; �̰͵� �𸥴�. void�����Ͱ� ����Ű�� �������� ũ��� Ÿ���� �� �� ���� ������

	//�̷��� Ÿ���� ����������Ѵ�.
	cout << *static_cast<float*>(ptr) << endl;
	


	return 0;
}