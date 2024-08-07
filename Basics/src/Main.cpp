#include <iostream>
#include <string>

using namespace std;

int main()
{
	int counter = 0;

	while (counter < 10) {
		cout << "ha";
		counter++;
	}

	cout << "\n";

	for (int i = 0; i < 10; i++) {
		cout << "ha";
	}

	cout << "\n";

	counter = 0;
	do {
		cout << "ha";
		counter++;
	} while (counter < 10);

	return 0;
}