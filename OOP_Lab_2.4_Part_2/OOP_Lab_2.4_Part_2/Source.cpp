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
		cout << "����� ����� ����� �� �����" << endl;
	if (a <= b == true)
		cout << "����� ����� ����� ��� ���� �������" << endl;
	if (a > b == true)
		cout << "����� ����� ����� �� �����" << endl;
	if (a >= b == true)
		cout << "����� ����� ����� ��� ���� �������" << endl;
	if (a == b == true)
		cout << "����� � ����� ����� ����" << endl;
	if (a != b == true)
		cout << "����� � ����� ����� �� ����" << endl;
	
	return 0; 
}