#include <iostream>
#include <conio.h> 
using namespace std;


void czytaj_dane(int &n, int X[], int Y[])
{
	cout << "Podaj rozmiar wektorow (n): " << endl;
	cin >> n;
	cout << "Podaj X i Y, oddzielajac wartosci przecinkiem " << endl;
	for (int i = 0; i < n; i++)
	{

		cin >> X[i] >> Y[i];
	}
}


int iloczyn_skalarny(int n, int X[], int Y[])
{
	int ans = 0;
	for (int i = n - 1; i < n; i++)
	{
		ans += X[i] * Y[i];
	}
	return ans;
}

int main()
{
	int n;
	int X[10];
	int Y[10];
	czytaj_dane(n, X, Y);
	cout << "Iloczyn: " << iloczyn_skalarny(n, X, Y);
	_getch();
	return(1);
}