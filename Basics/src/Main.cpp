#include <iostream>
#include <string>

using namespace std;

class Monster {
public:
	void growl() {
		cout << "Growl!!!" << endl;
	}

	//setter function
	void setName(string name) {
		_name = name;
	}

	//getter function
	string getName() {
		return _name;
	}

private:
	string _name;
};

int main()
{
	Monster monster1;
	monster1.setName("Orc");

	cout << monster1.getName() << endl;
	
	monster1.growl();

	return 0;
}