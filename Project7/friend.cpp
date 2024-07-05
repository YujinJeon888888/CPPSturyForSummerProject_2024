//friend 키워드는 클래스 간에 private 멤버에 접근할 수 있는 특별한 권한을 부여하는 데 사용됩니다
//양방향 friend 선언: 두 클래스가 서로의 private 멤버에 접근하고 싶다면, 각 클래스에서 서로를 friend로 선언해주어야 합니다. 
class MyClass {
private:
    int privateMember;

    // friend 함수 선언
    // friendFunction은 MyClass의 private 멤버 privateMember에 접근할 수 있습니다.
    friend void friendFunction(const MyClass& obj);
    // friend 클래스 선언
    // FriendClass는 MyClass의 private 멤버에 접근할 수 있습니다.
    friend class FriendClass;
};


///쌍방향
// Forward declaration
class ClassB;//코드가 위에서 아래로 흐르니 A는 B의존재를 모름- > 전방선언

class ClassA {
private:
    int privateMemberA;

    // ClassB를 friend로 선언
    friend class ClassB;
};

class ClassB {
private:
    int privateMemberB;

    // ClassA를 friend로 선언
    friend class ClassA;
};
