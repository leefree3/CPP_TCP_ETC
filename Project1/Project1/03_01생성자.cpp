#include <iostream>
#include <string>

using namespace std;

class Character {
private:
	string name;
	int ragePoint;
	int hp;
	int damage;
public:
	//기본 생성자 => 생성자 정의하지 않으면 기본 생성자.(NULL, 0 등으로 자동 초기화된다.)
	/*Character(string name, int hp, int damage) {
		this->name = name;
		this->ragePoint = 0;
		this->hp = hp;
		this->damage = damage;
	}*/
	void show() {
		cout << name << "[" << ragePoint << "]" << hp << " " << damage << "\n";
	}
};

//int main(void) {
//	/*Character character = Character("슬라임", 50, 10);*/
//	Character character = Character();
//	character.show();
//	system("pause");
//}