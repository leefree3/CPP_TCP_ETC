#include <iostream>
#include <string>

using namespace std;

//�Ϲ����� �Լ��� ���� ���ε�
class A
{
public:
	//�������ε�
	//void show() { cout << "A Ŭ���� �Դϴ�. " << endl; }

	//�����Լ�
	//virtual void show() { cout << "A Ŭ���� �Դϴ�. " << endl; }

	//���� �����Լ�
	virtual void show() = 0 { cout << "A Ŭ���� �Դϴ�. " << endl; }
};

class B : public A
{
public:
	//���� ���ε�
	//void show() { cout << "B Ŭ���� �Դϴ�. " << endl; }

	//�����Լ�
	//virtual void show() { cout << "B Ŭ���� �Դϴ�. " << endl; }

	//show() �Լ��� ������ ���� ������ B Ŭ������ ��ü�� ����� �� ����.
	virtual void show() { cout << "B Ŭ���� �Դϴ�. " << endl; }

};

//int main(void) {
//	A* p;
//	/*A a;*/
//	B b;
//	//p = &a;
//	//p->show();
//	p = &b;
//	p->show(); // ������ A Ŭ������ show()�� �Լ��� ȣ���Ѵ�.
//	system("pause");
//}