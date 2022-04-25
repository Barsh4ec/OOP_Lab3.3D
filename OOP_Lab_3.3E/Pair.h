#pragma once
#include "Object.h"
#include <sstream>
#include <string>
using namespace std;
class Pair : public Object
{
private:
	int first;
	int second;
public:
	int getFirst() { return first; }
	int getSecond() { return second; }

	void setFirst(int value) { first = value; }
	void setSecond(int value) { second = value; }

	Pair();
	Pair(const int, const int);
	Pair(const Pair&);
	Pair& operator ++ ();
	Pair& operator -- ();
	Pair operator ++ (int);
	Pair operator -- (int);

	friend ostream& operator << (ostream&, Pair&);
	friend istream& operator >> (istream&, Pair&);
	operator string ();
};