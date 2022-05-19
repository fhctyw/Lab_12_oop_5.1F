#include <iostream>
#include "PubicRational.h"
#include "PrivateRational.h"
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	try {

		PubicRational r(3, 0);
		cout << r << endl;
	}
	catch (MyException* e)
	{
		cout << "MyException* " << e->What() << endl;
	}

	try
	{
		PubicRational r;
		r.setPair({ 3, 0 });
	}
	catch (RationalException e)
	{
		cout << "RationalException " << e.what() << endl;
	}

	try
	{
		PubicRational r;
		cin >> r;
	}
	catch (exception& e)
	{
		cout << "exception& " << e.what() << endl;
	}

	return 0;
}