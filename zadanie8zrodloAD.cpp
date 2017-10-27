#define _USE_MATH_DEFINES 
#include <iostream>
#include <conio.h> 
using namespace std;

int a, b, nwp;
int main()
{
	cout << "podaj a" << endl;
	cin >> a;
	cout << "podaj b" << endl;
	cin >> b;
	if (a < 0 || b < 0)
	{
		cout << "brak rozwiazania";
		_getch();
		return(0);
	}
	else
		for (a; a > b; a--)
		{
			cout << a << endl;
		}
	for (b; a < b; b--)
	{
		cout << b << endl;
	}
	while (a == b)

	{
		nwp = a;
		cout << "nwp=" << nwp << endl;
		break;
	}

	_getch();
	return(1);
}