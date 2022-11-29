#include "stdafx.h"
#include <iostream>

using namespace std;

class ComplexDll
{   public:
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	ComplexDll(int a1, int b1, int c1, int d1)
	{
		a = a1;
		b = b1;
		c = c1;
		d = d1;
	};
	char Sum()
	{
		char sign = '+';
		if ((b + d) < 0)
			sign = '-';
		char res = (char)(a + c) + ' ' + sign + ' ' + (char)(b + d) + 'i';
	}

	char Vichitanie()
	{
		char sign = '+';
		if ((b - d) < 0)
			sign = '-';
		char res = (char)(a - c) + ' ' + sign + ' ' + (char)(b - d) + 'i';
	}

	char Umn()
	{
		char sign = '+';
		if ((b*c + a * d) < 0)
			sign = '-';
		char res = (char)(a*c - b * d) + ' ' + sign + ' ' + (char)(b*c + a * d) + 'i';
	}

	char Del()
	{
		char sign = '+';
		if ((b*c + a * d) < 0)
			sign = '-';
		char res = (char)((a*c + b * d) / (c*c + d * d)) + ' ' + sign + ' ' + (char)((b*c - a * d) / (c*c + d * d)) + 'i';
	}
};