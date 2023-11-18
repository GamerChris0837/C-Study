#include <iostream>
using namespace std;

int main(void) {
	int age;
	cout << "Age? : ";
	cin >> age;

	if (age >= 18)
		cout << "You are an Adult!" << endl;
	else if (age == 0)
		cout << "You are a Baby!" << endl;
	else if (age < 0)
		cout << "YOU LAIR!" << endl;
	else
		cout << "You are a Kid!" << endl;

	return 0;
}