#include <iostream>
using namespace std;
//�⺻ ���������� : private: �ش� Ŭ���� �ȿ����� �ش� Ŭ���� ��� ���ٰ���. ���� �������� ����. ������ �� ��.
//��ȸ�� ����: get, set.
//�κкκ� ���������� �ٸ��� 
//public: Ŭ���� ���� ������� �ۿ����� ���� �����ϰ�. 
//protected: 


class Date {
private: 
	int month;
	int day;
	int year;

public:
	void setDate(const int& month_input, const int& day_input, const int & year_input) {
		month = month_input;
		day = day_input;
		year = year_input;
	}

	void setMonth(const int& month_input) {
		month = month_input;
	}
	int getMonth() {
		return month;
	}
};
/// <summary>
/// �� private? 
/// �������� ������. 
/// ���ľ��� �� ���� �� �� Ŭ���� ������ �ذ��ϸ� �ż� ����
/// </summary>
/// <returns></returns>

int main_����������() {
	

	return 0;
}