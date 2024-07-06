//#include <iostream>

//구성(요소) Composition
//
//관계를 표현하는 동사
//Part - of
//
//두뇌는 육체의 일부분이다.
//
//집합 Aggregation
//Has - a
//어떤 사람이 자동차를 가지고 있다.
//
//연계, 제휴 Association
//Uses - a
//환자는 의사의 치료를 받는다.
//의사는 환자로부터 치료비를 받는다.
//
//의존 Dependency
//Depends - on
//나는(다리가 부러져서 한 달 동안) 목발을 짚었다.

/*
관계를 표현하는 동사  | 관계의 형태  | 다른 클래스에도 속할 수 있는가? | 멤버의 존재를 클래스가 관리? | 방향성
----------------------|--------------|----------------------------------|------------------------------|-------------------
구성 (요소) Composition | Part-of      | 전체/부품                         | No                           | Yes                | 단방향
집합 Aggregation     | Has-a        | 전체/부품                         | Yes                          | No                 | 단방향
연계, 제휴 Association | Uses-a       | 용도 외엔 무관                    | Yes                          | No                 | 단방향 or 양방향
의존 Dependency      | Depends-on   | 용도 외엔 무관                    | Yes                          | Yes                | 단방향
*/



