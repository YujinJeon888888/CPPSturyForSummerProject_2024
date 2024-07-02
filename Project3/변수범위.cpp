#include <iostream>
using namespace std;

void doSomething() {
	int a = 1;
	++a;
	cout << a << endl;
}
void doSomethingStatic() {
	static int a = 1;
	++a;
	cout << a << endl;
}

int a = 1;//�������� �� ���� �� ����. �̸� ���� �� g �±� �޾��ִ� �� ����.
void doSomethingGlobal() {
	++a;
	cout << a << endl;
}


int value = 123;

int main_��������() {
	cout << value << endl;//123
	//�� ���� �ȿ����� value�� �� ���  main ���� value�� ���δ�. (�̸� �����)
	int value = 1;
	cout << ::value << endl;//123. :: ���� �����ڸ� ����, �ٸ� ������ ������ ������ ����
	cout << value << endl;//1

	//////////////////////////
	//�������.
	doSomething();//2
	doSomething();//2

	//static
	doSomethingStatic();//2
	doSomethingStatic();//3
	doSomethingStatic();//4
	doSomethingStatic();//5

	//��������
	doSomethingGlobal();//2
	doSomethingGlobal();//3
	doSomethingGlobal();//4
	doSomethingGlobal();//5


	//������ static�� ���̴�? 
	//static: �ܾ��� �� == a�� os�κ��� ���� �޸𸮰� static�̶�� ��
	//���ú���: �ݳ��� �� �޸𸮸� os�� �ٽ� �޾ƿ�
	//static: ����ƽ������ �ʱ�ȭ�� 1���� �Ѵ�. ��, �ʱ�ȭ�� �ݵ�� �־�� ��.
	//static�� �޸� �Ҵ����: data���� == ���α׷��� ����� ������ �����ȴ�.
	//static: Ŭ���������� ��� ��ü�� �����ϴ� ��
	//* vs heap: heap�� �����Ҵ�����̸� ���α׷��� ����� �� ��ü. 
	//* C++���� Java�� ������ �÷���(Garbage Collector)�� ���� �ڵ� �޸� ���� ����� �⺻������ �����ϴ�. �̴� ���α׷��Ӱ� �������� �Ҵ��� �޸𸮸� ��������� �����ؾ� �Ѵٴ� ���� �ǹ��մϴ�. 
	//�޸� �������� �����ϴ� �� ���ϴ�. 
	//static vs global : static�� ���������� �ٸ������� ���ٺҰ�. �۷ι��� ���ٰ���
	//////////////////////////
	//linkage
	//local variable �� �ٸ� ���ϰ� ���� �� ���� �����ϱ� ��ŷ�̾ȵ�.(�� cpp�ȿ����� ���̴� �����ϱ�)
	//global�� �ٸ�  cpp������ ��밡��: external linkage
	//cpp�� include�ؼ� ���� ���� �幰��. 
	//�׷� ���? 
	//	forward declaration: extern
	//	������Ʈ cpp ��򰡿� �� ��ü�� �����Ѵٴ� �� 
	
	/*
	Forward Declaration
Forward declaration�� �Լ��� Ŭ������ ���Ǹ� ������ �����ϱ� ���� �ش� �Լ��� Ŭ������ ���縦 �����Ϸ��� �˸��� ����Դϴ�. �̴� �ַ� ��� ���� ���� ��ȯ ���Ӽ��� ���ϰų� ���� ���� ���� �������� ���̴� �� ���˴ϴ�.

Forward Declaration ����:

cpp
�ڵ� ����
// Forward declaration
class MyClass;

void useMyClass(MyClass* ptr);
�̷��� forward declaration�� �����Ϸ����� MyClass��� �̸��� Ŭ������ �������� �˸�����, ������ �� Ŭ������ ������ �� �ʿ�� ������ �ǹ��մϴ�.

extern Ű����
extern Ű����� ������ �ٸ� ���Ͽ��� ���ǵǾ� ������ ��Ÿ���� �� ���˴ϴ�. �̴� ���� ������ �Լ��� ���� ���Ͽ��� ������ �� �ֵ��� �մϴ�.

Extern ����:

globals.h:

cpp
�ڵ� ����
#ifndef GLOBALS_H
#define GLOBALS_H

extern int globalVariable;

#endif // GLOBALS_H
globals.cpp:

cpp
�ڵ� ����
#include "globals.h"

int globalVariable = 10;
main.cpp:

cpp
�ڵ� ����
#include <iostream>
#include "globals.h"

int main() {
    std::cout << "Global Variable: " << globalVariable << std::endl;
    return 0;
}
�� �������� globals.h�� globalVariable ������ �ٸ� ���Ͽ��� ���ǵǾ� ������ ��Ÿ����, globals.cpp������ ������ �� ������ �����մϴ�. �̸� ���� main.cpp���� globalVariable�� ����� �� �ֽ��ϴ�.
	
	*/
	//extern �� �ָ� ���� ȣ�� �� ���� �޸� ���� -> �޸� ����. //include�ϸ� ��� �޸𸮰����� ���λ���
	

	/// <summary>
	/// extern Ű����� ������ �ٸ� ���Ͽ� ���ǵǾ� ������ �����Ϸ����� �˸��ϴ�. �̴� �ش� ������ �����ϴ� ��� ������ ������ �޸� ��ġ�� ����Ű���� �մϴ�. ���������, ���α׷��� ��� �κ��� ���� �޸� ������ �����ϰ� �Ǿ� �޸� ����� ȿ�����Դϴ�.
	/// 
	/// ��� ������ #include�ϴ� ���� �ڵ��� ���뼺�� ���̴� ���������, ������ ��� ���Ͽ� ���� �����ϴ� ��� ������ ����ų �� �ֽ��ϴ�. ��� ������ ���� �� ���ԵǸ�, ������ ���Ե� ��ġ���� ������ ���� ���ǵǹǷ� �޸� ������ �ߺ����� �Ҵ�˴ϴ�.
	/// </summary>
	/// <returns></returns>

//	����
//		globals.cpp:
//
//	cpp
//		�ڵ� ����
//		int globalVariable = 10; // ���� ���� ����
//	main.cpp:
//
//	cpp
//		�ڵ� ����
//#include <iostream>
//
//		// extern Ű���带 ����Ͽ� globals.cpp�� ���ǵ� ���� ������ ����
//		extern int globalVariable;
//
//	int main() {
//		std::cout << "Global Variable in main.cpp: " << globalVariable << std::endl;
//		globalVariable = 20; // ���� �� ����
//		std::cout << "Global Variable in main.cpp after change: " << globalVariable << std::endl;
//		return 0;
//	}
	return 0;
}