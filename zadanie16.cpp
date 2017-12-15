#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <ctime>
#include <math.h>
void czyt_dane(int A[], int &n);
void pisz_tab(int A[], int n);
void srednia(int A[], int n);
void ile(int A[], int n);
void nieparzyste(int A[], int n);
void minimum(int A[], int n);
void maximum(int A[], int n);
void sasiednie(int A[], int n);
void najczestszy(int A[], int n);
using namespace std;
int main()
{
	int n;
	int A[100];
	czyt_dane(A, n);
	A[100] = n;
	pisz_tab(A, n);
	srednia(A, n);
	ile(A, n);
	nieparzyste(A, n);
	minimum(A, n);
	maximum(A, n);
	sasiednie(A, n);
	najczestszy(A, n);
	_getch();
}
void czyt_dane(int A[], int &n)
{
	int a, b;
	cout << "podaj rozmiar tablicy do liczby 100" << endl;
	cin >> n;
	cout << "podaj przedzia³ liczb od a do b" << endl;
	cout << "a=" << " ";
	cin >> a;
	cout << "b=" << " ";
	cin >> b;
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		A[i] = rand() % (b - a + 1) + a;
	}
	return;
}
void pisz_tab(int A[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << A[i] << " ";
		cout << endl;
	}
}
void srednia(int A[], int n)
{

	float srednia;
	int suma;
	suma = 0;
	for (int i = 0; i < n; i++) {
		suma += A[i];
	}
	srednia = suma / n;
	cout << "srednia wynosi" << " " << srednia << endl;
}
void ile(int A[], int n)
{


}
void nieparzyste(int A[], int n)
{
	int suma;
	suma = 0;
	cout << "liczby nieparzyste to" << " " << endl;
	for (int i = 0; i<n; i++)
		if (A[i] % 2 == 1) {
			cout << A[i] << " " << endl;
			suma += A[i];
		}
	cout << "suma liczb nieparzystych to" << " " << suma << endl;

}
void minimum(int A[], int n)
{
	int min;
	min = A[0];

	for (int i = 0; i < n; i++)
	{
		if (min > A[i])
			min = A[i];
	}
	cout << "minimum to" << " " << min << endl;
}
void maximum(int A[], int n)
{
	int max;
	max = A[0];


	for (int i = 0; i < n; i++)
	{
		if (max < A[i])
			max = A[i];
	}
	cout << "maximum to" << " " << max << endl;
}
void sasiednie(int A[], int n)
{
	int sas;
	sas = A[0] + A[1];


	for (int i = 0; i < n; i++)
	{
		if (sas < A[i] + A[i + 1])
			sas = A[i] + A[i + 1];
	}
	cout << "para sasiednich elementow o najwiekszej sumie" << " " << sas << endl;

}
void najczestszy(int A[], int n)
{
	int L, W, maxL, maxW;
	maxL = 0;
	maxW = 0;
	for (int i = 0; i < n; i++)
	{
		W = A[i];
		L = 0;
		for (int j = 0; j < n; j++)
			if (A[j] == W) L++;
		if (L > maxL)
		{
			maxL = L; 
		maxW = W; }
	}

	cout << "element najczesciej wystepujacy to " << " " << maxW << endl;

}