#include <iostream>
#include <string>

using namespace std;

template <typename T>

void change(T& a, T& b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}

//����� Ư��ȭ(int Ÿ������ �ٲ�)
template <>
void change<int>(int& a, int& b) {
	cout << "������ �����͸� ��ü�մϴ�. \n";
	int temp;
	temp = a;
	a = b;
	b = temp;
}

//int main(void) {
//	/*string a = "������";
//	string b = "������";*/
//
//	int a = 7;
//	int b = 8;
//
//	change(a, b);
//	cout << a << " : " << b << endl;
//	system("pause");
//}