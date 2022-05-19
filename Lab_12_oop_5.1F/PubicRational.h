// PubicRational.h
#pragma once
#include <string>
#include "Pair.h"
#include "MyException.h"
#include "RationalException.h"
using namespace std;

class PubicRational : public Pair
{
public:
	PubicRational(int a = 1, int b = 1) throw(MyException);
	PubicRational(const Pair& p);
	PubicRational(const PubicRational& r);
	PubicRational& operator=(const PubicRational& r);

	Pair getPair() const { return *this; }
	void setPair(Pair p) throw(RationalException);

	operator string() const;
	friend ostream& operator<<(ostream& out, const PubicRational& r);
	friend istream& operator>>(istream& in, PubicRational& r) throw(exception);

	friend PubicRational operator+(const PubicRational& r1, const PubicRational& r2);
	friend PubicRational operator/(const PubicRational& r1, const PubicRational& r2);
	friend PubicRational operator-(const PubicRational& r1, const PubicRational& r2);
};
