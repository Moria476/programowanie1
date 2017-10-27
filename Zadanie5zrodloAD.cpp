#define _USE_MATH_DEFINES 
#include <iostream>
#include <conio.h> 
using namespace std;

int n, suma, k;
int main()
{
	suma = 0;
		cout << "podaj liczbe by obliczyc sume kwadratow od 1 do n "<<endl;
		cin >> n;
	

		for (k = 1; k <= n; k++)
		{
			if (k < n)
			{
				cout << k << "*" << k << "+";
			}

			else

			{
				cout << k << "*" << k << "=";
			}


			suma = suma + k*k;
		}
cout << "suma="<< suma;
	_getch();
	return(0);
}
