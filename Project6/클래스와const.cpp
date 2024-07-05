#include <iostream>
/// <summary>
/// 가급적 const를 쓸 수 있을 때 쓰는게 좋은코드다.
/// </summary>
class Something {
private:
    int value;

public:
    // 기본 생성자
    Something() {
        value = 0;
    }

    // 매개변수가 있는 생성자
    Something(int initValue) {
        value = initValue;
    }

    // const 리턴 (참조 변수로 자기 자신 리턴)
    const int& getValue() const {
        std::cout << "const version" << std::endl;
        return value;
    }

    // 비-const 리턴 (참조 변수로 자기 자신 리턴)
    int& getValue() {
        std::cout << "non-const version" << std::endl;
        return value;
    }
};

int main() {
    Something obj(10); // 매개변수가 있는 생성자를 통해 객체 생성

    // const 객체에 대한 호출 예시
    const Something constObj;
    const int& constValue = constObj.getValue(); // const 멤버 함수 호출
    // constObj.getValueNonConst() = 20; // 오류: const 객체에서는 비-const 멤버 함수 호출 불가

    // 비-const 객체에 대한 호출 예시
    Something nonConstObj;
    int& nonConstValue = nonConstObj.getValue(); // 비-const 멤버 함수 호출
    nonConstObj.getValue(); // const 멤버 함수도 호출 가능

    
    return 0;
}
