// ZadaniePowt1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Deklaracje.h"
using namespace std;


int main(void)
{
	long n = 0;
	cout << "Podaj liczb� ca�kowit� wi�ksz� od 0 ";
	cin >> n;
	long wynik = SumaLiczb(n);

	if (wynik<0)
	{
		cout << "Niestety podana warto�� jest mniejsza od 0, a ja chcia�em wi�ksz�";
		return 1;
	}
	else
		cout << "Wynik = " << wynik;

	return 0;
}
