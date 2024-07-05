#include "Ŭ����_����и�.h"

// �⺻ ������

inline Calc::Calc() {
    a = 1;
    b = 2;
}

// �Ű������� �ִ� ������

inline Calc::Calc(int a, int b) {
    (*this).a = a;
    (*this).b = b;
}

// �� ������ ���ϴ� �Լ�

inline int Calc::add(const int& num1, const int& num2) {
    return num1 + num2;
}

// �� ���� ��

inline int Calc::sub(const int& num1, const int& num2) {
    return (num1 > num2) ? num1 - num2 : num2 - num1;
}

//get set

inline int Calc::getA() {
    return a;
}

inline int Calc::getB() {
    return b;
}

inline void Calc::setA(int a) {
    (*this).a = a;
}

inline void Calc::setB(int b) {
    (*this).b = b;
}
