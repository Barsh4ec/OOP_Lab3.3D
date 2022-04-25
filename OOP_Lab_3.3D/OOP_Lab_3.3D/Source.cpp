#include <iostream>
#include <Windows.h>
#include "Fraction_public.h"
#include "Fraction_private.h"

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Fraction_public a, b;
	cin >> a;
	cin >> b; cout << endl;
	cout << a;
	cout << b;
	if (a < b == true)
		cout << "перше число менше за друге" << endl;
	if (a <= b == true)
		cout << "перше число менше або рівне другому" << endl;
	if (a > b == true)
		cout << "перше число більше за друге" << endl;
	if (a >= b == true)
		cout << "перше число більше або рівне другому" << endl; 
	if (a == b == true)
		cout << "перше і друге число рівне" << endl;
	if (a != b == true)
		cout << "перше і друге число не рівне" << endl;

	cout << "для закритого успадкування:" << endl;
	Fraction_private x, y;
	cin >> x;
	cin >> y; cout << endl;
	cout << x;
	cout << y;
	if (x < y == true)
		cout << "перше число менше за друге" << endl;
	if (x <= y == true)
		cout << "перше число менше або рівне другому" << endl;
	if (x > y == true)
		cout << "перше число більше за друге" << endl;
	if (x >= y == true)
		cout << "перше число більше або рівне другому" << endl;
	if (x == y == true)
		cout << "перше і друге число рівне" << endl;
	if (x != y == true)
		cout << "перше і друге число не рівне" << endl;
	return 0;
}