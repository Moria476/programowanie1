#define _USE_MATH_DEFINES 
#include <iostream>
#include <conio.h> 
using namespace std;

int silnia(int liczba)
{
	if (liczba < 2) return liczba;
	return liczba*silnia(liczba - 1);
}
int wynik(int n, int k) 
{
	int wynik = silnia(n);
	return wynik /= silnia(k)*silnia(n - k);
}



int main()
{
	int n, x, k, wynik1;
	do
	{
		
		

		cout << "podaj n ";
		cin >> n;
		cout << "podaj k ";
		cin >> k;
		int wynik1 = wynik(n, k);
		cout << wynik1<<endl;

		cout << "Jesli chcesz kontynuowac program nacisnij(1)." << endl;
		cin >> x;

	} while (x == 1);
	_getch();
	return(1);
}
