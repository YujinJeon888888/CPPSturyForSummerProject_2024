#include <iostream>

//������ auto ����
auto add(int x, int y) { //���ڴ� auto�Ұ�. 
	return x + (double)y;
}

//���: ���ø�
//���ø� ���� ���� �� ���ϰ� ������ �� ����

int main_auto() {
	//auto: �ڵ� �� ����
	//�ʱ�ȭ �ʼ�
	auto a = 123;//int�� �ڵ�����

	auto d = 123.0;//double
	
	auto c = 1 + 2.0;//double

	//�̷� �� ���ϴ�. ���ϰ� ���� ��
	auto result = add(1,2);//result: double

	return 0;
}