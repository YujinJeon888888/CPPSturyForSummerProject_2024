#include <iostream>
using namespace std; 
/// <summary>
/// ���ڰ� �ٸ��� �����ε�.(������, ������, Ÿ���̵�)
/// </summary>
/// <param name="x"></param>
/// <param name="y"></param>
/// <returns></returns
/// ��ȯ���� �ٸ� ���� �����ε��� �����ϴ� ��Ұ� �ƴմϴ�. ���� ��ȯ���� �ٸ� �Լ��� ���� �̸����� �����ϴ� ���� ������ �ʽ��ϴ�.
auto add(int x, int y) {
	return x + y;
}
auto add(double x, double y) {
	return x + y;
}
auto add(float x, float y) {
	return x + y;
}

void _print(char value) {

}
void _print(int value) {

}

int main_�����ε�() {
	cout << add(3, 4) << endl;
	
	_print(0);
	_print('a');
	
	
	
	return 0;
}