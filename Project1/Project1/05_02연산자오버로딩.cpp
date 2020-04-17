#include <iostream>
#include <string>

using namespace std;

// 연산자 오버로딩 
class Person {
private:
	string name;
public:
	Person() { name = "임꺽정"; }
	Person(string name) : name(name) {};
	Person operator +(const Person& other) { return Person(name + " & " + other.name); }
	void showName() { cout << "이름 : " << name << "\n"; }
};

//int main(void) {
//	Person person1;
//	Person person2("나동빈");
//	Person result = person1 + person2;
//
//	result.showName();
//	system("pause");
//}