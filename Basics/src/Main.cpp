#include <iostream>
#include <string>

using namespace std;

int main()
{
	string playerName = "Jefferson";
	int size = playerName.length();
 
	cout << "Your name is " << playerName;
	cout << " and your name is " << size << " letters long..." << endl;

	cout << "\n";

	playerName = "Fred";
	cout << "Now the player's name is: " << playerName << endl;

	return 0;
}