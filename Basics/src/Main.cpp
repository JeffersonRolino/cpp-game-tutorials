#include <iostream>
#include <string>

using namespace std;

int main()
{
	const int numberOfItems = 5;

	string shopItemNames[numberOfItems] = {"Boots", "Sword", "Helmet", "Potion", "Wand"};

	cout << "*****************************" << "\n";
	cout << "Welcome to the Item Shop!" << "\n";
	cout << "*****************************" << "\n";

	for (int i = 0; i < numberOfItems; i++) {
		cout << shopItemNames[i] << endl;
	}

	cout << "\n";
	cout << "-----------------------------" << "\n";
	cout << "What would you like to buy?\n";

	return 0;
}