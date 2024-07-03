#include <iostream>
#include <vector>

using namespace std;

int main_����() {
	//���͸� �� ���¹�: �����������۵��ϴ� new�� delete�� �ּ������� ȣ���ϵ��� �ϱ�
	std::vector<int> v{1,2,3};
	
	//size: ���뷮���� ���� ��� ����, capacity: ���� ��� �뷮
	//��? �ӵ��� ���ؼ� �̷��� ����� ��
	v.resize(2);//�߸��κ��� 0���� �ڵ����� ä��
	for (auto& e : v) {
		cout << e << " ";
	}
	cout << endl;
	cout <<v.size()<<" " << v.capacity() << endl;//2 3

	//�̸� Ȯ���صθ� ���� �۾��� �ص� ����.
	v.reserve(1024);//�޸� �뷮�� �̸� Ȯ���س��ڴٴ� �ǹ�
	
	
	vector<int> stack;
	//�̸� Ȯ���س����� new deleteȣ���� �ʿ� ������ ȿ�� ����
	stack.reserve(1024);	
	stack.push_back(3);
	stack.push_back(6);
	stack.push_back(7);
	//capacity�� �پ���� �ʰ� size�� �پ��.
	stack.pop_back();
	stack.pop_back();
	stack.pop_back();




	return 0;
}