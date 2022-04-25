#pragma once
#include "Pair.h"
#include <string>
#include <sstream>
using namespace std;
class Fraction_private : private Pair
{
public:
	void setFirst(int value) { Pair::setFirst(value); }
	void setSecond(int value) { Pair::setSecond(value); }
	int getFirst() { return Pair::getFirst(); }
	int getSecond() { return Pair::getSecond(); }
	Fraction_private();
	Fraction_private(const int, const int);
	Fraction_private(Fraction_private& m);

	friend bool operator < (Fraction_private x, Fraction_private y);
	friend bool operator <= (Fraction_private x, Fraction_private y);
	friend bool operator > (Fraction_private x, Fraction_private y);
	friend bool operator >=(Fraction_private x, Fraction_private y);
	friend bool operator == (Fraction_private x, Fraction_private y);
	friend bool operator != (Fraction_private x, Fraction_private y);

	Fraction_private& operator = (Fraction_private& s);
	friend ostream& operator << (ostream&, Fraction_private&);
	friend istream& operator >> (istream&, Fraction_private&);

	operator string ();
};
