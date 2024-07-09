#include "tools.h"
int main()
{
	int a;
	CIN >> a;
	int b = a % 2; // без остатка
	int f = a % 1; // с остатком
	auto c = a ? (a >= 0 && b == 0) : (a <= 0 && f != b); // true = 1 false = 0
	COUT << c << Endl;
	COUT << BITSET(a) << Endl; // вывод в двоичной системе
	if (a >= 0 && b == 0)
	{
		printone();
		COUT << a << Endl;
		COUT << (a = a << 2) << " = " << BITSET(a) << Endl;
	}
	else if (a <= 0 && b == 0)
	{
		printtwo();
		COUT << a << Endl;
		COUT << (a = a << 2) << " = " << BITSET(a) << Endl;
	}
	else if (a < 0  && f != b)
	{
		printthree();
		COUT << a << Endl;
		COUT << (a = a >> 2) << " = " << BITSET(a) << Endl;
	}
	else if (a > 0 && f != b)
	{
		printfour();
		COUT  << a << Endl;
		COUT << (a = a >> 2) << " = " << BITSET(a) << Endl;
	}
	return 0;
}


