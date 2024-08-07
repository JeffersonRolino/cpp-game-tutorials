#include <iostream>
#include <string>

using namespace std;

// This is a one line comment

/*
	This is a multline comment
	You can type in multiple lines
	The compiler will igore these lines...
*/

int main()
{
	for (int i = 1; i < 100; i *= 2) {
		cout << i << endl;
	}

	cout << "\n";

	bool isGameOver = true;

	if (isGameOver) {
		cout << "The game is over...\n";
	}
	else {
		cout << "The game is on...\n";
	}

	return 0;
}