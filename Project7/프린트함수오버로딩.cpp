#include <iostream>

class Point {
private:
    int x, y;

public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}

    // << 연산자 오버로딩
    friend std::ostream& operator<<(std::ostream& os, const Point& point);
};

// << 연산자 오버로딩 정의
// friend로 뺀 이유: 
// 왜냐하면 멤버 함수로 정의할 경우, 왼쪽 피연산자가 해당 클래스의 객체여야 하기 때문입니다.
std::ostream& operator<<(std::ostream& os, const Point& point) {
    os << "(" << point.x << ", " << point.y << ")";
    return os;
}

int main_프린트오버로딩() {
    Point p1(10, 20);
    Point p2(30, 40);

    std::cout << "Point 1: " << p1 << std::endl;
    std::cout << "Point 2: " << p2 << std::endl;

    return 0;
}
