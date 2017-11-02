#define _USE_MATH_DEFINES 
#include <iostream>
#include <conio.h> 
using namespace std;

int n, suma, p, p1, x;
int main()
{
	do
	{

		cout << "podaj n" << endl;
		cin >> n;
		suma = 0;
		p = sqrt(n);

		while (p>1)
		{
			if (n%p == 0)
			{
				suma = suma + p;
				p1 = n / p;
				if (p1 != p)
				{
					suma = suma + p1;
					p = p - 1;
				}
				else
				{
					p = p - 1;
				}
			}
			else
			{
				p = p - 1;
			}

		}

		if (p < 1 || p == 1)
		{
			suma = suma + 1;
			if (suma == n)
			{
				cout << "n jest liczba doskonala";

			}
			else
			{

				cout << "n nie jest liczba doskonala";

			}

		}
		cout << "Jesli chcesz zakonczyc program nacisnij(2).";
		cin >> x;
	}

	while (x == 1);
	_getch();
	return(1);
}