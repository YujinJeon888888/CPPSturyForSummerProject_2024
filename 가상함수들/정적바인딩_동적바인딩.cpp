#include <iostream>
using namespace std;

// 함수 정의
int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mult(int a, int b) {
    return a * b;
}

int main_바인딩() {
    int x, y;
    cout << "input 2 nums: ";
    cin >> x >> y;

    int op;
    cout << "0: add, 1: substract, 2: multiply: " << endl;
    cin >> op;

    // static binding
    int result;
    switch (op) {
    case 0: result = add(x, y); break;
    case 1: result = sub(x, y); break;
    case 2: result = mult(x, y); break;
    default: cout << "Invalid operation" << endl; return 1;
    }
    cout << "Result (static binding): " << result << endl;

    // dynamic binding. 런타임에 결정된다.
    int (*func_ptr)(int, int) = nullptr;
    switch (op)
    {
    case 0:func_ptr = add; break;
    case 1:func_ptr = sub; break;
    case 2:func_ptr = mult; break;
    default:
        cout << "Invalid operation" << endl; return 1;
        break;
    }

    if (func_ptr != nullptr) {
        cout << "Result (dynamic binding): " << func_ptr(x, y) << endl;
    }

    return 0;
}
