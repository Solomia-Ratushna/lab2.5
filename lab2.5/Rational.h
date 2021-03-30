#pragma once
#include "Pair.h"

class Rational
{
	Pair p;
public:

	int ComparePairs(const Pair p1, const Pair p2) const;
	void ComparePairsResult(int result);

	friend bool operator > (const Pair p1, const Pair p2);
	friend bool operator < (const Pair p1, const Pair p2);
	friend bool operator == (const Pair p1, const Pair p2);
};