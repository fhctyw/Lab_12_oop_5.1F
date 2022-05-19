// PrivateRational.cpp
#include "PrivateRational.h"
#include <iostream>
#include <sstream>
using namespace std;


PrivateRational::PrivateRational(const Pair& p)
{
	setA(p.getA());
	setB(p.getB());
}

PrivateRational::PrivateRational(const PrivateRational& p)
{
	*this = p;
}

PrivateRational& PrivateRational::operator=(const PrivateRational& p)
{
	setA(p.getA());
	setB(p.getB());
	return *this;
}


PrivateRational::operator string() const
{
	stringstream ss;
	ss << getA() << '/' << getB();
	return ss.str();
}

ostream& operator<<(ostream& out, const PrivateRational& r)
{
	out << string(r);
	return out;
}

istream& operator>>(istream& in, PrivateRational& r)
{
	int a, b;
	cout << "Чисельник: "; cin >> a;
	cout << "Знаменник: "; cin >> b;
	r.setA(a);
	r.setB(b);
	return in;
}

PrivateRational operator+(const PrivateRational& r1, const PrivateRational& r2)
{
	return PrivateRational({ r1.getA() * r2.getB() + r1.getB() * r2.getA(), r1.getB() * r2.getB() });
}

PrivateRational operator/(const PrivateRational& r1, const PrivateRational& r2)
{
	return PrivateRational({ r1.getA() * r1.getB(), r2.getA() * r2.getB() });
}

PrivateRational operator-(const PrivateRational& r1, const PrivateRational& r2)
{
	return PrivateRational({ r1.getA() * r2.getB() - r1.getB() * r2.getA(), r1.getB() * r2.getB() });
}
