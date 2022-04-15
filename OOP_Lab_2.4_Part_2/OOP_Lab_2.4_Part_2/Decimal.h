#pragma once
#include <string>
using namespace std;
class Decimal
{
private:
	int count;
	static const int size = 100;
	unsigned char* m;
public:
	int getSize() const { return size; }
	int getm(Decimal&);

	Decimal();
	Decimal(int);
	Decimal(Decimal&);

	friend ostream& operator << (ostream&, const Decimal&);
	friend istream& operator >> (istream&, Decimal&);
	Decimal& operator = (const Decimal&);
	const char operator [] (int) const;
	operator string () const;

	friend int operator + (Decimal&, Decimal&);
	friend int operator - (Decimal&, Decimal&);
	friend int operator * (Decimal&, Decimal&);
	friend double operator / (Decimal&, Decimal&);

	friend bool operator < (Decimal x, Decimal y);
	friend bool operator <= (Decimal x, Decimal y);
	friend bool operator > (Decimal x, Decimal y);
	friend bool operator >=(Decimal x, Decimal y);
	friend bool operator == (Decimal x, Decimal y);
	friend bool operator != (Decimal x, Decimal y);
};

