#include <iostream>
using namespace std;
void print(int x = 0, int y = 10, int z = 100);
//�Ű����� �⺻��
//���𿡼� �⺻�� �־����� ���ǿ����� �⺻�� �� 
// �ִ°� ����.
//���� �⺻�� �����ϴ� �� ����.
// ����Ʈ�� �ϳ��� �Ű��������� �ִ´ٰų� ����.
void print(int x ,int y , int z ) {
	cout << x <<" " <<y << " "<<z<<endl;
}
int main_�Ű������ʱ�ȭ() {
	print();//0
	print(100);//100 10 100
	print(100, 200);//100 200 100
	print(100, 200,300);//100 200 300
	return 0;
}