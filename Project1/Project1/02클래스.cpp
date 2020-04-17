#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	string name;
	int englishScore;
	int mathScore;
	int getSum() { return englishScore + mathScore; }; //정보 은닉
public:
	Student(string n, int e, int m) {
		this->name = n;
		this->englishScore = e;
		this->mathScore = m;
	}
	void show() { cout << name << " : [합계 " << getSum() << "점] \n"; }
};

//int main(void) {
//	Student a = Student("미니미", 100, 80);
//	a.show();
//	system("pause");
//}