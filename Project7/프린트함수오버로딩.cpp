#include <iostream>

class Point {
private:
    int x, y;

public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}

    // << ������ �����ε�
    friend std::ostream& operator<<(std::ostream& os, const Point& point);
};

// << ������ �����ε� ����
// friend�� �� ����: 
// �ֳ��ϸ� ��� �Լ��� ������ ���, ���� �ǿ����ڰ� �ش� Ŭ������ ��ü���� �ϱ� �����Դϴ�.
std::ostream& operator<<(std::ostream& os, const Point& point) {
    os << "(" << point.x << ", " << point.y << ")";
    return os;
}

int main_����Ʈ�����ε�() {
    Point p1(10, 20);
    Point p2(30, 40);

    std::cout << "Point 1: " << p1 << std::endl;
    std::cout << "Point 2: " << p2 << std::endl;

    return 0;
}
