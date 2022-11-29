#include <iostream>

using namespace std;

class ComplexDll
{
public:
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
	void Sum()
	{
		char sign = '+';
		if ((b + d) < 0)
			sign = ' ';
		cout << a + c << " " << sign << " " << b + d << "i";
	}

	void Vichitanie()
	{
		char sign = '+';
		if ((b - d) < 0)
			sign = ' ';
		cout << a - c << " " << sign << " " << b - d << "i";
	}

	void Umn()
	{
		char sign = '+';
		if ((b*c + a * d) < 0)
			sign = ' ';
		cout << a*c - b*d << " " << sign << " " << b*c + a*d << "i";
	}

	void Del()
	{
		char sign = '+';
		if ((b*c + a*d) < 0)
			sign = ' ';
		cout << (a*c + b*d) / (c*c + d*d) << " " << sign << " " << (b*c - a*d) / (c*c + d*d) << "i";
	}
};