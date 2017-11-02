
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
void czyt_wyraz(char A[], int &n);
void sprawdz_wyraz(char A[], int n);
int main()
{
	int n;
	char A[50];
	czyt_wyraz(A, n);
	sprawdz_wyraz(A, n);
	system("pause");
	return 0;
}
void czyt_wyraz(char A[], int &n)
{
	cout << "Podaj wyraz, do sprawdzenia: ";
	cin >> A;
	n = strlen(A);
	return;
}
void sprawdz_wyraz(char A[], int n)
{
	int i, j = n - 1;
	for (i = 0; i <n;)
	{
		if (i<j)
		{
			if (A[i] == A[j])
			{
				i++;
				j--;
			}
			else
			{
				cout << endl << "Wyraz nie jest palindromem" << endl << endl;
				break;
			}
		}
		else
		{
			cout << endl << "Wyraz jest palindromem" << endl << endl;
			break;
		}
	}
	return;
}