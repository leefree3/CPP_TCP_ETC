#include <iostream>
#include <string>

using namespace std;

class Person {
	//생성자 오버로딩 예제 아닌감..? 
	// 강사님은 함수 오버로딩이라고 하는디.... 
	// Person이라는 생성자에, 매개변수의 자료형이 다르거나, 갯수가 다를 경우 니까...흠..
private:
	string name;
public:
	Person() { name = "임꺽정"; }
	Person(string name) : name(name) {};
	void showName() { cout << "이름 : " << name << "\n"; }
};

//int main(void) {
//	Person person1;
//	person1.showName();
//	Person person2("나동빈");
//	person2.showName();
//	system("pause");
//}