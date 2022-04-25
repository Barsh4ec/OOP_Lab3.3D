#pragma once
#include "Pair.h"
#include <string>
#include <sstream>
using namespace std;
class Fraction_public : public Pair
{
public:
	Fraction_public();
	Fraction_public(const int, const int);
	Fraction_public(Fraction_public& m);

	friend bool operator < (Fraction_public x, Fraction_public y);
	friend bool operator <= (Fraction_public x, Fraction_public y);
	friend bool operator > (Fraction_public x, Fraction_public y);
	friend bool operator >=(Fraction_public x, Fraction_public y);
	friend bool operator == (Fraction_public x, Fraction_public y);
	friend bool operator != (Fraction_public x, Fraction_public y);

	Fraction_public& operator = (Fraction_public& s);
};

