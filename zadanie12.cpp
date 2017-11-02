#define _USE_MATH_DEFINES 
#include <iostream>
#include <conio.h> 
using namespace std;


void sito(bool *tab, unsigned int n)
{
	for (int i = 2; i*i <= n; i++) 
	{              
		if (!tab[i])        
			for (int j = i*i; j <= n; j += i)
				tab[j] = 1;      
	}
}
int x;
int main()
{
	do
	{
		int n;
		bool *tab;

		cout << "Podaj zakres gorny przedzialu: ";
		cin >> n;

		tab = new bool[n + 1];

		for (int i = 2; i <= n; i++)
			tab[i] = 0;

		sito(tab, n); 

		cout << "Kolejne liczby pierwsze z przedzia³u [2.." << n << "]: ";

		for (int i = 2; i <= n; i++)
			if (!tab[i])
				cout << i << " ";
		delete[]tab;

		cout << "Jesli chcesz kontynuowac program nacisnij(1)." << endl;
		cin >> x;

	} while (x == 1);
	_getch();
	return(1);
}

