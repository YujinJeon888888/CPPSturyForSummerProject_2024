#include <iostream>
/// <summary>
/// ������ const�� �� �� ���� �� ���°� �����ڵ��.
/// </summary>
class Something {
private:
    int value;

public:
    // �⺻ ������
    Something() {
        value = 0;
    }

    // �Ű������� �ִ� ������
    Something(int initValue) {
        value = initValue;
    }

    // const ���� (���� ������ �ڱ� �ڽ� ����)
    const int& getValue() const {
        std::cout << "const version" << std::endl;
        return value;
    }

    // ��-const ���� (���� ������ �ڱ� �ڽ� ����)
    int& getValue() {
        std::cout << "non-const version" << std::endl;
        return value;
    }
};

int main() {
    Something obj(10); // �Ű������� �ִ� �����ڸ� ���� ��ü ����

    // const ��ü�� ���� ȣ�� ����
    const Something constObj;
    const int& constValue = constObj.getValue(); // const ��� �Լ� ȣ��
    // constObj.getValueNonConst() = 20; // ����: const ��ü������ ��-const ��� �Լ� ȣ�� �Ұ�

    // ��-const ��ü�� ���� ȣ�� ����
    Something nonConstObj;
    int& nonConstValue = nonConstObj.getValue(); // ��-const ��� �Լ� ȣ��
    nonConstObj.getValue(); // const ��� �Լ��� ȣ�� ����

    
    return 0;
}
