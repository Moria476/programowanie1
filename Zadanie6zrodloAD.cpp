#define _USE_MATH_DEFINES 
#include <iostream>
#include <conio.h> 
using namespace std;

int a,b;
int main()
{
	a = 0;
	cout << "podaj liczbe a by wykazaæ wszystkie jej dzielniki b " << endl;
	cin >> a;




	for (b = 1; b <= a; b++)
	{
		if (a % b == 0) cout << b <<" ";
		}

	while (a == 0)
	{
		cout << "wynik nie okreœlony";

		_getch();
		return(0);
	}
	do
	{
		cout << "to sa wszystkie dzielniki" << endl;;
	} 
	while (b==a);

	_getch();
	return(1);
}