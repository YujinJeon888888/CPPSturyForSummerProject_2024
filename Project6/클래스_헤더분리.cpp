#include "클래스_헤더분리.h"

// 기본 생성자

inline Calc::Calc() {
    a = 1;
    b = 2;
}

// 매개변수가 있는 생성자

inline Calc::Calc(int a, int b) {
    (*this).a = a;
    (*this).b = b;
}

// 두 정수를 더하는 함수

inline int Calc::add(const int& num1, const int& num2) {
    return num1 + num2;
}

// 두 수의 차

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
