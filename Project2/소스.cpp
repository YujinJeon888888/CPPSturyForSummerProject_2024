#include <iostream>

int main() {
	using namespace std;
	//주의사항: 소수끼리의 비교
	double d1(100 - 99.99);//0.001
	double d2(10 - 9.99);//0.001

	cout << "원래의 컴퓨터" << endl;
	if (d1 == d2)
		cout << "equal" << endl;
	else
		cout << "not equle" << endl;//이렇게나온다. 
	//아주 미세하게 작은 차이가 나기 때문.

	cout << "코드로 허용한 버전" << endl;
	const double epsilon = 1e-10;//이럴때의 해결 방법

	if (std::abs(d1 - d2) < epsilon)
		cout << "대략 같음" << endl;
	else {
		cout << "다름" << endl;
	}
	return 0;
}