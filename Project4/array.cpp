#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

//const: 수정을 막음
//매개변수로 전달시 무조건 새 변수가 생김. 그냥 쓰는것과 &쓰는것의 차이: 참조로 보내느냐 복사로 보내느냐. &로 참조로 넘김.
void printLength(const array<int, 5>& myArr) {
	cout << myArr.size() << endl;
}
int main_ARR() {
	//크기를 지정해줘야한다.
	array<int, 5> myArr = {1,2,3,4,5};
	myArr = {0,1,2,3,4};
	myArr = { 0 };

	//일단 접근한다.
	//cout << myArr[10] << endl;
	
	//미리 체크하고 문제생기면 예외처리 발동. 속도가 더 느림
	//cout << myArr.at(10) << endl;
	printLength(myArr);
	cout << myArr.size() << endl;

	for (const auto element : myArr)
	{
		cout << element << " ";
	}
	cout << endl;
	myArr = { 10,1,22,33,4 };
	
	std::sort(myArr.begin(), myArr.end());

	for (const auto element : myArr)
	{
		cout << element << " ";
	}
	cout << endl;

	//내림차순
	std::sort(myArr.rbegin(), myArr.rend());

	for (const auto element : myArr)
	{
		cout << element << " ";
	}
	cout << endl;

	return 0;
}