#include <iostream>

using namespace std;

int main()
{
	// Integers
	int hp = 100;
	hp += 1;

	// Floats
	float height = 1.75f;

	float playerDamage = 100.0f;
	float zombieHealth = 200.0f;

	zombieHealth = zombieHealth - playerDamage;
 
	cout << "The zombie HP is: " << zombieHealth << endl;

	return 0;
}