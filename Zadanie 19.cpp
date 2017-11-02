#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <ctime>
void dane(int A[][10]);
void pisz_tab(int A[][10]);
void zamiana(int A[][10]);
using namespace std;
int main()
{
	int A[8][10];
	dane(A);
	pisz_tab(A);
	zamiana(A);
	pisz_tab(A);
	_getch();
}
void dane(int A[][10])
{
	int z = 1;
	int x = 10;
	srand(time(NULL));
	for (int a = 0; a < 8; a++) {
		for (int b = 0; b < 10; b++) {
			A[a][b] = rand() % (x - z + 1) + z;
		}
	}
}
void pisz_tab(int A[][10])
{
	for (int a = 0; a < 8; a++) {
		for (int b = 0; b < 10; b++) {
			cout << A[a][b] << " ";
		}
		cout << endl;
	}
}
void zamiana(int A[][10])
{
	int k;
	int l;
	cout << "zamiana wiersza (1-8)" << endl;
	cin >> k;
	cout << "zamiana wiersza (1-8)" << endl;
	cin >> l;
	
	for (int i = 0; i < 10; i++)
	{
	int b = A[k][i];
	A[k][i] = A[l][i];
	A[l][i] = b;
	}

}
