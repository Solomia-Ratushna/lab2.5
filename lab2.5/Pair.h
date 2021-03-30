//////////////////////////////////////////////////////////////////////////////
// Pair.h 
#pragma once
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Pair
{
	double first, second;

public:
	void SetFirst(double value);
	void SetSecond(double value);

	double GetFirst() const;
	double GetSecond() const;

	Pair();
	Pair(double, double);
	Pair(const Pair&);

	Pair& operator = (const Pair&);
	friend ostream& operator << (ostream&, const Pair&);
	friend istream& operator >> (istream&, Pair&);
	operator string() const;

	Pair& operator ++ ();
	Pair& operator -- ();
	Pair operator ++ (int);
	Pair operator -- (int);
};

