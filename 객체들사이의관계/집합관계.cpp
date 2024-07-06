//Student student;
//이거랑
//Student student = new Student(); 
//랑 뭔차이야 ? 메모리에서

///주요 차이점
//메모리 할당 :
//
//Student student; : 스택 메모리에 할당됩니다.
//Student* student = new Student(); : 힙 메모리에 할당됩니다.
//생명 주기 :
//
//Student student; : 블록을 벗어나면 자동으로 소멸됩니다.
//Student* student = new Student(); : 명시적으로 delete를 호출하기 전까지 소멸되지 않습니다.
//관리 편의성 :
//
//Student student; : 자동으로 메모리 관리가 이루어집니다.
//Student* student = new Student(); : 수동으로 메모리를 관리해야 합니다.delete를 호출하지 않으면 메모리 누수가 발생합니다.

/////////////////////////////
//Aggregation과 Composition의 차이와 예제
//Aggregation과 Composition은 둘 다 객체 간의 "전체-부분" 관계를 나타내지만, 이 둘은 객체의 생명 주기와 연관된 차이점이 있습니다.
//
//Aggregation: 부분 객체는 전체 객체와 독립된 생명 주기를 가집니다.전체 객체가 소멸되어도 부분 객체는 소멸되지 않습니다.
//Composition : 부분 객체는 전체 객체와 동일한 생명 주기를 가집니다.전체 객체가 소멸되면 부분 객체도 함께 소멸됩니다.

#include <iostream>
#include <vector>
class Course {
public:
	std::string courseName;
	Course(const std::string&  name): courseName(name){}
};

class Student {
private:
	std::string studentName;
	std::vector<Course*> courses;//Aggregation관계
public:
	Student(const std::string& name) : studentName(name) {}

	void addCourse(Course* course) {
		courses.push_back(course);
	}
	
	void printCourses() const {
		std::cout << studentName << " is enrolled in the following coursed: \n";
		for (const auto& course : courses) {
			std::cout << "- " << course->courseName << "\n";
		}

	}
};


int main_aggregation() {
	Course course1("Math");
	Course course2("Science");

	Student student("Alice");
	student.addCourse(&course1);
	student.addCourse(&course2);

	student.printCourses();
	
	course1.courseName = "바꿈";
	//동기화되는 거 확인할 수 있다. 포인터이기 때문이다.
	student.printCourses();

	////////////////
	//참조변수 차이
	/*포인터와 참조 변수의 차이
		포인터 :

	여러 객체를 가리키도록 변경할 수 있습니다.
		nullptr로 초기화할 수 있습니다.
		동적 메모리 할당 및 해제가 필요할 수 있습니다.
		포인터 연산(역참조, 주소 변경 등)을 수행할 수 있습니다.
		참조 변수 :

	반드시 유효한 객체를 참조해야 합니다.
		한 번 초기화되면 다른 객체를 가리키도록 변경할 수 없습니다.
		자동으로 객체의 생명 주기를 관리합니다(스택 메모리 할당 시).*/


	return 0;
}