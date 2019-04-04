#include <iostream>
using namespace std;


int mod(int a, int b) {
	return (a*a) % b;
}

int main()
{
	int base;
	int power;
	int m;

	cout << "enter base: ";
	cin >> base;
	cout << "enter power: ";
	cin >> power;
	cout << "enter mod: ";
	cin >> m;

	int count = 2;

	while (count < power) {
		cout << "power is : " << count 
			<< " && base is : " << base 
			<< " && mod is : " << mod(base, m) << endl;
		base = mod(base, m);
		count = count *2;
	}

	return 0;
}
