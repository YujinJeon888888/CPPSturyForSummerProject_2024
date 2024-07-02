#include <iostream>
//랜덤
#include <random>
using namespace std;

// 난수 생성을 위한 함수 정의
int GenerateRandomNumber(int min, int max) {
    // 난수 생성 엔진 초기화
    std::random_device rd;//시드
    std::mt19937 gen(rd());//난수생성
    std::uniform_int_distribution<> dis(min, max);//1)특정 범위 내에서 난수를 생성하기 위해, 2)난수 균일 분포 ( Mersenne Twister 알고리즘을 기반) 

    // 난수 생성 및 반환
    return dis(gen);
}

int main_난수() {

	//종료: return , exit < - exix는 강제종료의 느낌.

	//난수 만들기
	//시드가 고정되면 일정 패턴이생긴다 - > 시드에 변화줘야한다.
    int min = 10;
    int max = 50;
    // 난수 생성 및 출력
    int randomNumber = GenerateRandomNumber(min, max);
    std::cout << "Generated random number between " << min << " and " << max << ": " << randomNumber << '\n';

	return 0;
}