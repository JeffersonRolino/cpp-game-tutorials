#include <iostream>
#include <string>
#include <random>
#include <ctime>

using namespace std;

int main()
{
	int seed = time(0);
	cout << "The seed is: " << seed << "\n\n";

	default_random_engine randomGenerator(seed);
	uniform_real_distribution<float> attackRoll(0.0f, 1.0f);

	cout << "You are attacking the goblin... " << "\n";

	float attack = attackRoll(randomGenerator);

	cout << "You roll " << attack << "\n";

	if (attack <= 0.6f) {
		cout << "You hit the goblin! Yay\n";
	}
	else {
		cout << "You miss the attack, oh no!\n";
	}

	return 0;
}