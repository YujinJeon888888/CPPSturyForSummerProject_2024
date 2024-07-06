//Student student;
//�̰Ŷ�
//Student student = new Student(); 
//�� �����̾� ? �޸𸮿���

///�ֿ� ������
//�޸� �Ҵ� :
//
//Student student; : ���� �޸𸮿� �Ҵ�˴ϴ�.
//Student* student = new Student(); : �� �޸𸮿� �Ҵ�˴ϴ�.
//���� �ֱ� :
//
//Student student; : ����� ����� �ڵ����� �Ҹ�˴ϴ�.
//Student* student = new Student(); : ��������� delete�� ȣ���ϱ� ������ �Ҹ���� �ʽ��ϴ�.
//���� ���Ǽ� :
//
//Student student; : �ڵ����� �޸� ������ �̷�����ϴ�.
//Student* student = new Student(); : �������� �޸𸮸� �����ؾ� �մϴ�.delete�� ȣ������ ������ �޸� ������ �߻��մϴ�.

/////////////////////////////
//Aggregation�� Composition�� ���̿� ����
//Aggregation�� Composition�� �� �� ��ü ���� "��ü-�κ�" ���踦 ��Ÿ������, �� ���� ��ü�� ���� �ֱ�� ������ �������� �ֽ��ϴ�.
//
//Aggregation: �κ� ��ü�� ��ü ��ü�� ������ ���� �ֱ⸦ �����ϴ�.��ü ��ü�� �Ҹ�Ǿ �κ� ��ü�� �Ҹ���� �ʽ��ϴ�.
//Composition : �κ� ��ü�� ��ü ��ü�� ������ ���� �ֱ⸦ �����ϴ�.��ü ��ü�� �Ҹ�Ǹ� �κ� ��ü�� �Բ� �Ҹ�˴ϴ�.

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
	std::vector<Course*> courses;//Aggregation����
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
	
	course1.courseName = "�ٲ�";
	//����ȭ�Ǵ� �� Ȯ���� �� �ִ�. �������̱� �����̴�.
	student.printCourses();

	////////////////
	//�������� ����
	/*�����Ϳ� ���� ������ ����
		������ :

	���� ��ü�� ����Ű���� ������ �� �ֽ��ϴ�.
		nullptr�� �ʱ�ȭ�� �� �ֽ��ϴ�.
		���� �޸� �Ҵ� �� ������ �ʿ��� �� �ֽ��ϴ�.
		������ ����(������, �ּ� ���� ��)�� ������ �� �ֽ��ϴ�.
		���� ���� :

	�ݵ�� ��ȿ�� ��ü�� �����ؾ� �մϴ�.
		�� �� �ʱ�ȭ�Ǹ� �ٸ� ��ü�� ����Ű���� ������ �� �����ϴ�.
		�ڵ����� ��ü�� ���� �ֱ⸦ �����մϴ�(���� �޸� �Ҵ� ��).*/


	return 0;
}