#include <iostream>
#include <vector>
///중요한거. 읽으셈
//C++에서의 참조 전달
//C++에서는 함수 인자로 객체를 전달할 때 기본적으로** 복사에 의한 전달(pass by value)** 이 일어납니다.
//** 참조에 의한 전달(pass by reference)** 을 사용하려면 C++에서는** 참조자(reference)** 를 사용해야 합니다.
//
//Java에서의 참조 전달
//Java는 객체를 다룰 때 "항상" 참조에 의한 전달 방식을 사용합니다.이는 객체 자체가 아닌 * *참조(reference) * *가 함수로 전달되어 객체를 공유합니다.
//
//결론
//C++에서는 기본적으로 객체를 복사하여 전달하는 pass by value가 일어나므로 성능상의 이점이 필요할 때만 참조에 의한 전달을 사용합니다.반면 Java는 객체를 다룰 시 항상 참조에 의한 전달을 하므로 객체를 함수로 전달할 때 복사 과정이 없습니다.

using namespace std;
//요즘 방식은, 인자를 다 &로 받음. 근데 안 건드리고 싶으면 const 박음

/// <summary>
/// 값에의한 호출에서는 함수 안에서 새롭게 변수를 정의  & 복사
/// vs
/// 참조에 의한 전달: 변수 자체를 넘김. 주소도 똑같고 복사가 이뤄지지x
/// </summary>
/// <param name="y"></param>
void addOne(int& y) {
	y++;
	cout << &y << endl;//00B3FC3C
}
//static 키워드를 사용하여 선언된 변수는 함수 블록 안에 있더라도 함수 호출이 끝나고 함수가 반환된 후에도 프로그램이 종료될 때까지 메모리에 남아 있습니다.
//static 변수는 선언된 범위(scope) 내에서만 접근할 수 있습니다.  따라서 블록 외에서 접근은 불가하나 메모리에는 계속 남아있음
//인자는 입력을 앞에두고 출력으로 나갈 것을 뒤로 빼는게 일반적이다.
void getSinCos(const double &degree, double& sinOut, double& cosOut) {
	//degree: 원본이 바뀌지x	
	static const double pi = 3.141592; //이러면 함수안에서 매번 새로 정의되는게 아니라 재사용이 됨.
	const double radians = degree * pi / 180.0;
	sinOut = sin(radians);
	cosOut = cos(radians);
	
	
}

void foo(int& x) {
	cout << x << endl;
}

void printVector(vector<int> vec) {
	cout << " 함수 속 매개변수 주소: " << &vec << endl;
	vec[2] = 1;
	for (int value : vec) {
		cout << value << " ";
	}
	cout << endl;
}

void printRefVector(vector<int> &vec) {
	cout << " 함수속 참조매개변수 주소: " << &vec << endl;//원본과 주소 같다.

	vec[2] = 1;
	
	for (int value : vec) {
		cout << value << " ";
	}
	cout << endl;
}


int main_참조인수전달() {
	int y = 2;

	cout << y<<" "<<&y<<endl;//2. 00B3FC3C
	addOne(y);
	cout << y<<" "<<&y<<endl;//3. 00B3FC3C
	
	double sin(0.0);
	double cos(0.0);

	getSinCos(30.0, sin, cos);
	cout << sin << " " << cos << endl;

	//안된다. 매개변수: 참조변수. 참조변수가 원본을 변경하려 시도할 수 있으니까. (6은 상수인데)
	//foo(6);
	
	vector<int> vector = { 1,2,3,4 };
	cout << " 원본 매개변수 주소: " << &vector << endl;//함수 속 매개변수 주소와 다르다.

	//원본 안 바뀐다.
	printVector(vector);//1,2,1,4
	for (int value : vector) {//1,2,3,4
		cout << value << " ";
	}
	cout << endl;
	//원본 바꾸려면: 참조에의한전달
	printRefVector(vector);//1,2,1,4
	for (int value : vector) {//1,2,1,4
		cout << value << " ";
	}
	cout << endl;
	
	return 0;	
}