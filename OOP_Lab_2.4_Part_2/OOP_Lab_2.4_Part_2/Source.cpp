#include "Decimal.h"
#include <iostream>
#include <string>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
	Decimal a(4);
	cin >> a;
	cout << a << endl;
	Decimal b(3);
	cin >> b;
	cout << b << endl;
	cout << "a + b = " << a + b << endl;
	cout << "a - b = " << a - b << endl;
	cout << "a * b = " << a * b << endl;
	cout << "a / b = " << a / b << endl;

	if (a < b == true)
		cout << "перше число менше за друге" << endl;
	if (a <= b == true)
		cout << "перше число менше або рівне першому" << endl;
	if (a > b == true)
		cout << "перше число більше за друге" << endl;
	if (a >= b == true)
		cout << "перше число більше або рівне першому" << endl;
	if (a == b == true)
		cout << "перше і друге число рівне" << endl;
	if (a != b == true)
		cout << "перше і друге число не рівне" << endl;
	
	return 0; 
}