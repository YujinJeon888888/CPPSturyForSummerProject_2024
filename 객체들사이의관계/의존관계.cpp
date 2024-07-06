
//의존 패턴(Dependency Pattern) 예제
//의존 패턴은 두 클래스 간의 "사용 관계"를 나타냅니다.한 클래스가 다른 클래스를 일시적으로 사용하거나 참조하는 관계로, 두 클래스의 생명 주기는 독립적입니다.

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

int main_의존() {
	Document doc("Hello, Dependency Pattern!");
	Printer printer; 
	printer.print(doc);//Printer객체가 일시적으로 Document 객체를 사용함
	return 0;
}