#include <iostream>

class Counter {
private:
    int value;

public:
    Counter(int v = 0) : value(v) {}

    // 전위 증가 연산자 오버로딩 (멤버 함수)
    Counter& operator++() {
        ++value;
        return *this;
    }

    // 후위 증가 연산자 오버로딩 (멤버 함수)
    Counter operator++(int) {
        Counter temp = *this;
        ++value;
        return temp;
    }

    int getValue() const {
        return value;
    }
};

int main_단항() {
    Counter c(5);

    std::cout << "Initial value: " << c.getValue() << std::endl;

    ++c; // 전위 증가 연산자 호출
    std::cout << "After prefix increment: " << c.getValue() << std::endl;

    c++; // 후위 증가 연산자 호출
    std::cout << "After postfix increment: " << c.getValue() << std::endl;

    return 0;
}
