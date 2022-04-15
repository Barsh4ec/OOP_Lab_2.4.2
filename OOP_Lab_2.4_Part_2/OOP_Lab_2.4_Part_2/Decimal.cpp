#include "Decimal.h"
#include <string>
#include <sstream>
#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

Decimal::Decimal()
{
	count = 0;
	m = 0;
}
Decimal::Decimal(int n)
{
	count = n;
	m = new unsigned char[size];
	for (int i = 0; i < count; i++)
		m[i] = '0';
	m[count] = '\0';
}
Decimal::Decimal(Decimal& a)
{
	count = a.count;
	m = a.m;
	m[count] = '\0';
}

int Decimal::getm(Decimal& a)
{
	int result = 0;
	for (int i = 0; a.m[i] != '\0'; i++)
	{
		result *= 10;
		result += a.m[i] - '0';
	}

	return result;
}

ostream& operator << (ostream& out, const Decimal& sd)
{
	out << string(sd);
	return out;
}
istream& operator >> (istream& in, Decimal& sd)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "¬вед≥ть число: ";
	in >> sd.m;
	
	return in;
}
Decimal::operator string () const
{
	stringstream ss;
	for (int i = 0; i < count; i++)
		ss << m[i];
	return ss.str();
}
Decimal& Decimal::operator = (const Decimal& sd)
{
	this->count = sd.count;
	this->m = sd.m;
	return *this;
}
const char Decimal::operator [] (int i) const
{
	return m[i];
}
int operator + (Decimal& a, Decimal& b)
{
	return a.getm(a) + b.getm(b);
}
int operator - (Decimal& a, Decimal& b)
{
	return a.getm(a) - b.getm(b);
}
int operator * (Decimal& a, Decimal& b)
{
	return a.getm(a) * b.getm(b);
}
double operator / (Decimal& a, Decimal& b)
{
	return a.getm(a) / b.getm(b);
}

bool operator < (Decimal a, Decimal b) {
	return a.getm(a) < b.getm(b);
}
bool operator <= (Decimal a, Decimal b) {
	return a.getm(a) <= b.getm(b);
}
bool operator > (Decimal a, Decimal b) {
	return a.getm(a) > b.getm(b);
}
bool operator >= (Decimal a, Decimal b)
{
	return a.getm(a) >= b.getm(b);;
}
bool operator == (Decimal a, Decimal b) {
	return a.getm(a) == b.getm(b);
}
bool operator != (Decimal a, Decimal b) { return !operator ==(a, b); }
