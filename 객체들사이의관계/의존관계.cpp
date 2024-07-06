
//���� ����(Dependency Pattern) ����
//���� ������ �� Ŭ���� ���� "��� ����"�� ��Ÿ���ϴ�.�� Ŭ������ �ٸ� Ŭ������ �Ͻ������� ����ϰų� �����ϴ� �����, �� Ŭ������ ���� �ֱ�� �������Դϴ�.

#include <iostream>
#include <string>

class Document {
private:
	std::string m_text;
public:
	Document(const std::string& text) : m_text(text) {}

	const std::string& getText() const {
		return m_text;
	}
};

class Printer {
public: 
	void print(const Document& doc) const{
		std::cout << "printing document: " << doc.getText() << std::endl;
	}
};

int main_����() {
	Document doc("Hello, Dependency Pattern!");
	Printer printer; 
	printer.print(doc);//Printer��ü�� �Ͻ������� Document ��ü�� �����
	return 0;
}