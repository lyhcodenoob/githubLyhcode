#include<iostream>
#include<math.h>
#include<time.h>
using namespace std;
void main()
{
	srand(time(0));
	int a, b, c, d, e;
	for (int i = 0; i < 30; i++)
	{
		a = rand() % 100;
		b = rand() % 100;
		d = rand() % 100;
		e = rand() % 100;
		c = rand() % 4;
		if (c == 0)
		{
			if (a >= b)
			{
				cout << a << "+" << b << "=" << endl;
			}
			else if(a < b&&d < e)
			{
				cout << a << "/" << b << "+" << d << "/" << e << "=" << endl;
			
			}
		}
		if (c == 1)
		{
			if (a >= b)
			{
				cout << a << "-" << b << "=" << endl;
			}
			else if (a < b&&d < e)
			{
				cout << a << "/" << b << "-" << d << "/" << e << "=" << endl;
			}
		}
		if (c == 2)
		{
			if (a >=b)
			{
				cout << a << "*" << b << "=" << endl;
			}
			else if (a < b&&d < e)
			{
				cout << a << "/" << b << "*" << d << "/" << e << "=" << endl;
			}
		}
		if (c == 3)
		{
			if (a >= b)
			{
				cout << a << "/" << b << "=" << endl;
			}
			else if (a < b&&d < e)
			{
				cout << a << "/" << b << "/" << d << "/" << e << "=" << endl;
			}
		}
	}
}