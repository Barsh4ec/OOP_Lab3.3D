#include "Pair.h"
#include <iostream>
#include <string>
#include <sstream>
#include <windows.h>
using namespace std;

Pair::Pair()
{
	setFirst(0);
	setSecond(0);
}
Pair::Pair(const int first, const int second)
{
	setFirst(first);
	setSecond(second);
}
Pair::Pair(const Pair& m)
{
	setFirst(m.first);
	setSecond(m.second);
}
Pair& Pair::operator ++ () {
	++first;
	return *this;
}
Pair& Pair::operator -- () {
	--first;
	return *this;
}
Pair Pair::operator ++ (int)
{
	Pair s(*this);
	first++;
	return s;
}
Pair Pair::operator -- (int)
{
	Pair s(*this);
	first--;
	return s;
}
ostream& operator << (ostream& out, Pair& s)
{
	out << string(s);
	return out;
}
istream& operator >> (istream& in, Pair& s)
{
	int x, y;
	cout << "Ціла частина числа: "; cin >> x;
	do {
		cout << "Дробова частина числа: "; cin >> y;
	} while (y < 0);
	s.setFirst(x);
	s.setSecond(y);
	return in;
}
Pair::operator string () {
	stringstream ss;
	ss << "Число: " << getFirst() << "." << getSecond() << endl;
	return ss.str();
}