#include <iostream>
/// <summary>
/// ���߻�� ������, ���̾Ʊ��� ����� ������. 
/// ���� ���ϴ� �� ����.
/// </summary>
class ���� {
public:
	void print() {
		std::cout << "���°���" << std::endl;
	};
};

class �� {
public:
	void print() {
		std::cout << "���»�" << std::endl;
	};
};
//���߻���̵ȴ�.
class �Ҷ� : public ����, public ��{
};

int main() {
	�Ҷ� �Ҷ�;
	//��ȣ�ؼ� ��������
	//�Ҷ�.print();

	//�ذ���
	�Ҷ�.����::print();
	�Ҷ�.��::print();
	
	return 0;
}