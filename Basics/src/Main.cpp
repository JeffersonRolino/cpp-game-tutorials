#include <iostream>
#include <string>

using namespace std;

int main()
{
	string playerName;
	int age;

	cout << "What is your name?\n";
	cin >> playerName;

	cout << "How old are you?\n";
	cin >> age;

	cout << "\nHello " << playerName << "\n";

	if (age <= 3)
	{
		cout << "You are lying!\n\n";
	}
	else if (age < 12)
	{
		cout << "Sorry, you are to young to play this game...\n\n";
	}
	else if (age > 90)
	{
		cout << "Sorry, you are to old to play this game...\n\n";
	}
	else {
		cout << "Welcome to the game...\n\n";
	}

	return 0;
}