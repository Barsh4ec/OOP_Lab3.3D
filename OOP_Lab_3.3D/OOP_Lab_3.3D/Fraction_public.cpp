#include "Fraction_public.h"
#include <iostream>
#include <string>
#include <sstream>
#include <windows.h>
using namespace std;

Fraction_public::Fraction_public()
	:Pair()
{
}
Fraction_public::Fraction_public(const int first, const int second)
	: Pair(first, second)
{
}
Fraction_public::Fraction_public(Fraction_public& m)
	: Pair(m)
{
}

Fraction_public& Fraction_public::operator = (Fraction_public& s)
{
	setFirst(s.getFirst());
	setSecond(s.getSecond());
	return *this;
}

bool operator < (Fraction_public a, Fraction_public b) {
	return (a.getFirst() < b.getFirst()) || (a.getFirst() == b.getFirst() && a.getSecond() < b.getSecond());
}
bool operator <= (Fraction_public a, Fraction_public b) {
	return (a.getFirst() < b.getFirst()) || (a.getFirst() == b.getFirst() && a.getSecond() <= b.getSecond());;
}
bool operator > (Fraction_public a, Fraction_public b) {
	return (a.getFirst() > b.getFirst()) || (a.getFirst() == b.getFirst() && a.getSecond() > b.getSecond());
}
bool operator >= (Fraction_public a, Fraction_public b)
{
	return (a.getFirst() > b.getFirst()) || (a.getFirst() == b.getFirst() && a.getSecond() >= b.getSecond());
}
bool operator == (Fraction_public a, Fraction_public b) {
	return a.getFirst() == b.getFirst() && a.getSecond() == b.getSecond();
}
bool operator != (Fraction_public a, Fraction_public b) { return !operator ==(a, b); }