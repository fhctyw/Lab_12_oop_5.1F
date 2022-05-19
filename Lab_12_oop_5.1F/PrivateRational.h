// Rational.h
#pragma once
#include <string>
#include "Pair.h"
using namespace std;

class PrivateRational : Pair
{
public:
	PrivateRational(int a = 0, int b = 0) : Pair(a, b) {};
	PrivateRational(const Pair& p);
	PrivateRational(const PrivateRational& r);
	PrivateRational& operator=(const PrivateRational& r);

	Pair getPair() const { return *this; }
	void setPair(Pair p) { *this = p; }

	operator string() const;
	friend ostream& operator<<(ostream& out, const PrivateRational& r);
	friend istream& operator>>(istream& in, PrivateRational& r);

	friend PrivateRational operator+(const PrivateRational& r1, const PrivateRational& r2);
	friend PrivateRational operator/(const PrivateRational& r1, const PrivateRational& r2);
	friend PrivateRational operator-(const PrivateRational& r1, const PrivateRational& r2);
};
