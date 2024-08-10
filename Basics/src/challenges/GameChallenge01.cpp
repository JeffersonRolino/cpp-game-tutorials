#include <iostream>
#include <string>
#include <random>
#include <ctime>

using namespace std;

int getNumberOfSoldiers(string race);

void printResults(int numberOfHumans, int numberOfOrcs);

void simulateBattle(int seed, int& numberOfHumans, int& numberOfOrcs);

int main()
{
	static int seed = time(NULL);

	cout << "********************************************" << "\n";
	cout << "COMBAT SIMULATOR 1D" << "\n";
	cout << "********************************************" << "\n";

	int numberOfHumans = getNumberOfSoldiers("Humans");
	int numberOfOrcs = getNumberOfSoldiers("Orcs");

	simulateBattle(seed, numberOfHumans, numberOfOrcs);

	printResults(numberOfHumans, numberOfOrcs);

	return 0;
}

int getNumberOfSoldiers(string race) {
	int numberOfSoldiers;
	cout << "Enter the number of " << race << ":" << "\n";
	cin >> numberOfSoldiers;
	return numberOfSoldiers;
}

void printResults(int numberOfHumans, int numberOfOrcs) {
	cout << "\n";
	cout << "--------------------------------------------" << "\n";
	cout << "The battle is over...\n";
	if (numberOfHumans > 0) {
		cout << "The Humans won! " << numberOfHumans << " humans are left in the battlefield...\n\n";
	}
	else {
		cout << "The Orcs won! " << numberOfOrcs << " orcs are left in the battlefield...\n\n";
	}
}

void simulateBattle(int seed, int& numberOfHumans, int& numberOfOrcs) {
	static default_random_engine randomGenerator(seed);
	uniform_real_distribution<float> dice(0.0f, 1.0f);

	float humanAttack = 0.6f;
	float humanHealth = 100.0f;
	float humanDamage = 50.0f;
	float currentHumanHealth = humanHealth;

	float orcAttack = 0.4f;
	float orcHealth = 150.0f;
	float orcDamage = 75.0f;
	float currentOrcHealth = orcHealth;

	char turn = 'H';
	float attackRoll;

	while (numberOfHumans > 0 && numberOfOrcs > 0) {
		//Get our attack result
		attackRoll = dice(randomGenerator);

		if (turn == 'H') {
			//Check if attack was successful
			if (attackRoll <= humanAttack) {
				currentOrcHealth -= humanDamage;

				if (currentOrcHealth <= 0) {
					numberOfOrcs--;
					currentOrcHealth = orcHealth;
				}
			}

			turn = 'O';
		}
		else {
			//Check if attack was successful
			if (attackRoll <= orcAttack) {
				currentHumanHealth -= orcDamage;

				if (currentHumanHealth <= 0) {
					numberOfHumans--;
					currentHumanHealth = humanHealth;
				}
			}

			turn = 'H';
		}
	}
}