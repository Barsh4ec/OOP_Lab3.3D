#pragma once
#include "Pair.h"
#include <string>
#include <sstream>
using namespace std;
class Fraction : public Pair
{
public:
	Fraction();
	Fraction(const int, const int);
	Fraction(Fraction& m);

	friend bool operator < (Fraction x, Fraction y);
	friend bool operator <= (Fraction x, Fraction y);
	friend bool operator > (Fraction x, Fraction y);
	friend bool operator >=(Fraction x, Fraction y);
	friend bool operator == (Fraction x, Fraction y);
	friend bool operator != (Fraction x, Fraction y);

	Fraction& operator = (Fraction& s);
};