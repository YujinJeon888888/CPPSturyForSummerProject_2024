#include <iostream>
enum Color {//����� ���� �ڷ���
	COLOR_BLACK,
	COLOR_RED,
	COLOR_BLUE,
	COLOR_GREEN
};

enum Feeling {
	HAPPY,
	BLUE
};
int ComputeDamage(int weaponID) {
	/*if (weaponID == 0) {
		return 1;
	}
	if (weaponID == 1) {
		return 2;
	}*/

	//�Ǽ����� &  ���ϰ�
	return 0;
}

int main_ENUM() {
	using namespace std;
	
	Color color(Color::COLOR_BLUE);
	Color paint(Color::COLOR_BLACK);
	Feeling feeling(Feeling::HAPPY);

	if (feeling == paint)
		//���ٰ� ���͹�����.
		cout << "��" << endl;

	if (color == paint)
		//�׷��� ���� Ÿ�Գ��� ������. 
		cout << "same color" << endl;



	return 0;
}