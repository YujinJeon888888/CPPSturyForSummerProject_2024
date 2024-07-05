//friend Ű����� Ŭ���� ���� private ����� ������ �� �ִ� Ư���� ������ �ο��ϴ� �� ���˴ϴ�
//����� friend ����: �� Ŭ������ ������ private ����� �����ϰ� �ʹٸ�, �� Ŭ�������� ���θ� friend�� �������־�� �մϴ�. 
class MyClass {
private:
    int privateMember;

    // friend �Լ� ����
    // friendFunction�� MyClass�� private ��� privateMember�� ������ �� �ֽ��ϴ�.
    friend void friendFunction(const MyClass& obj);
    // friend Ŭ���� ����
    // FriendClass�� MyClass�� private ����� ������ �� �ֽ��ϴ�.
    friend class FriendClass;
};


///�ֹ���
// Forward declaration
class ClassB;//�ڵ尡 ������ �Ʒ��� �帣�� A�� B�����縦 ��- > ���漱��

class ClassA {
private:
    int privateMemberA;

    // ClassB�� friend�� ����
    friend class ClassB;
};

class ClassB {
private:
    int privateMemberB;

    // ClassA�� friend�� ����
    friend class ClassA;
};
