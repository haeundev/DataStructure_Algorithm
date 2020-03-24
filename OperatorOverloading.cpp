#include <iostream>
using namespace std;

class Hero
{
private:
	int _hp = 0;

public:
	void Heal(int healAmount) { _hp += healAmount; }
	void Damage(int damageAmount) { _hp -= damageAmount; }

	void operator+=(int healAmount) { Heal(healAmount); }
	void operator-=(int damageAmount) { Damage(damageAmount); }

	int GetHP() { return _hp; }
};

int main()
{
	Hero Weasley;
	Weasley -= 50;
	Weasley += 40;
	Weasley -= 30;
	Weasley += 50;

	cout << Weasley.GetHP() << endl;
}