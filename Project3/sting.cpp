#include <iostream>
#include <string>
#include <limits>
int main_STRING() {
	using namespace std;
	/// <summary>
	/// string 
	/// </summary>
	/// <returns></returns>

	//"Hello, World": 12�������� ũ��� 13. (�� ��: ��)
	//�ڷ��� ���� �� �ʷϻ�? : ����� ���� �ڷ���
	const string myHello = "Hello, World";
	cout << myHello << endl;

	cout << "Your name: " << endl;
	string name; 
	//cin >> name;//name�Է��� �� �������� �� ���۳��Ƽ� age�Է� ��ŵ�ȴ�. ������ �������� �Է� �����ϱ� ����. 
	std::getline(std::cin, name);//���
	cout << "Your age: " << endl;
	string age;
	//cin >> age;
	std::getline(std::cin, age);
	cout << name << " " << age << endl;

	cout << "your age? " << endl;
	
	cin >> age;
	//���� ���ۿ� ���´�.
	//�ذ���: 
	cin.clear();//���ۺ�� 
	cin >> name;
	cout << name;



	return 0;
}