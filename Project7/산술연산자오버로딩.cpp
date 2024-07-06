#include <iostream>

class Number {
private:
    int value;

public:
    // 생성자
    Number(int v = 0) : value(v) {}

    // 연산자 오버로딩: 덧셈
    //멤버 함수 뒤에 const를 붙이는 것은 해당 함수가 멤버 변수를 변경하지 않는다는 것을 의미합니다. 매개변수를 const로 지정하는 것과는 다른 개념입니다.
    Number operator + (const Number& other) const {
        return Number(value + other.value);
    }

    // 값을 반환하는 함수
    int getValue() const {
        return value;
    }
};

int main_산술연산자오버로딩() {
    Number num1(10);
    Number num2(20);

    Number num3 = num1 + num2;

    std::cout << "num1: " << num1.getValue() << std::endl;
    std::cout << "num2: " << num2.getValue() << std::endl;
    std::cout << "num1 + num2: " << num3.getValue() << std::endl;

    return 0;
}
