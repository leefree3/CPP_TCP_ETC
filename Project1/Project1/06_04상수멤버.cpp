#include <iostream>
#include <string>

using namespace std;

class Person {
private:
	const int id;
	string name;
public:
	static int count;
	Person(int id, string name) : id(id), name(name) {
		count++;
	}
	/*
	void setId(int id) {
		this->id = id; // 오류 발생[ 상수는 수정 불가 ]
	}
	*/
};

/*
int Person::count = 0;

int main(void) {
	Person p1(1, "나동빈");
	Person p2(2, "강민희");
	Person p3(3, "이종현");

	cout << "사람수 : " << Person::count << "\n";
	system("pause");
}
*/