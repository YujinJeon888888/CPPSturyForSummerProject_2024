#include <iostream>
using namespace std;
#include <string>
class Fraction {
private:
	int m_numerator;
	int m_denominator;

public:
	void print() {
		cout << m_numerator << " / " << m_denominator << endl;
	}

public: //리턴형 없고 클래스명으로 함수 만들면 그게 생성자.
	//이러면 객체가 선언됨과 동시에 생성자가 호출된다.(인자없을경우)
	Fraction() {
		m_numerator = 0;
		m_denominator = 1;
	}
};

class Student {
private:
	int id;
	string name;

public:
	void print() {
		cout << id + " " + name << endl;
	}
public:
	Student(const int& id, const string& name)
	: id(id), name(name) 
	{

		cout << "Constructor " << id << endl;
	}
	~Student() {
		cout << "Destructor " << id << endl;//객체해체. 스택처럼 해체됨
	}
};

int main_생성자() {
	Fraction frac;
	//Fraction frac();생성자 호출 이렇게 안된다. 함수랑 헷갈려서 C++에서 막음
	
	frac.print();//명시적 생성자 없으면 디폴트생성자 생성되는데, 쓰레기값들어감.
	//명시적 생성자가 있는데 그게 인자가 있는 생성자면 인자없이 객체생성하려 할 시 : 디폴트생성자 호출이 안됨 -> 컴파일에러
	//하나라도 생성자를 만들면 디폴트생성자가 생성이 안 된다. 
	
	//대안: 
	//0. 객체생성시 값 대입 //{};로 . ()보단 {}를 선호함. {}가 더 엄격하게잡음(인자넣을 때 ()는 타입변환되는데 {}는 안 됨)
	//1. 클래스내에서 변수의 초기값 넣기
	//2. 생성자


	//destructor. 소멸자는 기본소멸자 자동호출되므로 프로그래머가 직접 지정 안 하는 거 권장
	//그러나 delete로 해체하기 까다로울 때 destructor 쓴다.

	//소멸자는 객체가 파괴될 때 자동으로 호출되는 특별한 멤버 함수로, 다음과 같은 상황에서 호출됩니다:
	//스코프를 벗어날 때:
	//delete 연산자로 메모리 해제할 때:
	//
	Student s1{1,"A"};
	Student s2{2,"B"};


	/// <summary>
	/// 객체 해체
	/// </summary>
	/// <returns></returns>
	//객체 생성 방식
	//	스택 할당 객체(Automatic Storage Duration) :
	//	new를 사용하지 않고, 함수 내에서 지역 변수로 선언된 객체는 스택 메모리에 할당됩니다.
	//	이러한 객체는 스코프를 벗어나면 자동으로 해제됩니다.
	//힙 할당 객체(Dynamic Storage Duration) :
	//	new를 사용하여 동적으로 생성된 객체는 힙 메모리에 할당됩니다.
	//	이러한 객체는 delete를 사용하여 명시적으로 해제해야 합니다.
	
	return 0;
}