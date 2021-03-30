//////////////////////////////////////////////////////////////////////////////
// Pair.h 
#include "Pair.h"

using namespace std;

void Pair::SetFirst(double value) { first = value; }
void Pair::SetSecond(double value) { second = value; }

double Pair::GetFirst() const { return first; }
double Pair::GetSecond() const { return second; }

Pair::Pair() { first = 0, second = 0; }
Pair::Pair(double first = 0, double second = 0)
{
	this->first = first;
	this->second = second;
}
Pair::Pair(const Pair& A)
{
	first = A.GetFirst();
	second = A.GetSecond();
}

Pair& Pair::operator = (const Pair& A)
{
	first = A.first;
	second = A.second;

	return *this;
}
ostream& operator << (ostream& out, const Pair& A)
{
	out << string(A);
	return out;
}
istream& operator >> (istream& in, Pair& A)
{
	cout << "________________________________" << endl;
	cout << "Enter a first number of pair: "; in >> A.first;
	cout << "Enter a second number of pair: "; in >> A.second;
	return in;
}
Pair::operator string() const
{
	stringstream ss;
	cout << "------------------------------------" << endl;
	ss << "First number of pair is equal to " << first << endl;
	ss << "Second number of pair is equal to " << second << endl;
	
	return ss.str();
}

Pair& Pair::operator ++ ()
{
	first++;
	return *this;
}
Pair& Pair::operator -- ()
{
	first--;
	return *this;
}
Pair Pair::operator ++ (int)
{
	Pair t(*this);
	second++;
	return t;
}
Pair Pair::operator -- (int)
{
	Pair t(*this);
	second--;
	return t;
}