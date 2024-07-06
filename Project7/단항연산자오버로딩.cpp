#include <iostream>

class Counter {
private:
    int value;

public:
    Counter(int v = 0) : value(v) {}

    // ���� ���� ������ �����ε� (��� �Լ�)
    Counter& operator++() {
        ++value;
        return *this;
    }

    // ���� ���� ������ �����ε� (��� �Լ�)
    Counter operator++(int) {
        Counter temp = *this;
        ++value;
        return temp;
    }

    int getValue() const {
        return value;
    }
};

int main_����() {
    Counter c(5);

    std::cout << "Initial value: " << c.getValue() << std::endl;

    ++c; // ���� ���� ������ ȣ��
    std::cout << "After prefix increment: " << c.getValue() << std::endl;

    c++; // ���� ���� ������ ȣ��
    std::cout << "After postfix increment: " << c.getValue() << std::endl;

    return 0;
}
