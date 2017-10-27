#define _USE_MATH_DEFINES 
#include <iostream>
#include <conio.h> 
using namespace std;

double a, b, c, d, e, f;
double x, y;

int funkcjarachunki()
{
	double W, Wx, Wy;
	W = a*d - c*b;
	Wx = e*d - f*b;
	Wy = a*f - c*e;

	
	if (W != 0)
	{
		x = Wx / W;
		y = Wy / W;
		_getch();
		return 1;
	}
	else
		if (W == 0 && (Wx != 0 || Wy != 0))
		{
			cout << "uklad sprzeczny" << endl;
			_getch();
			return 0;
		}
		else
		{
			if (W == 0 && Wx == 0 && Wy == 0)
			{
				cout << "nieskonczenie wiele rozwiazan" << endl;
				_getch();
				return 0;
			}
		}
}

int main()
{

	cout << "Witamy w programie rozwiazujacym uklad rownan liniowych za pomoca wzorow Cramera." << endl;
	cout << "Podaj dane:" << endl;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	cout << "d = ";
	cin >> d;
	cout << "e = ";
	cin >> e;
	cout << "f = ";
	cin >> f;
	funkcjarachunki();

	cout << "Rozwiazanie ukladu rownan :" << endl;
	cout.width(8);
	cout.setf(ios::showpoint);
	cout.setf(ios::fixed);
	cout.precision(3);
	cout << "x=" << x  << endl;
	cout.width(8);
	cout << "y=" << y << endl;
	
	_getch();
	return 1;
}


