#define _USE_MATH_DEFINES 
#include <iostream>
#include <conio.h> 
using namespace std;

int a, b ,nww;
int main()
{
	cout << "podaj a"<<endl;
	cin >> a;
	 cout << "podaj b" << endl;
	cin >> b;
	if (a < 0|| b < 0)
	{
		nww = 0;
		cout << "nww=" << nww;
		_getch();
		return(0);
	}
	else
		for (a ; a < b; a++)
		{
			cout << a << endl;
		}
	for (b; a > b; b++)
	{
		cout << b << endl;
	}
		while (a == b)

		{
			nww = a;
			cout << "nww=" << nww << endl;
			break;
		}
		
	_getch();
	return(1);
}