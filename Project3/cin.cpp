#include <iostream>

int main() {
	using namespace std;
	
	int i;
	
	
	while (true) {
		cout << "���� �Է��ϼ���: ";
		cin >> i;
		if (cin.fail()) {//�Է½��н�
			cin.clear();//�Է»����ʱ�ȭ. ���ۺ��� ������ �ƴ�. ���� ���� �÷��� �ʱ�ȭ: �Է� ��Ʈ���� failbit�� badbit ���¿� ���� ��, cin.clear()�� ȣ���ϸ� �̷��� ���� ���� �÷��׸� �ʱ�ȭ�Ͽ� ��Ʈ���� �ٽ� �������� ����(goodbit)�� ����ϴ�.
			cin.ignore(numeric_limits<streamsize>::max(), '\n');//�ٹٲ� ���ڱ��� �Է� ���۸� ���ڴٴ� ���Դϴ�. ��, ���� �Է� ���ۿ� �����ִ� ��� ���ڸ� �����Ͽ� ���� �Է��� ���� �غ� �մϴ�
			cout << "�ٽ� �Է��ϼ���.\n";
			continue;
		}
		else {
			cout << "���������� �Է¹޾ҽ��ϴ�.\n";
			break;
		}
	}
	cout << "���: " << i << endl;

	return 0;
}