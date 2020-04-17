#include <iostream>
#include <string>

using namespace std;

//일반적인 함수의 정적 바인딩
class A
{
public:
	//정적바인딩
	//void show() { cout << "A 클래스 입니다. " << endl; }

	//가상함수
	//virtual void show() { cout << "A 클래스 입니다. " << endl; }

	//순수 가상함수
	virtual void show() = 0 { cout << "A 클래스 입니다. " << endl; }
};

class B : public A
{
public:
	//정적 바인딩
	//void show() { cout << "B 클래스 입니다. " << endl; }

	//가상함수
	//virtual void show() { cout << "B 클래스 입니다. " << endl; }

	//show() 함수를 재정의 하지 않으면 B 클래스의 객체를 사용할 수 없다.
	virtual void show() { cout << "B 클래스 입니다. " << endl; }

};

//int main(void) {
//	A* p;
//	/*A a;*/
//	B b;
//	//p = &a;
//	//p->show();
//	p = &b;
//	p->show(); // 여전히 A 클래스의 show()를 함수를 호출한다.
//	system("pause");
//}