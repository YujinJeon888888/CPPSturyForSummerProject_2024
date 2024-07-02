#include <iostream>
enum Color {//사용자 정의 자료형
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

	//실수방지 &  편하게
	return 0;
}

int main_ENUM() {
	using namespace std;
	
	Color color(Color::COLOR_BLUE);
	Color paint(Color::COLOR_BLACK);
	Feeling feeling(Feeling::HAPPY);

	if (feeling == paint)
		//같다고 나와버린다.
		cout << "같" << endl;

	if (color == paint)
		//그러니 같은 타입끼리 비교하자. 
		cout << "same color" << endl;



	return 0;
}