#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	int studentId;
	string name;
public:
	Student(int studentId, string name) : studentId(studentId), name(name) { }
	friend Student operator +(const Student& student, const Student& other) {
		return Student(student.studentId, student.name + " & " + other.name);
	}
	void showName() { cout << "�̸� : " << name << "\n"; }
	//void showNum() { cout << "�л� ��ȣ : " << studentId << '\n'; }
};

//int main(void) {
//	Student student(1, "������");
//	Student result = student + student;
//
//	result.showName();
//	//result.showNum();
//	system("pause");
//}