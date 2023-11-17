#include <iostream>
using namespace std;

int main(void) {
	int age;
	cout << "Age? : ";
	cin >> age;

	if (age >= 18)
		cout << "You are Adult!" << endl;
	else if (age == 0)
		cout << "You are Baby!" << endl;
	else if (age < 0)
		cout << "YOU LAIR!" << endl;
	else
		cout << "You are Kid!" << endl;

	return 0;
}