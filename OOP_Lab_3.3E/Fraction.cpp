#include "Fraction.h"
#include <iostream>
#include <string>
#include <sstream>
#include <windows.h>
using namespace std;

Fraction::Fraction()
	:Pair()
{
}
Fraction::Fraction(const int first, const int second)
	: Pair(first, second)
{
}
Fraction::Fraction(Fraction& m)
	: Pair(m)
{
}

Fraction& Fraction::operator = (Fraction& s)
{
	setFirst(s.getFirst());
	setSecond(s.getSecond());
	return *this;
}

bool operator < (Fraction a, Fraction b) {
	return (a.getFirst() < b.getFirst()) || (a.getFirst() == b.getFirst() && a.getSecond() < b.getSecond());
}
bool operator <= (Fraction a, Fraction b) {
	return (a.getFirst() < b.getFirst()) || (a.getFirst() == b.getFirst() && a.getSecond() <= b.getSecond());;
}
bool operator > (Fraction a, Fraction b) {
	return (a.getFirst() > b.getFirst()) || (a.getFirst() == b.getFirst() && a.getSecond() > b.getSecond());
}
bool operator >= (Fraction a, Fraction b)
{
	return (a.getFirst() > b.getFirst()) || (a.getFirst() == b.getFirst() && a.getSecond() >= b.getSecond());
}
bool operator == (Fraction a, Fraction b) {
	return a.getFirst() == b.getFirst() && a.getSecond() == b.getSecond();
}
bool operator != (Fraction a, Fraction b) { return !operator ==(a, b); }