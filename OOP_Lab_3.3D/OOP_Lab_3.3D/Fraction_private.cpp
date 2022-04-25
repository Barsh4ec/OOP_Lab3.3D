#include "Fraction_private.h"
#include <iostream>
#include <string>
#include <sstream>
#include <windows.h>
using namespace std;

Fraction_private::Fraction_private()
	: Pair()
{
}
Fraction_private::Fraction_private(const int first, const int second)
	: Pair(first, second)
{
}
Fraction_private::Fraction_private(Fraction_private& m)
	: Pair(m)
{
}

Fraction_private& Fraction_private::operator = (Fraction_private& s)
{
	setFirst(s.getFirst());
	setSecond(s.getSecond());
	return *this;
}

ostream& operator << (ostream& out, Fraction_private& s)
{
	out << (string)s;
	return out;
}
istream& operator >> (istream& in, Fraction_private& a)
{
	int x, y;
	cout << "ֳ�� ������� �����: "; cin >> x;
	do {
		cout << "������� ������� �����: "; cin >> y;
	} while (y < 0);
	a.setFirst(x);
	a.setSecond(y);
	return in;
}

bool operator < (Fraction_private a, Fraction_private b) {
	return (a.getFirst() < b.getFirst()) || (a.getFirst() == b.getFirst() && a.getSecond() < b.getSecond());
}
bool operator <= (Fraction_private a, Fraction_private b) {
	return (a.getFirst() < b.getFirst()) || (a.getFirst() == b.getFirst() && a.getSecond() <= b.getSecond());;
}
bool operator > (Fraction_private a, Fraction_private b) {
	return (a.getFirst() > b.getFirst()) || (a.getFirst() == b.getFirst() && a.getSecond() > b.getSecond());
}
bool operator >= (Fraction_private a, Fraction_private b)
{
	return (a.getFirst() > b.getFirst()) || (a.getFirst() == b.getFirst() && a.getSecond() >= b.getSecond());
}
bool operator == (Fraction_private a, Fraction_private b) {
	return a.getFirst() == b.getFirst() && a.getSecond() == b.getSecond();
}
bool operator != (Fraction_private a, Fraction_private b) { return !operator ==(a, b); }

Fraction_private::operator string () {
	stringstream ss;
	ss << "�����: " << this->getFirst() << "." << this->getSecond() << endl;
	return ss.str();
}
