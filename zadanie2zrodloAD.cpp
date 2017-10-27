#define _USE_MATH_DEFINES 
#include <iostream>
#include <conio.h> 
using namespace std;

float a, b, r;

int main()
{
	cout << "podaj a ";
	cin >> a ;
	cout << "podaj b ";
	cin >> b ;
	cout << "podaj r ";
	cin >> r ;
	
		float j = a*a + 1;
		float k = 2 * a*b;
		float l = b*b - r*r;
		float delta = k*k - 4*j*l;

		if (delta<0)
		{
			cout << "Prosta nie ma punktow wspolnych z okregiem:" << endl;
			_getch();
			return 0;
		}
		else
	if (delta==0)
	{
		cout << "Prosta jest styczna do okregu:" << endl;
		float x = -k / 2 * j;
		float y = a*x + b;
		
	_getch();
	return 1;
	}
	else
		if (delta>0)
		{
			cout << "Prosta przecina okrag w dwoch punktach:" << endl;
			
				float x1 = (-k - sqrt(delta)) / 2 * j;
				float y1 = a*x1 + b;
				float x2 = (-k + sqrt(delta)) / 2 * j;
				float y2 = a*x2 + b;

				cout.setf(ios::fixed);
				cout.setf(ios::showpoint);
				cout.width(8);
				cout.precision(2);
				cout << "x1= " << x1 << " y1= " << y1 << endl;
				cout.width(8);
				cout << "x2= " << x2 << " y2= " << y2 << endl;

			_getch();
			return 1;
		}
}