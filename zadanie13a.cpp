#define _USE_MATH_DEFINES 
#include <iostream>
#include <conio.h> 
using namespace std;



int x,k,n,m,z;
int main()
{
	do
	{
		int n,i;
		long long silnia = 1, silnia1=1,silnia2=1;

		cout << "podaj n ";
		cin >> n;
		cout << "podaj k ";
		cin >> k;
		z = n - k;
		for (int i = 1; i <= n; i++)
			silnia= silnia*i;
			for (int j = 1; j <=k; j++)
				silnia1 = silnia1*j;
			for (int l = 1; l <= z; l++)
				silnia2 = silnia2*l;
			m = silnia / (silnia1*silnia2);
			cout << m<<endl;

		cout << "Jesli chcesz kontynuowac program nacisnij(1)." << endl;
		cin >> x;

	} while (x == 1);
	_getch();
	return(1);
}

