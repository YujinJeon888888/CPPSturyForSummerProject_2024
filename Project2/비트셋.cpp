#include <iostream>
#include <bitset>

// ��Ʈ ��ġ�� ���� ������ ����
enum Permission {
    READ = 0,
    WRITE,
    EXECUTE
};

int main() {
    std::bitset<3> permissions; // 3��Ʈ ũ���� ��Ʈ�� ����

    // ���� ����
    permissions.set(READ,true);   // �б� ���� ����
    permissions.set(WRITE,true);  // ���� ���� ����

    // ���� Ȯ��
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
