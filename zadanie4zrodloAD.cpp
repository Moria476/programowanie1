#define _USE_MATH_DEFINES 
#include <iostream>
#include <conio.h> 
using namespace std;

double a, b, c;
int main()
{
	cout << "podaj a ";
	cin >> a;
	cout << "podaj b ";
	cin >> b;
	cout << "podaj c ";
	cin >> c;

	
		if (a<b&&a<c)
		{
			cout << "a jest mniejsze niz b i c" << endl;

			_getch();
			return 1;
		}
		else
			if (b<a&&b<c)
			{
				cout << "b jest mniejsze niz a i c" << endl;
				_getch();
				return 1;
			}
			else
				if (c<b&&c<a)
				{
					cout << "c jest mniejsze niz b i a" << endl;

					_getch();
					return 1;
				}
		if (a==b&&a<c)
		{
			cout << "a i b jest najmniejsze" << endl;

			_getch();
			return 1;
		}
		else
			if (b<a&&b==c)
			{
				cout << "b i c jest najmniejsze" << endl;
				_getch();
				return 1;
			}
			else
				if (c<b&&c==a)
				{
					cout << "a i c jest najmniejsze" << endl;

					_getch();
					return 1;
				}
		if (a==b&&a==c)
		{
			cout << "wszystkie parametry s¹ równe" << endl;

			_getch();
			return 0;
		}
		
}