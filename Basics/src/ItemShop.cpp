//#include <iostream>
//#include <string>
//
//using namespace std;
//
//const int numberOfItems = 6;
//const string shopItemNames[numberOfItems] = { "Boots", "Sword", "Helmet", "Potion", "Wand", "Rations" };
//
//void printInventory(const int playerInventory[numberOfItems]);
//void printShop();
//bool buyItems(int playerInventory[numberOfItems]);
//
//int main()
//{
//	bool isDone = false;
//	int playerInventory[numberOfItems] = { 1, 1, 0, 1, 0, 3};
//
//	cout << "*****************************" << "\n";
//	cout << "Welcome to the Item Shop!" << "\n";
//	cout << "*****************************" << "\n";
//
//	while (isDone == false) {
//		printShop();
//		printInventory(playerInventory);
//		isDone = buyItems(playerInventory);
//		cout << "\n\n\n";
//	}
//
//	return 0;
//}
//
//void printInventory(const int playerInventory[numberOfItems]) {
//
//	cout << "Your inventory is: \n";
//	for (int i = 0; i < numberOfItems; i++)	{
//		if (playerInventory[i] > 0) {
//			cout << playerInventory[i] << "x " << shopItemNames[i] << endl;
//		}
//	}
//	cout << endl;
//}
//
//void printShop() {
//	cout << "\n*** SHOP ***\n";
//	for (int i = 0; i < numberOfItems; i++) {
//		cout << i + 1 << " - " << shopItemNames[i] << endl;
//	}
//
//	cout << "\n";
//	cout << "-----------------------------" << "\n";
//}
//
//bool buyItems(int playerInventory[numberOfItems]) {
//	int input;
//
//	cout << "\n";
//	cout << "-----------------------------" << "\n";
//	cout << "What would you like to buy? Enter -1 to quit. Enter (" << 1 << "-" << numberOfItems << ")" << endl;
//	cin >> input;
//
//	if (input == -1) {
//		return true;
//	}
//
//	if (input <= 0 || input > numberOfItems) {
//		cout << "Invalid input...\n";
//		return false;
//	}
//
//	playerInventory[input - 1]++;
//	return false;
//}