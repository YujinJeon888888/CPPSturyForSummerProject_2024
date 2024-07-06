#include <iostream>

class Number {
private:
    int value;

public:
    // ������
    Number(int v = 0) : value(v) {}

    // ������ �����ε�: ����
    //��� �Լ� �ڿ� const�� ���̴� ���� �ش� �Լ��� ��� ������ �������� �ʴ´ٴ� ���� �ǹ��մϴ�. �Ű������� const�� �����ϴ� �Ͱ��� �ٸ� �����Դϴ�.
    Number operator + (const Number& other) const {
        return Number(value + other.value);
    }

    // ���� ��ȯ�ϴ� �Լ�
    int getValue() const {
        return value;
    }
};

int main_��������ڿ����ε�() {
    Number num1(10);
    Number num2(20);

    Number num3 = num1 + num2;

    std::cout << "num1: " << num1.getValue() << std::endl;
    std::cout << "num2: " << num2.getValue() << std::endl;
    std::cout << "num1 + num2: " << num3.getValue() << std::endl;

    return 0;
}
