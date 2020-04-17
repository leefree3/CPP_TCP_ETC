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

//명시적 특수화(int 타입으로 바뀜)
template <>
void change<int>(int& a, int& b) {
	cout << "정수형 데이터를 교체합니다. \n";
	int temp;
	temp = a;
	a = b;
	b = temp;
}

//int main(void) {
//	/*string a = "나동빈";
//	string b = "강민희";*/
//
//	int a = 7;
//	int b = 8;
//
//	change(a, b);
//	cout << a << " : " << b << endl;
//	system("pause");
//}