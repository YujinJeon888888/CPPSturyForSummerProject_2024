#include <iostream>
//����
#include <random>
using namespace std;

// ���� ������ ���� �Լ� ����
int GenerateRandomNumber(int min, int max) {
    // ���� ���� ���� �ʱ�ȭ
    std::random_device rd;//�õ�
    std::mt19937 gen(rd());//��������
    std::uniform_int_distribution<> dis(min, max);//1)Ư�� ���� ������ ������ �����ϱ� ����, 2)���� ���� ���� ( Mersenne Twister �˰����� ���) 

    // ���� ���� �� ��ȯ
    return dis(gen);
}

int main_����() {

	//����: return , exit < - exix�� ���������� ����.

	//���� �����
	//�õ尡 �����Ǹ� ���� �����̻���� - > �õ忡 ��ȭ����Ѵ�.
    int min = 10;
    int max = 50;
    // ���� ���� �� ���
    int randomNumber = GenerateRandomNumber(min, max);
    std::cout << "Generated random number between " << min << " and " << max << ": " << randomNumber << '\n';

	return 0;
}