#include <iostream>
#include <bitset>

// 비트 위치에 대한 열거형 정의
enum Permission {
    READ = 0,
    WRITE,
    EXECUTE
};

int main() {
    std::bitset<3> permissions; // 3비트 크기의 비트셋 생성

    // 권한 설정
    permissions.set(READ,true);   // 읽기 권한 설정
    permissions.set(WRITE,true);  // 쓰기 권한 설정

    // 권한 확인
    if (permissions.test(READ)) {
        std::cout << "Read permission granted." << std::endl;
    }
    if (permissions.test(WRITE)) {
        std::cout << "Write permission granted." << std::endl;
    }
    if (permissions.test(EXECUTE)) {
        std::cout << "Execute permission granted." << std::endl;
    }
    else {
        std::cout << "Execute permission not granted." << std::endl;
    }
    std::cout << permissions << std::endl;//011
    return 0;
}
