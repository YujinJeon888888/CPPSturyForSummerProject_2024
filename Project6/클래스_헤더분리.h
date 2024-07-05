#pragma once
#include <iostream>

class Calc {
private:
    int a;
    int b;

public:
    // 기본 생성자
    Calc();

    // 매개변수가 있는 생성자
    Calc(int a, int b);

    // 두 정수를 더하는 함수
    int add(const int& num1, const int& num2);
    // 두 수의 차
    int sub(const int& num1, const int& num2);

    //get set
    int getA();
    int getB();
    void setA(int a);
    void setB(int b);
    
};
