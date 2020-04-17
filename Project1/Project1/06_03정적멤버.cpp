#include <iostream>
#include <string>

using namespace std;

class Person {
private:
	string name;
public:
	static int count;
	Person(string name) : name(name) {
		count++;
	}
};

//int Person::count = 0;
//
//int main(void) {
//	Person p1("³ªµ¿ºó");
//	Person p2("°­¹ÎÈñ");
//	Person p3("ÀÌÁ¾Çö");
//
//	cout << "»ç¶÷¼ö : " << Person::count << "\n";
//	system("pause");
//}