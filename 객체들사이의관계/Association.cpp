////양방향
//#include <iostream>
//#include <vector>
//#include <string>
//
//class Patient;
//
//class Doctor {
//private:
//	std::string m_name;
//	std::vector<Patient*> m_patients;
//	
//public:
//	Doctor(const std::string& name) : m_name(name) {
//
//	}
//
//	void addPatient(Patient* patient) {
//		m_patients.push_back(patient);
//	}
//
//	void printPatients() const;
//
//	const std::string& getName() const {
//		return m_name;
//	}
//
//	void printPatients() const {
//		std::cout << m_name << " is trating: ";
//		for (const auto& patient : m_patients) {
//			std::cout << patient->getName() << " ";
//		}
//		std::cout << std::endl;
//	}
//};
//
//class Patient {
//private:
//	std::string m_name;
//	std::vector<Doctor*> m_doctors;//환자는 여러 의사와 연관됨
//public:
//	Patient(const std::string& name) : m_name(name) {
//
//	}
//	void addDoctor(Doctor* doctor) {
//		m_doctors.push_back(doctor);
//	}
//
//	void printDoctors() const {
//		std::cout << m_name << " is being treated by: ";
//		for (const auto& doctor : m_doctors) {
//			std::cout << doctor->getName() << " ";
//		}
//		std::cout << std::endl;
//	}
//
//	const std::string& getName() const {
//		return m_name;
//	}
//};
//
//
//
//int main_aggregation() {
//	Doctor doc1("Dr. Smith");
//	Doctor doc2("Dr. Jones");
//
//	Patient pat1("Alice");
//	Patient pat2("Bob");
//
//	//연결설정
//	doc1.addPatient(&pat1);
//	doc1.addPatient(&pat2);
//	doc2.addPatient(&pat1);
//
//	pat1.addDoctor(&doc1);
//	pat1.addDoctor(&doc2);
//	pat2.addDoctor(&doc1);
//
//	//정보출력
//	doc1.printPatients();
//	doc2.printPatients();
//
//	pat1.printDoctors();
//	pat2.printDoctors();
//
//	return 0;
//}