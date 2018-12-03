// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include "windows.h"
using namespace std;
void main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double k, x, y, d = 0;
	cout << "¬вед≥ть x: ";
	cin >> x;
	for (k = 1; k < 11; k++)
	{
		d += k;
	}
	y = log10(d) + pow(x, 5);
	cout << "B = " << y << endl;

	system("pause");
}



