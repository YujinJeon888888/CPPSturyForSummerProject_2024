#pragma once
#include <iostream>

class Calc {
private:
    int a;
    int b;

public:
    // �⺻ ������
    Calc();

    // �Ű������� �ִ� ������
    Calc(int a, int b);

    // �� ������ ���ϴ� �Լ�
    int add(const int& num1, const int& num2);
    // �� ���� ��
    int sub(const int& num1, const int& num2);

    //get set
    int getA();
    int getB();
    void setA(int a);
    void setB(int b);
    
};
